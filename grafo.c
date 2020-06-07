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
    grafo_novo = (grafo*)malloc(sizeof(grafo));         //Atribuir memória para o grafo_novo
    
    if (grafo_novo == NULL)
        return NULL;

    grafo_novo->nos = NULL;
    grafo_novo->tamanho = 0;                            //Grafo_novo de tamanho zero

    return grafo_novo;
}


void grafo_apaga(grafo* g)
{  
   if(g == NULL)
        return;

    int i, j;

    if (g->nos != NULL)                                 //Libertar memória de cada componente do grafo
    {
        for(i=0; i<g->tamanho; i++)                     //Corre todos os nos
        {
            free (g->nos[i]);
            free (g->nos[i]->nome_user);
            free (g->nos[i]->ligacoes);
            for(j=0; j<g->nos[i]->tamanho; j++)         //Corre todas as ligações
            {
                free (g->nos[i]->ligacoes[j]);
            }
        }
        free (g->nos);
    }
    free (g); 
}


no_grafo * no_insere(grafo *g, char *user)      
{   
    if(g == NULL || user == NULL)
        return NULL;

    int i;
    no_grafo *novo_no;
    novo_no = (no_grafo*)malloc(sizeof(no_grafo));              //Atribuição memória para novo_no

    for (i=0; i<g->tamanho; i++)
    {
        if (strcmp(g->nos[i]->nome_user, user) == 0)            //Caso no repetido
            return NULL;
    }

    int tam = g->tamanho;
    g->tamanho++;

    
    if(tam == 0)                                                    
    {
        g->nos = (no_grafo**)malloc(sizeof(no_grafo*)*(g->tamanho));        //Atribuição de memória para g->nos
        if(g->nos == NULL)
            return NULL;
    }

    else
    {
        g->nos = realloc(g->nos, sizeof(no_grafo*)*(g->tamanho));           //Aumento de memória para g->nos
        if(g->nos == NULL)
           return NULL;
    }
    
    //if(g->nos == NULL)
      //  return NULL;

            
    if(novo_no == NULL)
        return NULL;  
        
    novo_no->nome_user = (char *)malloc(strlen(user)+1);                    //Atribuição de memória para novo_no->nome_user
    if(novo_no->nome_user == NULL)                                          
    {
        free(novo_no);
        return NULL;
    }

    strcpy(novo_no->nome_user, user);
    novo_no->tamanho = 0;
    novo_no->ligacoes = NULL;
    g->nos[tam] = novo_no;  
    
    return g->nos[tam]; 
}
    /*if(!g || !user)
        return NULL;

    
    for (int i = 0; i < g->tamanho; i++)
    {
        if (strcmp(g->nos[i]->nome_user , user) == 0)    return NULL;
    }

    int Tam_G = g->tamanho;
    g->tamanho++;
    
    if(Tam_G == 0){
        g->nos = (no_grafo **)malloc(sizeof(no_grafo*)*(g->tamanho));
    }else{
        g->nos = (no_grafo **)realloc(g->nos, sizeof(no_grafo*)*(g->tamanho));
    }
    
    no_grafo *novo = (no_grafo *) malloc(sizeof(no_grafo));
    if(!novo) return NULL;

    novo->nome_user = (char *)malloc(strlen(user)+1);
    if(novo->nome_user == NULL)
    {
        free(novo);
        return NULL;
    }
    strcpy(novo->nome_user , user);
                                     
    novo->tamanho = 0;
    novo->ligacoes = NULL;
    g->nos[Tam_G] = novo;
    
    return g->nos[Tam_G];*/


int  cria_ligacao(no_grafo *origem, no_grafo *destino, int peso)
{
    if(origem == NULL || destino == NULL || peso<= 0)
        return -1;

    ligacao* lig_aux;
    lig_aux = (ligacao*)malloc(sizeof(ligacao));

    if(lig_aux == NULL)
        return -1;

    if (origem->tamanho == 0)
        origem->ligacoes = malloc(sizeof(ligacao*));
    else{ 
        origem->ligacoes = realloc(origem->ligacoes,sizeof(ligacao*)*(origem->tamanho + 1));
        }

    
    lig_aux->peso_ligacao = peso;
    lig_aux->destino = destino;
    origem->ligacoes[origem->tamanho] = lig_aux;

    origem->tamanho++;

    return 0; 
    
}


no_grafo * encontra_no(grafo *g, char *nomeU)
{
    int i;
    if(g == NULL || nomeU == NULL)
        return NULL;

    for(i=0; i<g->tamanho; i++)
    {
        if (strcmp(g->nos[i]->nome_user, nomeU) == 0)
        {
           return 0; 
        } 
    }
    return 0;
}


grafo * criaGrafo(tabela_dispersao *td)
{
   if(td == NULL)
        return NULL;
 
    int i;
    elemento *elem1, *elem2;
    grafo* g;
    g = grafo_novo();

    if(g == NULL)
        return NULL;

    for(i=0; i<td->tamanho; i++)
    {
        elem1 = td->elementos[i];
        while(elem1 != NULL)
        {
            int totMsg[2] = {0};
            elem2 = elem1->proximo;
            no_insere(g, elem1->msg->remetente);
            no_insere(g, elem1->msg->destinatario);
            ligacao2(td, elem1->msg->remetente, elem1->msg->destinatario, totMsg);
            cria_ligacao(encontra_no(g, elem1->msg->remetente), encontra_no(g, elem1->msg->destinatario),totMsg[0]);
            elem1 = elem2;
        }
    }
    return g;      

}



no_grafo **lista_amigos(grafo *g, char *nomeU, int *n)
{
   return NULL;
}



no_grafo ** identifica_ciclo(grafo *g, char *nomeU, int M, int *n)
{
    
    return NULL;

  
}