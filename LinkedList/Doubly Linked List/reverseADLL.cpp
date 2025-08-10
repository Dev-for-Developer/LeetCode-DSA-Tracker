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
void reverseTheList(Node* &head)
{
    Node* temp = head;
    Node* newHead = NULL;
    while(temp != NULL)
    {
        Node* nextNode = temp -> next;
        temp -> next = temp -> prev;
        temp -> prev = nextNode;
        newHead = temp;
        temp = temp -> prev;
    }
    head = newHead;
}
void printTheList(Node* &head)
{
    Node* temp = head;
    while(temp != NULL)
    {
        cout<<temp -> data<<" -> ";
        temp = temp -> next;
    }
    cout<<"NULL"<<endl;
    return;
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
    reverseTheList(head);
    printTheList(head);
}