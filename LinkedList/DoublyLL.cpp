#include<iostream>
using namespace std;
struct Node
{
    Node* prev;
    int data;
    Node* next;
    Node(int value)
    {
        prev = NULL;
        data = value;
        next = NULL;
    }
};
void insertAtBeginning(Node* &head, int value)
{
    Node* newNode = new Node(value);
    if(head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    newNode -> next = head;
    head -> prev = newNode;
    head = newNode;
    return;
}
void insertAtEnd(Node* &head, int value)
{
    Node* newNode = new Node(value);
    Node* temp = head;
    while(temp -> next != NULL)
    {
        temp = temp -> next;
    }
    temp -> next = newNode;
    newNode -> prev = temp;
    return;
}
void insertAtPos(Node* &head, int pos, int value)
{
    if(pos == 0)
    {
        insertAtBeginning(head,value);
        return;
    }
    Node* newNode = new Node(value);
    Node* temp = head;
    for(int i = 0; i < pos - 1; i++)
    {
        if(temp == NULL || temp -> next == NULL)
        {
            cout<<"Invalid Position"<<endl;
            return;
        }
        temp = temp -> next;
    }
    newNode -> next = temp -> next;
    if(temp -> next != NULL)
    {
        temp -> next -> prev = newNode;
    }
    temp -> next = newNode;
    newNode -> prev = temp;
    return;
}
void deleteAtBeginning(Node* &head)
{
    Node* temp = head;
    head = head -> next;
    head -> prev = NULL;
    delete temp;
}
void deleteAtEnd(Node* &tail)
{
    Node* toDelete = tail;
    tail -> prev -> next = NULL;
    tail = tail -> prev;
    delete toDelete;
    return;
}
void deleteAtPos(Node* &head,int pos)
{
    if(pos == 0)
    {
        deleteAtBeginning(head);
        return;
    }
    if(pos < 0)
    {
        cout<<"Invalid Position..."<<endl;
        return;
    }
    if(head == NULL)
    {
        cout<<"List is Empty..."<<endl;
        return;
    }
    Node* temp = head;
    for(int i = 0; i < pos - 1; i++)
    {
        if(temp == NULL || temp -> next == NULL)
        {
            cout<<"Invalid Position..."<<endl;
            return;
        }
        temp = temp -> next;
    }
    Node* toDelete = temp -> next;
    temp -> next = toDelete -> next;
    if(toDelete -> next != NULL)
    {
        toDelete -> next -> prev = temp;
    }
    delete toDelete;
    return;
}

int main()
{
    Node* head = NULL;
    Node* tail = NULL;
    int x;
    while(cin>>x && x != -1)
    {
        Node* newNode = new Node(x);
        if(head == NULL)
        {
            head = newNode;
            tail = newNode;
        }
        else
        {
            tail -> next = newNode;
            newNode -> prev = tail;
            tail = newNode;
        }
    }
    Node* temp = head;
    while(temp != NULL)
    {
        cout<< temp -> data << " -> ";
        temp = temp -> next;
    }
    cout<<"NULL";
}