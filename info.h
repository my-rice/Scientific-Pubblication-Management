#ifndef INFO_H
#define INFO_H

#define MAXKEY 9
#define MAXTITOLO 51
#define MAXAUTORE 16
#define TIPOLOGIA 3
#define ANNO 5


/*Definizione della chiave*/
typedef char *TKey;

/*Definizione della struttura per l'informazione satellite*/
struct SSatellite{
    char tipologia[TIPOLOGIA];
    char titolo[MAXTITOLO];
    char autore[MAXAUTORE];
    char anno[ANNO];
    int autori;
};


/*Definizione del tipo per l'informazione satellite*/
typedef struct SSatellite TSatellite;

/*Definzione della struttura per l'informazione*/
struct SInfo {
  TKey key;
  TSatellite satellite;
};

/*Definizione del tipo per l'informazione*/
typedef struct SInfo TInfo;

/*Legge da tastiera i dati dell'info. Restituisce l'info letta*/
TInfo read_info();

/*Legge da tastiera i dati dell'informazione satellite. Restituisce 
  l'informazione satellite letta*/
TSatellite read_satellite();

/*Legge da tastiera la chiave. Restituisce la chiave letta*/
TKey read_key();

/*Stampa l'informazione*/
void print_info(TInfo x);

/*Stampa la chiave */
void print_key(TKey k);

/*Stampa l'informazione satellite*/
void print_satellite(TSatellite s);

/*Confronta la chiave x con quella y. Restituisce 1 se x = y, 0 altrimenti*/
int equal(TKey x, TKey y);

/*Confronta la chiave x con quella y. Restituisce 1 se x > y, 0 altrimenti*/
int greater(TKey x, TKey y);

#endif
