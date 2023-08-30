#include"BST.h"
using namespace std;

template <typename T> bool BST<T>::add(T key)
{
	Node* newNode = new Node(key);
	if (*root == nullptr)
	{
		root = &newNode;
		delete newNode;
	}
	else
	{
		Node* nodeBefore = findNodeBefore(*newNode);
		int compared = *nodeBefore->compare(*newNode);
		if (compared > 0)
		{
			*nodeBefore->rightNode = *newNode;
		}
		else if (compared < 0)
		{
			*nodeBefore->leftNode = *newNode;
		}
		else
		{
			delete newNode;
			return false;
		}
		delete newNode;
	}
	return true;


}
template <typename T>
typename BST<T>::Node* BST<T>::findNodeBefore(Node* node)
{
	if (*root == nullptr)
		return nullptr;
	Node* temp = *root;
	int compared = temp.compare(node);
	while (*temp != nullptr && compared != 0)
	{
		if (compared > 0)
		{
			Node* tempRight = *temp->rightNode;
			if (*tempRight == nullptr)
				return *temp;
			else
			{
				if (*tempRight->compare(*node) == 0)
				{
					return *temp;
				}
				else
				{
					temp = &tempRight;
					delete tempRight;
				}
			}

		}
		else
		{
			Node* tempLeft = *temp->leftNode;
			if (*tempLeft == nullptr)
				return *temp;
			else
			{

				if (*tempLeft->compare(*node) == 0)
				{
					return *temp;
				}
				else
				{
					temp = &templeft;
					delete tempLeft;
				}
			}

		}

	}
	return nullptr;
};