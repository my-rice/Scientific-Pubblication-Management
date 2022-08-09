#include <stdio.h>
#include "tree.h"
#include "info.h"
#include "bool.h"
#include "menu.h"
#include "gestione_pubblicazioni.h"

int main() {
    int scelta, inserimento, nodi;
    TTree pub;
    TNode *node;

    /* Inizializzo l'albero */
    pub = tree_create();

    //TInfo a=  read_info();


    /* Scelta della funzione per gestire l'archivio */

    scelta = 1;
    while (scelta) {
        scelta = menu();
        if (scelta == 1) {
            
            int inserimento = inserisci_pubblicazione (&pub);
            if (inserimento == -1) {
                printf("Errore nell'inserimento\n");
            } else
                printf("Inserimento corretto\n");
            
        } else if (scelta == 2) {
            
            int num = calcola_autori (pub);
            int nodes = tree_nodes_count(pub);
            if(nodes == 0){
                printf("Errore\n");
            }else{
                float media = (float)num/nodes;
                printf("media: %.2f\n", media);
            }
        } else if (scelta == 3) {
            
            TNode* m = cerca_max_autori(pub);
            if(m!=NULL){
                print_info(m->info);
            }else
                printf("Errore");
            
        } else if (scelta == 4) {
            
           TNode* l = cerca_pubblicazione (pub);
           if(l!=NULL){
                print_info(l->info);
            }else
                printf("Errore");
           
        } else if (scelta == 5) {
            stampa_pubblicazioni (pub);
        }
    }
}