#include<iostream>
using namespace std;

struct Node {
    int data;
    Node* next;

    Node(int value) {
        data = value;
        next = NULL;
    }
};

void InsertAtBeginning(Node* &head, int value) {
    Node* newNode = new Node(value);
    newNode->next = head;
    head = newNode;
}

void InsertAtTheEnd(Node* &head, int value) {
    Node* newNode = new Node(value);
    if(head == NULL) {
        head = newNode;
        return;
    }
    Node* temp = head;
    while(temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
}

void InsertAtPos(Node* &head, int pos, int value) {
    if(pos == 0) {
        InsertAtBeginning(head, value);
        return;
    }

    Node* temp = head;
    for(int i = 0; i < pos - 1; i++) {
        if(temp == NULL) {
            cout << "Invalid Position!!!" << endl;
            return;
        }
        temp = temp->next;
    }

    if(temp == NULL) {
        cout << "Invalid Position!!!" << endl;
        return;
    }

    Node* newNode = new Node(value);
    newNode->next = temp->next;
    temp->next = newNode;
}

void printList(Node* head) {
    Node* temp = head;
    while(temp != NULL) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int main() {
    Node* head = NULL;
    int x;
    while(cin >> x && x != -1) {
        int k;
        cout << "Enter 1: Insert at beginning\n";
        cout << "Enter 2: Insert at end\n";
        cout << "Enter 3: Insert at position\n";
        cin >> k;

        if(k == 1) {
            InsertAtBeginning(head, x);
        } else if(k == 2) {
            InsertAtTheEnd(head, x);
        } else if(k == 3) {
            int pos;
            cout << "Enter position: ";
            cin >> pos;
            InsertAtPos(head, pos, x);
        } else {
            cout << "Invalid choice!" << endl;
        }
    }

    cout << "\nFinal Linked List:\n";
    printList(head);

    return 0;
}
