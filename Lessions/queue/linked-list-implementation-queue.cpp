#include <iostream>
using namespace std;

struct qnode{
    int data;
    qnode *next;
};
qnode *front = NULL;
qnode *rear = NULL;

void enQueue(int data)
{
    qnode *newNode = new qnode;
    newNode->data = data;
    newNode->next = NULL;
    if( front == NULL && rear == NULL)
    {
    //    cout << "queue is empty";
       newNode->next = NULL;
       front = rear = newNode;

    }else{

       rear->next = newNode;
       rear = newNode;
    }


}

void deQueue(){

    if(front==NULL){
        return;
    }

    qnode *temp = front;
    front = front->next;
    delete temp;

    if(front==NULL){
        rear = NULL;
    }
     
}

void printQueue()
{
    qnode *temp = front;
    while(temp!=NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout<< '\n';
}

int main()
{
    
    enQueue(3);
    enQueue(34);
    enQueue(67);
    enQueue(7);
    printQueue();
    deQueue();
    printQueue();
    deQueue();
    printQueue();
    return 0;

}