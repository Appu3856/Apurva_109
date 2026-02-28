#include <iostream>
using namespace std;
#define SIZE 5
int main() {
    int queueArr[SIZE];
    int front=-1,rear = -1;
    int choice, value;

    do {
        cout<<"MENU\n";
        cout<<"1. Enqueue\n";
        cout<<"2. Dequeue\n";
        cout<<"3. Display\n";
        cout<<"4. Exit\n";
        cout<<"Enter your choice:";
        cin>>choice;
    switch (choice) {
        case 1: 
        cout<<"Enqueue\n";
                if(rear==SIZE-1) {
                    cout<<"Queue is Full\n";
                } else {
                    if(front==-1)
                        front=0;
                    rear++;
                    cout<<"Enter value: ";
                    cin>>value;
                    queueArr[rear]=value;
                    cout<<value<<" inserted into queue\n";
                }
                break;

            case 2: 
            cout<<"Dequeue\n";
                if(front==-1) {
                    cout<<"Queue is Empty\n";
                } else {
                    cout<<queueArr[front]<<" deleted from queue\n";
                    front++;
                }
                break;

            case 3: 
            cout<<"Display\n";
                if (front==-1) {
                    cout<<"Queue is Empty\n";
                } else {
                    cout<<"Queue elements are:";
                    for(int i=front;i<=rear;i++) {
                        cout<<queueArr[i] << " ";
                    }
                    cout<<endl;
                }
                break;

            case 4:
                cout<<"Exit\n";
                break;

            default:
                cout<<"Invalid choice\n";
        }

    } while(choice!=4);

    return 0;
}
