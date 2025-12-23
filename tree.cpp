#include<iostream>
using namespace std;
struct  node{
	int data;
	node*left;
	node*right;
	
	node(int value)
	{
		data=value;
		left=NULL;
		right=NULL;
	}
};
node*buildtree(){
	node*root=new node(1);
	root->left=new node(2);
	root->right=new node(3);
	root->left->left=new node(4);
	root->left->right=new node(5);
	root->right->left=new node(6);
	root->right->right=new node(7);
	return root;
}
void preorder(node* root)
{ if (root==NULL) return;
cout<<root->data<<" ";
preorder(root->left);
preorder(root->right);
}

int main(){
	node*root=buildtree();
	cout<<"tree build!\n";
	cout<<"preorder traversal:";
	preorder(root);
	cout<<endl;
	return 0;
}
