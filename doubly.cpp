#include <iostream>
using namespace std;
struct Node {
    int data;
    Node* prev;
    Node* next;
};
void insert(Node*& head, int value) {
    Node* newNode=new Node();
    newNode->data=value;
    newNode->prev=NULL;
    newNode->next=NULL;
    if (head==NULL) {
        head=newNode;
        return;
    }
	Node* temp=head;
    while(temp->next!= NULL) {
        temp=temp->next;
    }
	temp->next=newNode;
    newNode->prev=temp;
}
void displayForward(Node* head) {
    Node* temp=head;
    cout<<"Forward:";
    while(temp != NULL) {
        cout<<temp->data<<"<->";
        temp=temp->next;
    }
    cout<<"NULL";
}
void displayBackward(Node* head) {
    Node* temp=head;
	while(temp->next!=NULL) {
        temp=temp->next;
    }
	cout<<"\nBackward:";
    while(temp!= NULL) {
        cout<<temp->data<<"<->";
        temp=temp->prev;
    }
    cout<<"NULL";
}
int main() {
    Node* head=NULL;
    int n,value;
	cout<<"Enter number of nodes:";
    cin>>n;
	for(int i=0;i<n;i++) {
        cout<<"Enter value:";
        cin>>value;
        insert(head,value);
    }
	displayForward(head);
    displayBackward(head);
	return 0;
}
