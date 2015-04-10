#ifndef _NODE_H_
#define _NODE_H_
template <class TYPE>

struct Node
{
	TYPE data;

	Node *child;
	Node *father;

	void Add(const DATA& data)
	{
		tree_node<DATA>* node = new tree_node(data);
		root.child.add(node);
		node->father = root;
		
	}

};




#endif