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
void reverseTheList(Node* &head)
{
    Node* prev = NULL;
    Node* current = head;

    while(current != NULL)
    {
        Node* next = current -> next;
        current -> next = prev;
        prev = current;
        current = next;
    }
    head = prev;
}
void printTheList(Node* &head)
{
    Node* temp = head;
    cout<< "First elements: "<<temp -> data<<endl;
    while(temp -> next != NULL)
    {
        temp = temp -> next;
    }
    cout<<"Last elemest: "<< temp -> data <<endl;
    Node* current = head;
    while(current != NULL)
    {
        cout<<current -> data<<" -> ";
        current = current -> next;
    }
    cout<<"NULL"<<endl;
}
int main()
{
    Node* head = NULL;
    Node* tail = NULL;
    int x;
    while(cin >> x && x != -1)
    {
        Node* newNode = new Node(x);
        if(head == NULL)
        {
            head = newNode;
            tail = newNode;
        }
        else
        {
            tail -> next  =  newNode;
            tail = newNode;
        }
    }
    reverseTheList(head);
    printTheList(head);
}