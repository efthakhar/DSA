#include <iostream>

#define MAX 1000
using namespace std;
class Stack{
    public:
    int top = -1;
    int stack[MAX];

    void push(int data)
    {
        
        top++;
        if(top>MAX-1){
            cout << "The Stack is Full. ";
        }
        stack[top] = data;
    }

    void pop()
    {
        if(top<0)
        {
            cout<< "stack is empty";
            return;
        }
        top--;
    }

    int peek()
    {
        return stack[top];
    }

    void printStack()
    {
        cout << "============" << endl;
        int count = top;
        while(count > -1)
        {
            cout << stack[count] <<  " ";
            count--;
        }
        cout << "\n" << endl;
    }
    
};

int main()
{

    Stack s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.printStack();

    s.pop();
    s.printStack();
    cout << s.peek();
    return 0;
}