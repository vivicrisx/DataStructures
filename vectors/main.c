/* Aut@r: Viviane Cristine 
* Def. Lista: conjunto/sequencia de valores -> pode ser estatica ou dinamica
* Lista sequencial estatica: sequencia de valores agrupados de forma estatica na memoria
* Alocacao estatica: memoria alocada durante a compilaçao
* Estrutura de dado usada: vetor/array/matriz
* array - tem de definir um tamanho da lista, trabalha com index/posicao 
* 
*/ 

#include<stdio.h>
#include<stdlib.h>
#include"listas-seq.h"


int main(int argc, char *argv[ ]){

    //definindo a lista, ela n tem elementos
    List lista;
    
    //inserindo os elementos e criando a lista
    cria(&lista); //criando a lista, agora lista vazia
    insere_inicio(&lista, 15);
    insere_pos(&lista, 7, 1);
    insere_pos(&lista, 13, 2);
    insere_pos(&lista, 1, 3);
    insere_pos(&lista, 28, 4);
    insere_pos(&lista, 4, 5);
    insere_pos(&lista, 18, 6);
    insere_pos(&lista, 9, 7);
    insere_pos(&lista, 10, 8);
    insere_fim(&lista, 5);

    printf("posicao do numero 4: %d\n", posicao(lista, 4));
    printf("elemento na posicao 8: ");

    int t;
    t = tamanho(lista);
    printf("tamanho da lista: %d\n", t);

    //printando os elementos na lista antes da remocao
    exibir(lista);
    
    printf("\n--------------------------------------------------\n");
    remove_inicio(&lista);
    remove_fim(&lista);
    remove_inicio(&lista);
    remove_fim(&lista);
    remove_pos(&lista, 4);

    exibir(lista);

    return 0;
}

