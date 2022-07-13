#include <stdio.h>
#include <stdlib.h>

/* 
Listas encadeadas - estrutura de dados onde um elemento aponta para o proximo elemento

funcoes: 
- criar lista
- inserir  elemento
- remover elemento
- verificar se esta vazia
- remover lista
- mostrar lista
- tamanho lista

*/


struct Lista{
    int elemento;
    int *prox;
    int tamanho;

}typedef Lista;


Lista CriarLista(){

    Lista lista1;
    lista1.elemento = 0;
    lista1.prox = NULL;
    
    lista1.tamanho = 0;

    return lista1;

}


int Vazia(Lista lista){

    if (lista.tamanho == 0);
        //printf("lista vazia");
        return 1;
  
}

Lista insert_list(Lista lista, int elemento){
 
    if(lista.tamanho == 0){
        Lista *alocado;
        alocado = malloc (sizeof (lista)); 
        alocado->elemento = elemento;
        alocado->prox = NULL;
        lista = *alocado;
        lista.tamanho++;
    }else{
        Lista *alocado;
        alocado = malloc (sizeof (lista)); 
        alocado->elemento = elemento;
        alocado->prox = NULL;
        //for()      
        lista.prox = alocado->prox;
        lista.tamanho++;
    }

return lista;

}

Lista remover(Lista lista, int elemento){
 
    
    

return lista;

}

void tamanho(Lista lista){
    printf("Tamanho da lista: %d \n", lista.tamanho);
}

void mostrarLista(Lista lista){

    Lista *aux;
    *aux = lista;
    
    for(int i = 1; i <= lista.tamanho; i++){
        printf("Posicao: %d Elemento:  %d \n", i, aux->elemento);
        aux = aux->prox;
    }
}



int main(){

    Lista lista1;
    lista1 = CriarLista();
    Vazia(lista1);
    lista1 = insert_list(lista1,5);
    lista1 = insert_list(lista1,4);
    lista1 = insert_list(lista1,3);
   // mostrarLista(lista1);
    tamanho(lista1);
    return 0;
}





/*
void menu(){
    Lista lista;
  

   

    switch(1){
        case 1:
            CriarLista();

            break;
        case 2:
            //AdicionarElemento();
            break;
        case 3:
            //RemoverElemento();
            break;
        case 4:
            //ExibirLista();
            break;
        default:
            break;

    }

}*/
