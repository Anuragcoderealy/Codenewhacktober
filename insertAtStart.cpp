#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node*next;

    // Node(int data){
    //     this->data=data;
    //     this->next=NULL;

    // }
};
void printLinkList(Node* &head){
    Node*temp=head;
    while (temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    
}

void insertAtStart(Node*&head,int data){
    Node*temp=new Node();
    temp->next=head;
   head=temp;
   head->data=data;

}

  int main(){
    Node*head=NULL;
     Node*second=NULL;
     Node*third=NULL;
     head=new Node();
     second=new Node();
     third=new Node();
     head->data=3;
     head->next=second;
     second->data=4;
     second->next=third;
     third->data=5;
     third->next=NULL;
   printLinkList(head);
cout<<endl;
   insertAtStart(head,2);

cout<<"After insert"<<endl;
   printLinkList(head);
   cout<<endl;
cout <<"After another insret"<<endl;

insertAtStart(head,1);
cout<<endl;
printLinkList(head);

return 0;
  }

