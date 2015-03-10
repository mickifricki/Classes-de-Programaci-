#ifndef _ClassList_H_
#define _ClassList_H_

#include <stdio.h>


//https://ronnyml.wordpress.com/2009/07/04/listas-enlazadas-clase-lista-en-c/

class SList {

	struct node {
		int valor;
		node* next;
		void DeleteAll(){
			if (next)
				next->DeleteAll();
			delete this;
		}
	};

//private:
	node* start;
//public:

	
	SList():start(NULL){};
	void AddLast(int valor) {
		node* new_node = new node;
		new_node->valor = valor;
		new_node->next = NULL;
		node* tmp = start;
		if (!start){
			start = new_node;
		}
		else{
			while (tmp->next != NULL){
				tmp = tmp->next;
			}
			tmp->next = new_node;
		}
	};
	void AddStart(int valor) {
		node* new_node = new node;
		new_node->valor = valor;
		new_node->next = NULL;
		node* tmp = start;
		if (!start){
			start = new_node;
		}
		else{
			while (tmp->next != NULL){
				tmp = tmp->next;
			}
			new_node->next = start;
			start = new_node;
		}
	};
	
	unsigned int Count() const{
		unsigned int resultat = 0;
		node* tmp = start;
		while (tmp != NULL){
			tmp = tmp->next;
			resultat++;
		}
		return resultat;
	};

	void DelAll(){
		start->DeleteAll();
		start = 0;
	}

	void DelNodePos(int pos){
		node *tmp = start;
		node *tmp1 = tmp->next;

		if (pos < 1 || pos > Count()){
			printf("Fuera de Rango capullo!");
		}
		else if (pos == 1){
			start = tmp->next;
		}
		else {
			for (int i = 2; i <= pos; i++){
				if (i == pos){
					//node *auxiliar_node = tmp1;
					tmp->next = tmp1->next;
					//delete auxiliar_node;
				}
				tmp = tmp->next;
				tmp1 = tmp1->next;
			}
		}
	}
	


};

#endif //_ClassList_H_