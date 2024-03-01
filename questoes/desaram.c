#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define RANGE 2

struct node {
    char s;
    int inicio;
    int tama;
    struct node *prox;
};

void gerarram( int *, int);
void criarnovo(struct node *);
void mapear(int *, int, struct node *);
void imprimirram(int *, int);
void imprimirnodes(struct node *);
void inserir(struct node *);
void ocuparramfirst(int , struct node *);
void atualizarram( int *, struct node*);

int main(int argc, char *argv[]){

    if(argc !=2){
        printf("\nformato invalido! tente: './%s <range de memoria>'", *argv);
        exit(1);
    }

    int tam = atoi(argv[1]);

    int *ram;

    if(!(ram = (int*)malloc(sizeof(int)*tam))){
        puts("\nmemoria indisponivel!");
        exit(2);
    }

    struct node head, vazio;
    head.prox = &vazio;

    gerarram(ram, tam);

    mapear(ram, tam, &head);

    puts("\n____________________________________________________________");
    imprimirram(ram, tam);
    puts("\n____________________________________________________________");

    //imprimirnodes(&head);

    int n = 1;
    while(n){
        puts("digite quantos espacos precisa ocupar: ");
        scanf("%i", &n );
        if(n){
            ocuparramfirst(n, &head);
            atualizarram(ram, &head);

            puts("\n____________________________________________________________");
            imprimirram(ram, tam);
            puts("\n____________________________________________________________");
        }
    }

    //imprimirnodes(&head);

    free(ram);
    return 0;
}

void gerarram( int *r, int t){
    srand(time(NULL));
    for(int i =0; i < t; i++){
        (rand()%2) ? (*(r + i) = 1) : (*(r + i) = 0);
    }
}

void criarnovo(struct node *p){

    struct node *n;
    n = malloc(sizeof(struct node));

    n->prox = NULL;
    p->prox = n;
}

void inserir(struct node *p){

    struct node *n;
    n = malloc(sizeof(struct node));

    n->prox = p->prox;
    p->prox = n;

}

void mapear(int *r, int t, struct node *h){

    struct node *b;
    b = h->prox;

    b->inicio = 0;
    b->tama = 1;
    (*r) ? (b->s = 'f') : (b->s = 'v');

    for(int k = 1; k < t; k++){
        if(*(r + k) == *(r + k - 1)){
            b->tama ++;
        }else {
            criarnovo(b);
            b = b->prox;

            b->inicio = k;
            b->tama = 1;
            (*(r + k)) ? ( b->s = 'f') : (b->s = 'v');

        }
    }
}

void imprimirram(int *r, int t){

    for(int k = 0; k < t ; k++){
        printf("|%d ",*(r + k));
    }
}

void imprimirnodes(struct node *p){
    struct node *k;
    for(k = p->prox; k != NULL; k = k->prox){
        puts("\n------------------------");
        printf("\n[%p] \nstatus: %c \ninicio: %d \ntamanho: %d \nproximo: [%p]", k, k->s, k->inicio, k->tama, k->prox);
        puts("\n------------------------");
    }
}

void ocuparramfirst(int u, struct node *p){

    struct node *k;
    int cont = 0;
    for(k = p->prox; k != NULL; k = k->prox){
        if(k->s == 'v' & k->tama >= u){

            inserir(k);

            (k->prox)->s = 'v';
            (k->prox)->inicio = (k->inicio)+u;
            (k->prox)->tama = k->tama - u;

            k->s = 'f';
            k->tama = u;

            cont = 1;
            puts("\nmemoria alocada!");
            break;
        }
    }
    
    if(!cont) puts("\nnao ha espacos disponiveis!");

}

void atualizarram( int *r, struct node*p){

    struct node *l;
    for(l = p->prox; l != NULL; l = l->prox){

        for(int g = l->inicio ; g < (l->inicio + l->tama ); g++){

            (l->s == 'f') ? ( *(r + g) = 1) : ( *(r + g) = 0);

        }
    }
}
