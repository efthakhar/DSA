
#include <iostream>
using namespace std;

// resource: https://gist.github.com/this-mkhy/2d9264fa8654f989e6569563a6168bdd

struct  node
{
    int data;
    node *next;
};

class LinkedList{

    public:

    node *head = NULL;

    void addNodeFirst( int data)
    {
        node *temp = head;
        node *newNode = new node;
        newNode->data = data;
        head = newNode;
       

        if(head==NULL)
        {         
            newNode->next = NULL;
        }
        else{
            newNode->next = temp;          
        }
    }

    void addNodeEnd( int data)
    {
        node *newNode = new node;
        newNode->data = data;
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
        }
    }
 
    void addNodeAfter(int after, int data)
    {
        node *temp = head;

        while(temp != NULL )
        {
            if(temp->data == after)
            {
                node *newNode = new node;
                newNode->data = data;
                newNode->next = temp->next;
                temp->next = newNode;
                
                return;
            }         
            temp = temp->next;
        }
    }

    void addNodeBefore(int before, int data)
    {
        node *temp = head;
        node *prev;

        while(temp != NULL )
        {
            if(temp->data == before)
            {
                node *newNode = new node;
                newNode->data = data;
                newNode->next = temp;
                prev->next = newNode;
                
                return;
            }
            prev = temp;         
            temp = temp->next;
        }
    }

    void deleteNode(int data)
    {
        node *temp = head;
        node *prev;

        if(head->data = data)
        {
            head = head->next;
            return;
        }

        while(temp != NULL )
        {
            if(temp->data == data)
            {
                prev->next = temp->next;
                temp = NULL;
                
                return;
            }
            prev = temp;         
            temp = temp->next;
        }
    }

    void reverse() 
    {
        node *current = head;
        node *next = NULL ;
        node *prev = NULL;

        while(current != NULL)
        { 
            next = current->next;
            current->next = prev;
            prev = current;
            current = next;     
        }
        
        head = prev; 
    }
    
    void printList()
    {
        node *current_node = head;
        while(current_node!= NULL )
        {  
            cout << current_node->data << " ";
            current_node = current_node->next;
        }
        cout<<endl;
    }
        

};



int main()
{

    
    LinkedList li;
    
    // adding node elements at the end of list
    li.addNodeEnd(1);
    li.addNodeEnd(2);
    li.addNodeEnd(3);
    li.addNodeEnd(4);
    li.addNodeEnd(5);
    li.printList();

    //adding node element at begining of list
    //li.addNodeFirst(73);
    //li.printList();

    // add node after certain element
    // li.addNodeAfter(3,5);
    // li.addNodeAfter(2,25);
    // li.printList();

    // add node before certain element
    // li.addNodeBefore(2,90);
    // li.addNodeBefore(3,389);
    // li.printList();

    // delete certain element
    // li.deleteNode(2);
    // li.deleteNode(73);
    // li.printList();

    // reverse linked list
     li.reverse();
     li.printList();

    return 0;

    
}