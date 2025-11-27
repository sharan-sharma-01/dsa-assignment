
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

public:
    Node* head = NULL;

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

    std::cout << "Enter nodes: " << std::endl;
    std::cin >> n;

    int adj[n][n];

    for (int i = 0; i < n; i++) {

        std::cout << "YOU ARE DOING THIS FOR NODE " << i + 1 << std::endl;

            for (int j = 0; j < n; j++) {
                std::cout << "Hit 1 if you want connection with " << j + 1  << std::endl;
                std:: cout << "Else hit 0";
                std::cin >> adj[i][j];
            }

    }

    // ADJACENCY LIST

    LinkedList* adjacencyList[n];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (adj[i][j] == 1) {
                adjacencyList[i]->insertElement(j);
            }
        }
    }


}
