/*****************************************************************/
/*   Grafo direcionado | PROG2 | MIEEC | 2019/20        */      
/*****************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "grafo.h"


grafo* grafo_novo()
{
    grafo *grafo_novo;
    grafo_novo = (grafo*)malloc(sizeof(grafo));
    
    if (grafo_novo == NULL)
        return NULL;

    grafo_novo->nos = NULL;
    grafo_novo->tamanho = 0; 

    return grafo_novo;
}


void grafo_apaga(grafo* g)
{  
//NÃO É PRECISO DAR FREE NOS INT
  /*  free (g->tamanho);
    free (g->nos->nome_user);
    free (g->nos->tamanho);
    free (g->nos->ligacoes);
    free (g->nos->ligacoes->peso_ligacao);
    free (g->nos->ligacoes->destino);
    free (g->nos);
    free (g);*/
  
}


no_grafo * no_insere(grafo *g, char *user)      //Não sei fazer o caso repetido
{/*
    if(user == NULL)
        return NULL;

    int tam, i;
    no_grafo *novo_no;
    novo_no = (no_grafo*)malloc(sizeof(no_grafo));   

    tam = sizeof(g->nos);

    g->nos[tam+1]->nome_user = user;
    for(i=0; i<tam+1; i++)
    {
        novo_no[i] = g->nos[i];
    }
    
    return novo_no;*/return NULL;
}

int  cria_ligacao(no_grafo *origem, no_grafo *destino, int peso)
{
   
    return -1;

}


no_grafo * encontra_no(grafo *g, char *nomeU)
{
        return NULL;
}




grafo * criaGrafo(tabela_dispersao *td)
{
    return NULL;
}



no_grafo **lista_amigos(grafo *g, char *nomeU, int *n)
{
   return NULL;
}



no_grafo ** identifica_ciclo(grafo *g, char *nomeU, int M, int *n)
{
    
    return NULL;

  
}