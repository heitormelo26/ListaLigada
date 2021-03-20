#include<string.h>
#include<stdio.h>
#include<stdlib.h>

struct var{
	char *nome;
	struct var *prox;
};



struct var* criaLista(struct var *cabeca){
	cabeca = (struct var*)malloc(sizeof(struct var));
	cabeca->prox = NULL;
	return cabeca;
}


void insereFinal(struct var *L,struct var *x){
	
	if(L == NULL){
		return;	
	}
	
	struct var *p=L->prox;
	
	if(p==NULL){
	    L->prox=x;
	    L->prox->prox=NULL;
	}else{
    	while(p->prox!=NULL){
    		p=p->prox;
    	}
    p->prox=x;
    x->prox=NULL;
	}
}

struct var* retornaPorNome(struct var *L,char *chave){
	if(L == NULL){
		return NULL;	
	}
	
	struct var *p = L->prox;
	struct var *q = L;
	while( p != NULL && strcmp(p->nome,chave) != 0 ){
		q = p;
		p = p->prox;
		if(p->prox == NULL){
			if(strcmp(p->nome,chave) != 0 ){
				p = NULL;
			}
			break;
		}	
	}
	if(p == NULL){
    	printf(" -- Valor ja foi retirado!! \n");
	}
	return p; 
}

void imprimeFila(struct var *T, int x){
	
	if(x==0){
		if(T->prox==NULL){
			return;	
		}
		int i=0;
		struct var *p=T->prox;
		while(p!=NULL){
			p=p->prox;
		}
	}else{
		if(T->prox==NULL){
			printf("NULL");
			return;	
		}
		int i=0;
		struct var *p=T->prox;
		while(p!=NULL){	
			p=p->prox;
		}
	}
}


int main(){
	struct var* listaVar = criaLista(listaVar);
}
