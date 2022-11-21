#include <iostream>
#include <string>
#include "math.h"
using namespace std;

struct  node
{
    int data;
    node *prev;
    node *next;
};



class LinkedList{

    public:

    node *head = NULL;
    node *tail = NULL;

    
    void addNodeEnd( int data)
    {
        node *newNode = new node;
        newNode->data = data;
        newNode->prev = NULL;
        newNode->next = NULL;

        if(head==NULL)
        {         
            head = newNode; 
        }else{
            node *current_node = head;

            while(current_node->next!=NULL)
            { 
                current_node = current_node->next;
            } 
            current_node->next = newNode;   
            newNode->prev = current_node; 
        }
    }


    void printList()
    {
        node *current_node = head;
        while(current_node!= NULL )
        {  
            cout <<  current_node->data << ' ';

            current_node = current_node->next;
        }
        cout<<endl;
    }
        

};




int main()
{
   
    LinkedList li;
    li.addNodeEnd(2);
    li.addNodeEnd(3);
    li.addNodeEnd(4);
    li.printList();

    return 0;
}