#include <iostream>
using namespace std;

class Node {
public: 
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = NULL;
    }
};

class List {
    Node* head; //private by default
    Node* tail;

public: 
    List() {
        head = tail = NULL;
    }

    void push_front(int val) {
        Node* newNode = new Node(val); //dynamic
        if(head == NULL) {
            head = tail = newNode;
            return;
        } else {
            newNode->next = head;
            head = newNode;
        }
    }

    void push_back(int val) {
        Node* newNode = new Node(val);

        if(head == NULL) {
            head = tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
    }

    void pop_front() {
        if(head == NULL) {
            cout << "LL is empty\n";
            return;
        }

        Node* temp = head;
        head = head->next;
        temp->next = NULL;

        delete temp;
    }

    void pop_back() {
        if(head == NULL) {
            cout<< "LL is empty\n";
            return;
        }

        Node* temp = head;
        while (temp->next != tail)
        {
            temp = temp->next;
        }

        temp->next = NULL;
        delete tail;
        tail = temp;
    }

    void printLL() {
        Node* temp = head;

        while(temp != NULL) {
            cout << temp->data << "->";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};

int main() {
    List l1;

    l1.push_front(1);
    l1.push_front(2);
    l1.push_front(3);

    l1.push_back(7);

    l1.pop_front();

    l1.printLL();

    l1.pop_back();
    l1.printLL();

    return 0;
}