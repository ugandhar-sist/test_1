#include <iostream>

using namespace std;

struct Node {
    int data;
    Node* next;
};

// Function to create a linked list with given number of elements
Node* createLinkedList(int n) {
    Node *head = nullptr, *current = nullptr;
    int a;

    for (int i = 0; i < n; i++) {
        cin >> a;
        Node* newNode = new Node;
        newNode->data = a;
        newNode->next = nullptr;

        if (i == 0)
            head = current = newNode;
        else {
            current->next = newNode;
            current = newNode;
        }
    }

    return head;
}

// Function to remove duplicate elements from a linked list
Node* removeDuplicates(Node* head) {
    Node* current = head;

    while (current != nullptr && current->next != nullptr) {
        if (current->data == current->next->data) {
            Node* temp = current->next;
            current->next = temp->next;
            delete temp;
        } else
            current = current->next;
    }

    return head;
}

// Function to print a linked list
void printLinkedList(Node* head) {
    while (head != nullptr) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

int main() {
    int t;
    cin >> t;

    while (t > 0) {
        int n;
        cin >> n;

        Node* h = createLinkedList(n);
        h = removeDuplicates(h);
        printLinkedList(h);

        // Free allocated memory
        Node* temp;
        while (h != nullptr) {
            temp = h;
            h = h->next;
            delete temp;
        }

        t--;
    }

    return 0;
}
