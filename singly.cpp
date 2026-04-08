#include <iostream>
using namespace std;
struct Node {
    int data;
    Node*next;
};
void insert(Node*& head, int value) {
    Node*newNode=new Node();
    newNode->data=value;
    newNode->next=NULL;
	if (head==NULL) {
        head=newNode;
        return;
    }
	Node* temp=head;
    while(temp->next!=NULL) {
        temp=temp->next;
    }
	temp->next=newNode;
}
void display(Node* head) {
    Node* temp=head;
    while (temp!=NULL) {
        cout<<temp->data<<" ->";
        temp=temp->next;
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
	cout<<"\nLinked List:";
    display(head);
	return 0;
}
