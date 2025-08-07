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
void searchTheValue(Node* &head, int value)
{
    if(head == NULL)
    {
        cout<<"List is empty..."<<endl;
        return;
    }
    Node* temp = head;
    bool flag = false;
    while(temp != NULL)
    {
        if(temp -> data == value)
        {
            cout<<"Value exists in the List..."<<endl;
            flag = true;
            return;
        }
        temp = temp -> next;
    }
    if(!flag)
    {
        cout<<"Value not found..."<<endl;
        return;
    }
}
void searchTheValueInReverse(Node* &tail,int value)
{
    if(tail == NULL)
    {
        cout<<"List is empty..."<<endl;
        return;
    }
}
int main()
{
    Node* head = NULL;
    Node* tail = NULL;
    int x;
    while(cin>>x && x != -1)
    {
        Node* newNode= new Node(x);
        if(head == NULL)
        {
            head = newNode;
            tail = newNode;
        }
        else
        {
            tail -> next = newNode;
            newNode -> prev = tail;
            tail = tail -> next;
        }
    }
    int value; cin>>value;
    searchTheValue(head,value);
    searchTheValueInReverse(tail,value);
}