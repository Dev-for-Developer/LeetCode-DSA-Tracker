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
void deleteAtBeginning(Node* &head)
{
    Node* temp = head;
    head = head -> next;
    delete temp;
    return;
}
void deleteAtEnd(Node* &head)
{
    Node* temp = head;
    while(temp -> next -> next != NULL)
    {
        temp = temp -> next;
    }
    Node* toDelete = temp -> next;
    temp -> next = NULL;
    delete toDelete;
    return;
}
void deleteAtPos(Node* &head, int pos)
{
    if(pos == 0)
    {
        deleteAtBeginning(head);
        return;
    }
    Node* temp = head;
    for(int i = 0; i < pos - 1; i++)
    {
        if(temp == NULL || temp -> next == NULL)
        {
            cout<< "Invalid Pos"<<endl;
            return;
        }
        temp = temp -> next;
    }
    Node* toDelete = temp -> next;
    if(toDelete == NULL) {
        cout << "Invalid position!" << endl;
        return;
    }
    temp -> next = toDelete -> next;
    delete toDelete;
    return;
}
void printTheList(Node* &head)
{
    Node* temp = head;
    while(temp != NULL)
    {
        cout<< temp -> data << " -> ";
        temp = temp -> next;
    }
    cout<<"NULL";
    cout<<endl;
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
            tail -> next = newNode;
            tail = newNode;
        }
    }
    cout<<"List before Deletion"<<endl;
    printTheList(head);
    deleteAtBeginning(head);
    deleteAtEnd(head);
    int pos; cin>>pos;
    deleteAtPos(head, pos);
    cout<<"List after Deletion"<<endl;
    printTheList(head);
}