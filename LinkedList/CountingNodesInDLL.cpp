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
int count_no_of_nodes(Node* &head)
{
    int count = 0;
    Node* temp = head;
    while(temp != NULL)
    {
        count++;
        temp = temp -> next;
    }
    return count;
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
            tail = tail -> next;
        }
    }
    int count = 0;
    count = count_no_of_nodes(head);
    cout<<"Count: "<<count<<endl;
}