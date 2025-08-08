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
void deleteTheValue(Node* &head, int value)
{
    if(head == NULL) return;  // Empty list check

    // Head node
    if(head -> data == value)
    {
        Node* temp = head;
        head = head -> next;
        delete temp;
        return;
    }

    // Middle or tail node
    Node* curr = head;
    while(curr -> next != NULL)
    {
        if(curr -> next -> data == value)
        {
            Node* toDelete = curr -> next;
            curr -> next = toDelete -> next;
            delete toDelete;
            return;
        }
        curr = curr -> next;
    }
}
void printTheList(Node* &head)
{
    Node* temp = head;
    while(temp != NULL)
    {
        cout<< temp -> data <<" -> ";
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
        Node* newNode = new Node(x);
        if(head == NULL)
        {
            head = newNode;
            tail = newNode;
        }
        else
        {
            tail -> next = newNode;
            tail = newNode;
        }
    }
    int value; cin>>value;
    deleteTheValue(head, value);
    printTheList(head);
}