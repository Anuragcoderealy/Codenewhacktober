#include<bits/stdc++.h>
using namespace std;

class treenode{
     public:
	 	int value;
	 	treenode* left;
	 	treenode* right;
	 	treenode(){
	 		value=0;
	 		left=NULL;
	 		right=NULL;
		 }
		 treenode(int v){
	 		value=v;
	 		left=NULL;
	 		right=NULL;
		 }
		 
};

class bst{
	public:
		treenode *root;
		bst(){
			root=NULL;
		}
		bool isempty()
		{
			if(root==NULL)
			{
			    return true;	
			}
			else{
				return false;
			}
		}
};

void insertnode(treenode* newnode){
	if(root==NULL)
	{
		root=newnode;
		cout<<"\n value inserted as root \n";
	}
	else{
		 treenode *temp=root;
		 while(temp!=NULL)
		 {
		 	if(newnode->value==temp->value)
		 	{
		 		cout<<"value already exist "<<endl;
		 		return;
			 }
			 else if((newnode->value<temp->value ) && (temp->left==NULL))
			 {
			 	temp->left=newnode;
			 	cout<<"value inserted to left \n"<<endl;
			 	break;
			 }
			 else if(newnode->value<temp->value)
			 {
			 	temp=temp->left;
			 }
			 else if((newnode->value>temp->value) && (temp->right==NULL))
			 {
			 	temp->right=newnode;
			 	cout<<"\n value inserted at right \n"<<endl;
			 	break;
			 }
			 else if(newnode->value>temp->value)
			 {
			 	temp=temp->right;
			 }
			 
		 }
	}
}


void preorder(treenode *root)
{
	if(root==NULL)
	return;
	cout<<root->value;
	preorder(root->left);
	preorder(root->right);
}
void inorder(treenode *root)
{
	if(root==NULL)
	return;
	
	inorder(root->left);
	cout<<root->value;
	inorder(root->right);
}
void postorder(treenode *root)
{
	if(root==NULL)
	return;
	postorder(root->left);
	postorder(root->right);
	cout<<root->value;
}
treenode *minvalue(treenode *node)
{
	treenode *current=node;
	while(current->left!=NULL)
	{
		current->left=current;
	}
	return current;
	
}
treenode*  deletenode(treenode* root,int v)
{
	if(root==NULL)
	{
	return NULL;
	}
	else if(v<root->value)
	{
		root->left=deletenode(root->left,v);
	}
	else if(v>root->value)
	root->right=deletenode(root->right,v);
	
	else{
		if(root->left==NULL)
		{
			treenode *temp=root->right;
		    delete root;
		    return temp;
		}
		else if(root->right==NULL)
		{
			treenode *temp=root->left;
			delete root;
			return temp;
			
		}
		else{
			treenode *temp=minvalue(root->right);
		    root->value=temp->value;
		    
		    root->right=deletenode(root->right,temp->value);
		}
	}
}



int main()
{
	int option;
	bst obj;
	do{
		cout<<"what operation do you want to perform enter your choice here "<<endl;
		cout<<"1. insert node in bst "<<endl;
		cout<<"2. delete node in bst "<<endl;
		
		cin>>option;
		
	}
	treenode *newnode = new treenode();
	
	switch(option)
	{
		case 0;
		break;
		
		case 1:
			cout<<"insert"<<endl;
			int val;
			cout<<"enter the value you want to insert \n ";
			cin>>val;
			newnode->value-val;
			obj.insertnode(newnode);
			break;
			
			default:
				cout<<"enter other option \n"<<endl;
				
	}
	
	while(option!=0);
}