#include<stdio.h>
#include<malloc.h>

struct node {
	int data;
	struct node *left;
	struct node *right;
};

struct node * createNode(int data){
	struct node *n;
	n = (struct node *)malloc(sizeof(struct node));
	n->data = data;
	n->left = NULL;
	n->right = NULL;
	return n;
}
void preOrder(struct node *root){
	if(root != NULL){
		printf("%d\t", root->data);
		preOrder(root->left);
		preOrder(root->right);
	}
}

void postOrder(struct node *root){
	if(root != NULL){
		postOrder(root->left);
		postOrder(root->right);
		printf("%d\t", root->data);
	}
}

void inOrder(struct node *root){
	if(root != NULL){
		inOrder(root->left);
		printf("%d\t", root->data);
		inOrder(root->right);
     }
}

int isBST(struct node *root){
	static struct node *prev = NULL;
	if(root!=NULL){
		if(!isBST(root->left)){
			return 0;
		}
		if(prev!=NULL && root->data <= prev->data){
			return 0;
		}
		prev = root;
		return isBST(root->right);
	}
	else{
		return 1;
	}
}

int main(){
	/*
//	Constructing the root node

	struct node *p;
	p = (struct node *)malloc(sizeof(struct node));
	p->data = 2;
	p->left = NULL;
	p->right = NULL;
	
//	Constructing the first node

	struct node *p1;
	p1 = (struct node *)malloc(sizeof(struct node));
	p->data = 1;
	p1->left = NULL;
	p1->right = NULL;
	
//	Constructing the second node

	struct node *p2;
	p2 = (struct node *)malloc(sizeof(struct node));
	p->data = 4;
	p2->left = NULL;
	p2->right = NULL;
	

	*/
	
	struct node *p = createNode(5);
	struct node *p1 = createNode(3);
	struct node *p2 = createNode(6);
	struct node *p3 = createNode(1);
	struct node *p4 = createNode(4);
	//	Linking the root node with left and right children

	p->left = p1;
	p->right = p2;
	p1->left = p3;
	p1->right = p4;
	
//	preOrder(p);
//	printf("\n");
//	postOrder(p);
//	printf("\n");
	inOrder(p);
	printf("\n");
	printf("%d",isBST(p));
	return 0;
}
