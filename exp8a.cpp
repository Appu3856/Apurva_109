#include<iostream>
using namespace std;
struct Node{
    int data;
    Node* next;
};
Node *front=NULL,*rear=NULL;
void enqueue(int value){
    Node* newNode=new Node();
    newNode->data=value;
    newNode->next=NULL;

    if(front==NULL){
        front=rear=newNode;
    }
    else{
        rear->next=newNode;
        rear=newNode;
    }
    cout<<"Element Inserted\n";
}
void dequeue(){
    if(front==NULL){
        cout<<"Queue Underflow\n";
        return;
    }
    Node* temp=front;
    cout<<"Deleted element: "<<temp->data<<endl;
    front=front->next;
    delete temp;
}
void display(){
    if(front==NULL){
        cout<<"Queue Empty\n";
        return;
    }
    Node* temp=front;
    cout<<"Queue: ";
    while(temp!=NULL){
        cout<<temp->data<<" -> ";
        temp=temp->next;
    }
    cout<<"NULL\n";
}
int main(){
    int choice,value;

    do{
        cout<<"\n1.Enqueue\n2.Dequeue\n3.Display\n4.Exit\nEnter choice:";
        cin>>choice;

        switch(choice){
            case 1:
                cout<<"Enter value:";
                cin>>value;
                enqueue(value);
                break;
            case 2:
                dequeue();
                break;
            case 3:
                display();
                break;
        }
    }while(choice!=4);

    return 0;
}
