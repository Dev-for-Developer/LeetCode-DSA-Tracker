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
Node* getMiddle(Node* &head)
{
    if(head == NULL || head -> next == NULL) return head;

    Node* slow = head;
    Node* fast = head -> next;
    while(fast && fast -> next)
    {
        slow = slow -> next;
        fast = fast -> next -> next;
    }
    return slow;
}
Node* mergeLists(Node* left, Node* right)
{
    Node dummy(0);
    Node* temp = &dummy;
    while(left && right)
    {
        if(left -> data <= right -> data)
        {
            temp -> next = left;
            left = left -> next;
        }
        else
        {
            temp -> next = right;
            right = right -> next;
        }
        temp = temp -> next;
    }
    temp -> next = (left ? left : right);
    return dummy.next;
}
Node* mergeSort(Node* &head)
{
    if(!head || !head -> next) return head;
    Node* mid = getMiddle(head);
    Node* rightHalf = mid -> next;
    mid -> next = nullptr;
    Node* leftSorted = mergeSort(head);
    Node* rightSorted = mergeSort(rightHalf);
    return mergeLists(leftSorted, rightSorted);
}
void printTheArray(Node* &head)
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
        Node* newNode = new Node(x);
        if(head == NULL)
        {
            head = newNode;
            tail = newNode;
        }
        else
        {
            tail -> next = newNode;
            tail = tail -> next;
        }
    }
    printTheArray(head);
    head = mergeSort(head);
    printTheArray(head);
}