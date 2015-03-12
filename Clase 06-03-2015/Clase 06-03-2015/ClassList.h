#ifndef _ClassList_H_
#define _ClassList_H_

#include <stdio.h>


//https://ronnyml.wordpress.com/2009/07/04/listas-enlazadas-clase-lista-en-c/


template <class T>  

struct node {
	T value;
	node<T> *next;
	node<T> *previous;
	void DeleteAll(){
		if (next)
			next->DeleteAll();
		delete this;
	}
};

template <class T> class
SList {

private:
	node<T>* start;
public:

	
	SList():start(NULL){};
	void AddLast(T value) {
		node<T>* new_node = new node<T>;
		new_node->value = value;
		new_node->next = NULL;
		node<T>* tmp = start;
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
	void AddStart(T value) {
		node<T>* new_node = new node<T>;
		new_node->value = value;
		new_node->next = NULL;
		node<T>* tmp = start;
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
		node<T>* tmp = start;
		while (tmp != NULL){
			tmp = tmp->next;
			resultat++;
		}
		return resultat;
	};

	void DelAll(){
		if (start != NULL){
			start->DeleteAll();
			start = 0;
		}
	}

	void DelNodePos(int pos){
		if (start != NULL){
			node<T> *tmp = start;
			node<T> *tmp1 = tmp->next;
			if (pos < 1 || pos > Count()){
				printf("Fuera de Rango capullo!");
			}
			else if (pos == 1){
				start = tmp->next;
			}
			else {
				for (int i = 2; i <= pos; i++){
					if (i == pos){
						node *auxiliar_node = tmp1;
						tmp->next = tmp1->next;
						delete auxiliar_node;
					}
					tmp = tmp->next;
					tmp1 = tmp1->next;
				}
			}
		}
	}
};

#endif //_ClassList_H_