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
            tail->next = newNode;
            tail = newNode;
        }
    }
    Node* temp = head;
    while(temp != NULL)
    {
        cout<< temp->data <<" -> ";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
    return 0;
}
