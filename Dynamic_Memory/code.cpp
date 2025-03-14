#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    
    Node(int value) {
        data = value;
        next = NULL;
    }
};

// Linked List Class
class LinkedList {
private:
    Node* head;

public:
    LinkedList() {
        head = NULL;
    }

    // Insert at the beginning
    void insert_at_beginning(int data) {
        Node* newNode = new Node(data);
        newNode->next = head;
        head = newNode;
        cout << "Inserted: " << data << endl;
    }

    // Search for a key
    bool search(int key) {
        Node* temp = head;
        while (temp != NULL) {
            if (temp->data == key) {
                cout << "Found: " << key << endl;
                return true;
            }
            temp = temp->next;
        }
        cout << "Not Found: " << key << endl;
        return false;
    }

    // Delete a node
    void delete_node(int key) {
        Node* temp = head;
        Node* prev = NULL;

        // If head contains the key
        if (temp != NULL && temp->data == key) {
            head = temp->next;
            delete temp;
            cout << "Deleted: " << key << endl;
            return;
        }

        // Search for the key
        while (temp != NULL && temp->data != key) {
            prev = temp;
            temp = temp->next;
        }

        // If key was not found
        if (temp == NULL) {
            cout << "Key not found: " << key << endl;
            return;
        }

        // Unlink and delete
        prev->next = temp->next;
        delete temp;
        cout << "Deleted: " << key << endl;
    }

    // Reverse the linked list
    void reverse() {
        Node* prev = NULL;
        Node* current = head;
        Node* next = NULL;

        while (current != NULL) {
            next = current->next;
            current->next = prev;
            prev = current;
            current = next;
        }
        head = prev;
        cout << "List Reversed." << endl;
    }

    // Display the linked list
    void display() {
        Node* temp = head;
        cout << "Linked List: ";
        while (temp != NULL) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};

// Main function
int main() {
    LinkedList list;

    list.insert_at_beginning(10);
    list.insert_at_beginning(20);
    list.insert_at_beginning(30);
    list.display();

    list.search(20);
    list.search(40);

    list.delete_node(20);
    list.display();

    list.reverse();
    list.display();

    return 0;
}
