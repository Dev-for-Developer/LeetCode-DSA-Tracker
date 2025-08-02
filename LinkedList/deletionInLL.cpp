#include<iostream>
using namespace std;
struct Node
{
    int data;
    Node* next;

    Node(int value)
    {
        data = value;
        next = NULL;
    }
};
void deleteFromBeginning(Node* &head)
{
    if(head == NULL)
    {
        cout<<"List is empty..."<<endl;
        return;
    }
    if(head -> next == NULL)
    {
        delete head;
        head = NULL;
        return;
    }
}
void deleteFromEnd(Node* &head)
{
    if(head == NULL)
    {
        cout<<"List is empty..."<<endl;
        return;
    }
    if(head -> next == NULL)
    {
        delete head;
        head = NULL;
        return;
    }
    Node* temp = head;
    while(temp -> next -> next != NULL)
    {
        temp = temp -> next;
    }
    delete temp->next;
    temp -> next = NULL;
}
int main()
{
    int x;
    while(cin>>x && x != -1)
    {
        Node* head = NULL;
        Node* tail = NULL;
        Node* newNode = new Node(x);
        if(head == NULL)
        {
            head = newNode;
        }
        else
        {
            tail -> next = newNode;
            tail = newNode;
        }
    }
    printTheList(head);
}
