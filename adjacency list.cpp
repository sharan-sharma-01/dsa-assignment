
#include<iostream>

class Node {

    public:
    int data;
    Node *next;
    Node(int data) {
        this->data = data;
        next = NULL;
    }

};

class LinkedList {

    Node *head;

public:
    LinkedList() {
        Node* head = NULL;
    }

    void insertElement(int val) {
        Node* newNode = new Node(val);
        if (head == NULL) {
            head = newNode;
        } else {
            Node* temp = head;
            while (temp->next != NULL) {
                temp = temp->next;
            }
            temp->next = newNode;
        }
    }

};

int main() {

    int n;
    std::cout << "Enter the number of nodes in the graph: ";
    std::cin >> n;

    LinkedList* graph[n];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            std::cout << "Hit 1 if you want connection of" << i << " and " << j;
        }
    }


    return 0;
}
