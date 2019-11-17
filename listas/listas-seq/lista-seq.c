/* Aut@r: Viviane Cristine */

#include<stdio.h>
#include<stdlib.h>
#include "listas-seq.h"

//cria lista
void cria(List *lista){
    lista->qntd = 0;
}

//verifica se ta vazia
int vazia(List lista){

    if(lista.qntd == 0)
        return 1;
}

//verifica se ta cheia
int cheia(List lista){
    if(lista.qntd == MAX)
       return 0;
}

//retorna tamanho da lista
int tamanho(List lista){
    return lista.qntd;
}

//retorna posicao que um elemento ta
int posicao(List lista, int valor){
    int i;
    for(i = 0; i < lista.qntd; i++){
        if(lista.dados[i] == valor){
            return i;
        }
    }
}

//insere no inicio
void insere_inicio(List *lista, int valor){

    int i;
    for (i = lista->qntd; i >= 0; i--){
 		 lista->dados[i] = lista->dados[i-1];
    }
    lista->dados[0] = valor;
    lista->qntd++;
}

//insere na ultima posicao
void insere_fim(List *lista, int valor){

    int i;

    if(lista->qntd != 0){
        lista->dados[lista->qntd] = valor;
    }
    lista->qntd++;
}

//insere na posicao dada
void insere_pos(List *lista, int valor, int pos){

    int i = 0;
    for(i = lista->qntd; i >= pos; i--){
        lista->dados[i] = lista->dados[i-1];
    }
    lista->dados[pos] = valor;
    lista->qntd++;
}

//remove o primeiro elemento da lista
void remove_inicio(List *lista){

    int i;
    for(i = 0; i < lista->qntd-1; i++){
        lista->dados[i] = lista->dados[i+1];
    }
    lista->qntd--;
}

//remove element no fim
void remove_fim(List *lista){

    lista->qntd--;
}

//remov na posicao dada
void remove_pos(List *lista, int pos){
    int i;
    for(i = pos; i < lista->qntd; i++){
        lista->dados[i] = lista->dados[i+1];
    }
    lista->qntd--;
}

void exibir(List lista){
    int i;
    for(i = 0; i < tamanho(lista); i++){
        printf("\n %d :  %d", i, lista.dados[i]);
    }    
}
