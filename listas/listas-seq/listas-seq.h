/* Aut@r: Viviane Cristine */

#define MAX 10

//estrutura
struct tList{
    int dados[MAX];
    int qntd;
};

typedef struct tList List;

//prototipos
void cria(List *lista);
int vazia(List lista);
int cheia(List lista);
int tamanho(List lista);
int posicao(List lista, int valor);
void insere_inicio(List *lista, int valor);
void insere_fim(List *lista, int valor);
void insere_pos(List *lista, int valor, int pos);
void remove_inicio(List *lista);
void remove_fim(List *lista);
void remove_pos(List *lista, int pos);
void exibir(List lista);


