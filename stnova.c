/*****************************************************************/
/*   Estrutura nova a implementar | PROG2 | MIEEC | 2019/20   */      
/*****************************************************************/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "stnova.h"



estrutura* st_nova()
{
    estrutura *st;

    st = (estrutura*)malloc(sizeof(st));    //Atribuição de memória para a st

//    novo =(estrutura*)malloc(sizeof(estrutura));

//   if(novo==NULL)return NULL;

// novo->tamanho = 0;

//   pesoTotal = (int *)malloc(sizeof(int));

//   nomeremetente = (char*)malloc(sizeof(char)); 
//   nomedestinatario = (char*)malloc(sizeof(char));

//   enviado = (elemento*)malloc(sizeof(elemento));
//   recebido =  (elemento*)malloc(sizeof(elemento));

//   return novo;

    if (st == NULL)
        return NULL;
    else
    {
        st->...                 //VER QUAIS AS COMPONENTES DA ESTRUTURA
        st->...
        return st;
    }
}
//NÃO ESTÁ ACABADO

int st_insere(estrutura *st, elemento *elem)
{
//    if(st == NULL || elem == NULL)return -1;

//   st->duos =(duo*)realloc(st->duos,(st->tamanho)*sizeof(duo));

//   st->tamanho+=1;

//   st->duos[st->tamanho]->enviado = elem;

//   elemento *aux1;
//   int cont = 0;
//   int i,j;
//   duo **ok;

//   while(elem != NULL)
//   {

//   if(strcmp(elem->msg->destinatario,st->duos[st->tamanho]->nomedestinatario)==0) && strcmp(elem->msg->remetente,st->duos[st->tamanho]->nomeremetente)==0))
//   {
//    if(cont==0) aux1 = (elemento*)malloc(sizeof(elemento));
//    else aux1 = (elemento*)realloc(aux1,(n+1)*sizeof(elemento));
   
//    aux1 = st->duos[st->tamanho]->aux;
    
//    cont++;
//    aux1 = aux1->proximo;
//   } 
  
//   elem = elem->proximo;  

//   } 

//   aux1->proximo = NULL;        

//   st->duos[st->tamanho]->aux = aux1;
      
//   st->duos[st->tamanho]->pesoTotal = cont;

//    for (int i = 0; i < st->tamanho - 1; i++)
//    {
//       for (int j = i; j <st->tamanho - 1; j++)
//        {
//            if (st->duos[i]->pesoTotal < st->duos[j]->pesoTotal)
//            {
//                ok = st->duos[i];
//                st->duos[i] = st->duos[j];
//                st->duos[j] = ok;
//            }
//     }
//   }

	return -1;

}


int st_importa_tabela(estrutura *st, tabela_dispersao *td)
{
    FILE *f = fopen(nomef, "r");
    if(f == NULL) 
        return -1;

    estrutura *st = st_nova();
    if(st == NULL)
    {
        return -1;
        fclose(f);
    }


    //NÃO ESTÁ ACABADA
}

elemento *st_remove(estrutura *st,char *remetente)
{
   if(st==NULL || remetente ==NULL)return NULL;

   int tabela_existe(st->tab,remetente);
   
    return NULL; 
}


int st_apaga(estrutura *st)
{
    if (st == NULL)    
        return -1;

    if(st != NULL)                  //Libertar e apagar a memória de todas as instâncias da estrutura do st 
    {                               // ... substituir pelas componentes
        free (st -> ...);
        free (st -> ...);
        free (st -> ...);
    }
    else
        return -1;
}

