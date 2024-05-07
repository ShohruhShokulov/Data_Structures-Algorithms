#include <iostream>
using namespace std;

class Node {
public:
	int data;
	Node* left; 
	Node* right;
	Node(int v) {
		this->data = v;
		this -> left = this->right = NULL;
	}
};

void InOrder(Node* node) {
	if (node == NULL)
		return;
	InOrder(node->left);
	cout << node->data<<" ";
	InOrder(node->right);
}

void PreOrder(Node* node) {
	if (node == NULL)
		return;
	cout << node->data<<" ";
	PreOrder(node->left);
	
	PreOrder(node->right);
}

void PostOrder(Node* node) {
	if (node == NULL)
		return;
	
	PostOrder(node->left);

	PostOrder(node->right);
	cout << node->data << " ";
}

int main() {
	Node* root = new Node(8);
	root->left = new Node(5);
	root->right = new Node(4);
	root->right->right = new Node(11);
	root->right->right->left = new Node(3);
	root->left->left = new Node(9);
	root->left->right = new Node(7);
	root->left->right->left = new Node(1);
	root->left->right->right = new Node(12);
	root->left->right->right->left = new Node(2);

	cout << "Inorder Treversal: ";
	InOrder(root);
	cout << endl;
	cout << "Preorder Treversal: ";
	PreOrder(root);
	cout << endl;
	cout << "Postorder Treversal: ";
	PostOrder(root);

	return 0;

}