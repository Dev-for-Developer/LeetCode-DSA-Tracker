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

void insertAtMiddle(Node* &head, int pos, int value) {
    if (pos < 0) {
        cout << "Invalid Position" << endl;
        return;
    }

    Node* newNode = new Node(value);

    // Insert at head (position 0)
    if (pos == 0) {
        newNode->next = head;
        head = newNode;
        return;
    }

    Node* temp = head;
    for (int i = 0; i < pos - 1; i++) {
        if (temp == NULL) {
            cout << "Position out of bounds" << endl;
            delete newNode;
            return;
        }
        temp = temp->next;
    }

    if (temp == NULL) {
        cout << "Position out of bounds" << endl;
        delete newNode;
        return;
    }

    newNode->next = temp->next;
    temp->next = newNode;
}

void printTheList(Node* &head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int main() {
    Node* head = NULL;
    Node* tail = NULL;
    int x;

    while (cin >> x && x != -1) {
        Node* newNode = new Node(x);
        if (head == NULL) {
            head = newNode;
            tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
    }

    cout << "Before Insertion: ";
    printTheList(head);

    int value, pos;
    cin >> value >> pos;

    insertAtMiddle(head, pos, value);

    cout << "After Insertion: ";
    printTheList(head);
}
