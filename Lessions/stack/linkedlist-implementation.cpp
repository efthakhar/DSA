
#include <iostream>
using namespace std;
struct node
{
   int data;
   node *next;
};

class Stack{

    public:
    int size;
    node *top = NULL;

    void push(int data)
    {
        node *newNode = new node;
        newNode->data = data;
        newNode->next = top;
        top = newNode;

    }

    void pop()
    {
        top = top->next;
    }

    void printStack()
    {
        node *temp = top;

        while(temp != NULL){
            cout << temp->data << " ";
            temp = temp->next;
        }

        cout << "\n";

    }
    
};

int main()
{
    Stack s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);

    s.printStack();
    s.pop();
    s.pop();
    s.printStack();
    return 0;
}