#ifndef GESTIONE_PUBBLICAZIONI_H
#define GESTIONE_PUBBLICAZIONI_H

#include "tree.h"

/*La funzione legge il dato TInfo e inserisce un nuovo nodo nell'albero binario.
  La funzione restituisce 1 se l'inserimento va a buon fine, -1 altrimenti.
  (La funzione viene già fornita)*/
int inserisci_pubblicazione (TTree *pub);

/*La funzione calcola il numero totale di autori per le pubblicazioni memorizzate
  in archivio, in pratica fa la somma del campo relativo al numero di autori di
  tutti i nodi dell'albero. La funzione restituisce il numero totale di autori
  presenti in archivio.*/
int calcola_autori (TTree pub);

/*La funzione ricerca la pubblicazione con maggior numero di autori. La funzione
  restituisce il nodo relativo alla pubblicazione con maggior numero di autori.
  (Ricorsiva).*/
TNode* cerca_max_autori(TTree pub);

/*La funzione legge da tastiera l'ISBN della pubblicazione e cerca all'interno
  dell'albero la pubblicazione con l'ISBN dato. La funzione restituisce il nodo
  cercato. (Iterativa)*/
TNode* cerca_pubblicazione (TTree pub);

/*La funzione stampa, le informazioni di tutte le pubblicazioni in archivio.
  La funzione non restituisce alcun valore. (La funzione viene già fornita)*/
void stampa_pubblicazioni (TTree pub);

#endif
