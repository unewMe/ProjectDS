#ifndef PROJECTDS_BST
#define PROJECTDS_BST
#include"Comparator.h"
template <typename T> class BST
{
private:
	Comparator<T> comparator;
	class Node 
	{
		public:
			Node *leftNode;
			Node *rightNode;
			T value;
		public:
			Node(T value) 
			{
				this->value = value;
			};
			int compare(Node* node)
			{
				return comparator.compare(value, node.value);
			}

	};
	Node *root=nullptr;
public:
	BST(Comparator<T> comparator2)
	{
		this->comparator = comparator2;
	};
	bool add(T key);
	bool remove(T key);
	bool search(T key);
private:
	Node* findNodeBefore(Node* node);
};
#endif 
