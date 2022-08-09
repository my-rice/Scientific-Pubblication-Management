#include <stdio.h>
#include <string.h>
#include <malloc.h>
#include "info.h"

TInfo read_info()
{
   TInfo info;

   info.key = read_key();
   info.satellite = read_satellite();

   return info;
}


int equal(TKey x, TKey y)
{
   if (strcmp(x, y) == 0)
      return 1;
   else
      return 0;
}

int greater(TKey x, TKey y)
{
   if (strcmp(x, y) == 1)
      return 1;
   else
      return 0;
}

void print_info(TInfo x)
{
   print_key(x.key);
   print_satellite(x.satellite);   
   printf("\n");
}

void print_key(TKey k)
{
   printf("%9s  ", k);
}

void print_satellite(TSatellite s)
{
   printf("%3s  %51s  %16s  %5d  %3d", s.tipologia, s.titolo, s.autore, s.anno, s.autori);
}



TSatellite read_satellite()
{
   TSatellite sat;

   int saldo;

   do{
   printf ("Inserisci la tipologia della pubblicazione [RI/RN/CI/CN] ");
   scanf ("\n%s", sat.tipologia);
   while(getchar()!='\n');
   } while (strcmp(sat.tipologia, "RI")!=0 && strcmp(sat.tipologia, "RN")!=0 && strcmp(sat.tipologia, "CI")!=0 && strcmp(sat.tipologia, "CN")!=0);

   printf ("Inserisci il titolo della pubblicazione ");
   //fflush(stdin);
   //gets(sat.titolo);
   scanf ("%s", sat.titolo);
   while(getchar()!='\n');
   //fflush(stdin);

   printf ("Inserisci il cognome del'autore principale ");
   scanf ("%s", sat.autore);
   while(getchar()!='\n');
   
   do{
   printf ("Inserisci l'anno della pubblicazione ");
   scanf ("%s", sat.anno);
   while(getchar()!='\n');
   
   } while (strlen(sat.anno)!= ANNO-1);

   do{
   printf ("Inserisci numero di autori [> 0] ");
   scanf ("%d", &sat.autori);
   while(getchar()!='\n');
   
   }while (sat.autori <=0);
   
   return sat;
}


TKey read_key()
{
   TKey key;
   char tmp[MAXKEY];

   do
   {
   printf ("Inserisci l'ISBN della pubblicazione (8 caratteri): ");
   scanf ("%s", tmp);
   while(getchar()!='\n');
   } while (strlen (tmp)!=MAXKEY-1);

   key = (TKey)malloc(MAXKEY*sizeof(TKey));
   strcpy (key, tmp);

   return key;

}

