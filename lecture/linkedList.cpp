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

int main(int argc, char *argv[]) {
    int listSize = 0;
    Node *first = new Node({1, NULL});

    cout << "How many nodes do you want in your linked list? ";
    cin >> listSize;

    Node *currNode = first;
    for(int i = 0; i < listSize; i++) {
        Node *nextNode = new Node();
        currNode->next = nextNode;

        cout << "Enter a number: ";
        cin >> nextNode->data;
        nextNode->next = NULL;

        currNode = nextNode;
    }

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
    Node *curNode;
    curNode = first;
    while(curNode != NULL) {
        cout << "curNode->data: " << curNode->data << endl;
        curNode = curNode->next;
    }

    Node *currrNode;
    currrNode = first;
    while(currrNode != NULL) {
        cout << "DEBUG: inside delete loop currrNode->data: " << currrNode->data << endl;
        Node *tmpNode = currrNode;
        currrNode = currrNode->next;
        delete tmpNode;
    }
    // delete first;
    // delete second;
    // delete third;
    // delete fourth;
    // return 0;
}