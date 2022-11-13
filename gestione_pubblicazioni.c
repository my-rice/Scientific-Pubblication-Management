#include <stdio.h>
#include <stdlib.h>
#include "gestione_pubblicazioni.h"

/*La funzione legge il dato TInfo e inserisce un nuovo nodo nell'albero binario.
  La funzione restituisce 1 se l'inserimento va a buon fine, -1 altrimenti.
  (La funzione viene gi� fornita)*/
int inserisci_pubblicazione (TTree *pub)
{
   TInfo info;
   TNode* node;
   
   info = read_info();
   node = tree_search(*pub, info.key);
   if (node == NULL)
      *pub = tree_insert(*pub, info);
   else
      return -1;
   return 1;
}

/*La funzione calcola il numero totale di autori per le pubblicazioni memorizzate
  in archivio, in pratica fa la somma del campo relativo al numero di autori di
  tutti i nodi dell'albero. La funzione restituisce il numero totale di autori
  presenti in archivio.*/
int calcola_autori (TTree pub)
{
    if(pub == NULL){
        return 0;
    }
    
    int l =pub->info.satellite.autori;
    return l + calcola_autori (pub->left) + calcola_autori (pub->right);

}

/*La funzione ricerca la pubblicazione con maggior numero di autori. La funzione
  restituisce il nodo relativo alla pubblicazione con maggior numero di autori.
  (Ricorsiva).*/
TNode* max(TNode* a,TNode* b){
    if(a == NULL){
        return b;
    }
    if(b == NULL){
        return a;
    }if( a->info.satellite.autori > b->info.satellite.autori){
        return a;
    }else
        return b;
}

TNode* cerca_max_autori(TTree pub)
{
    if(pub == NULL){
        return NULL;
    }

    TNode* a = cerca_max_autori(pub->left);
    TNode* b = cerca_max_autori(pub->right);
    a = max(a,pub);
    b = max(b,pub);
    return max(a,b);
}

/*La funzione legge da tastiera l'ISBN della pubblicazione e cerca all'interno
  dell'albero la pubblicazione con l'ISBN dato. La funzione restituisce il nodo
  cercato. (Iterativa)*/
TNode* cerca_pubblicazione (TTree pub)
{
    TKey key = read_key();
    return tree_search(pub, key);
}

/*La funzione stampa, le informazioni di tutte le pubblicazioni in archivio.
  La funzione non restituisce alcun valore. (La funzione viene già fornita)*/
void stampa_pubblicazioni (TTree pub)
{
   tree_print(pub);
}

