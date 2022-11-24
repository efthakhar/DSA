
#include <iostream>
using namespace std;
const int size = 4;
int front = -1;
int rear = -1;
int queue[size];

void printArray(int arr[],int size = size){
    
    for (int i = front; i < size; i++) {
     cout << arr[i] << " ";
    }
    cout<< '\n';
}

void enqueue(int data)
{
    if(front==-1 && rear == -1){

        cout << "queue is empty" << '\n';
        front++;
        rear++;
        queue[rear] = data;

    }else if(rear == size-1){

        cout << "queue is full" << '\n';

    }else{

        rear++;
        queue[rear] = data;
    }
}

void dequeue()
{
    if(front == -1 && rear == -1){
        cout << "nothing to delete. queue is empty now";
    }else if(front==rear){
        front = rear = -1;
    }else{
        front++;
    }
}
int main()
{
    enqueue(4);
    printArray(queue);
    enqueue(5);
    printArray(queue);
    enqueue(6);
    printArray(queue);
    enqueue(7);
    printArray(queue);
    enqueue(9);
    printArray(queue);
    dequeue();
    printArray(queue);
    dequeue();
    printArray(queue);
    
    
    
    return 0;
}