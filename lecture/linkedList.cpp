/*
Name: Jeremy Bergen

Linked Lists!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
*/
#include <iostream>
#include <string>

using namespace std;

struct Node {
    int data;
    Node *next;
};

void llSize(int&);
Node* buildList(int, Node *);
void printList(Node *);
void deleteList(Node *);

int main(int argc, char *argv[]) {
    int listSize = 0;
    Node *head = nullptr;
    // Node *curNode;

    llSize(listSize);

    head = buildList(listSize, head);

    printList(head);

    deleteList(head);

    // Node *second = new Node();
    // Node *third = new Node();
    // Node *fourth = new Node();

    // first->data = 42;
    // first->next = second;

    // second->data = 15;
    // second->next = third;

    // third->data = 23;
    // third->next = fourth;

    // fourth->data = 9000;
    // fourth->next = NULL;

    // cout << "first->data: " << first->data << endl;




    // delete first;
    // delete second;
    // delete third;
    // delete fourth;
    // return 0;
}

void deleteList(Node *head) {
    while(head != NULL) {
        cout << "DEBUG: inside delete loop head->data: " << head->data << endl;
        Node *tmpNode = head;
        head = head->next;
        delete tmpNode;
    }
}

void printList(Node *head) {
    // Node *curNode = new Node();
    // curNode = head;
    while(head != NULL) {
        cout << "head->data: " << head->data << endl;
        head = head->next;
    }
}

Node* buildList(int listSize, Node *head) {
    Node *curNode = new Node();
    head = curNode;
    for(int i = 0; i < listSize; i++) {
        if(i != listSize-1) {
            Node *nextNode = new Node();
            curNode->next = nextNode;
            nextNode->next = NULL;

            cout << "Enter a number: ";
            cin >> curNode->data;
            
            curNode = curNode->next;
        } else {
            cout << "Enter a number: ";
            cin >> curNode->data;
            
            curNode = curNode->next;
        }
        
    }
    
    // curNode = head;
    // while(curNode != NULL) {
    //     cout << "curNode->data: " << curNode->data << endl;
    //     curNode = curNode->next;
    // }
    return head;
}

void llSize(int& listSize) {
    cout << "How many nodes do you want in your linked list? ";
    cin >> listSize;
}