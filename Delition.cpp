#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node*next;

//   constructor
    Node(int data) {
        this -> data = data;
        this -> next = NULL;
    }
//destructor
    ~Node() {
        int value = this -> data;
        //memory free
        if(this->next != NULL) {
            delete next;
            this->next = NULL;
        }
        cout << "memory is free for node with data " << value << endl;
    }
};

void printLinkedList(Node* &head){
    Node*temp=head;
    while (temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;

}

void deleteNode(int poss,Node*&head){
    if(poss==1){
        Node*temp=head;
        head=head->next;
        temp->next=NULL;
        delete temp;
    }
    else{
        Node*curr=head;
        Node*prev=NULL;
        int cnt =1;
        while(cnt<poss){
            prev=curr;
            curr=curr->next;
            cnt++;
        }
        prev->next=curr->next;
        curr->next=NULL;
        delete curr;

    }
}

int main(){
    Node *first = new Node(10);
    Node *second = new Node(20);
    Node *Third = new Node(30);
    first->next = second;
    second->next = Third;
    Third->next = NULL;

    printLinkedList(first);

    deleteNode(2,first);
    cout<<endl;
    printLinkedList(first);
    deleteNode(1,first);
    printLinkedList(first);

    return 0;
}