#ifndef _ClassList_H_
#define _ClassList_H_

#include <stdio.h>

class SList {

	struct node {
		int valor;
		node* next;
	};

private:
	node* start;
public:

	
	SList():start(NULL){};
	void Add(int valor) {
		node* new_node = new node;
		new_node->valor = valor; 
		new_node->next = NULL;
		node* tmp = start;
		if (tmp != NULL){
			while (tmp->next != NULL){
				tmp = tmp->next;
			}
		}
		tmp->next = new_node;
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

	void Del(node* n){
		



	}
	


};

#endif //_ClassList_H_