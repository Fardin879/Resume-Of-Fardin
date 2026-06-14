#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node *next;

    Node(int val) {
        data = val;
        next = NULL;
    }
};

class List {
    Node *head;
    Node *tail;

public:
    List() {
        head = tail = NULL;
    }

    void push_front(int val) {
        Node *newNode = new Node(val);

        if (head == NULL) {
            head = tail = newNode;
        } else {
            newNode->next = head;
            head = newNode;
        }
    }

    void push_back(int val) {
        Node *newNode = new Node(val);

        if (head == NULL) {
            head = tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
    }

    void pop_front() {
        if (head == NULL) {
            return;
        }

        Node *temp = head;
        head = head->next;

        if (head == NULL) {
            tail = NULL;
        }

        temp->next = NULL;
        delete temp;
    }

    void pop_back() {
        if (head == NULL) {
            return;
        }

        if (head == tail) {
            delete head;
            head = tail = NULL;
            return;
        }

        Node *temp = head;
        while (temp->next != tail) {
            temp = temp->next;
        }

        temp->next = NULL;
        delete tail;
        tail = temp;
    }

    void insert(int pos, int val) {
        if (pos < 0) {
            cout << "Invalid position" << endl;
            return;
        }

        if (pos == 0) {
            push_front(val);
            return;
        }

        Node *temp = head;
        for (int i = 0; i < pos - 1; i++) {
            if (temp == NULL) {
                cout << "Invalid position" << endl;
                return;
            }
            temp = temp->next;
        }

        if (temp == NULL) {
            cout << "Invalid position" << endl;
            return;
        }

        Node *newNode = new Node(val);
        newNode->next = temp->next;
        temp->next = newNode;

        if (newNode->next == NULL) {
            tail = newNode;
        }
    }

    // Added from PDF: Insert before an element
    void insert_before(int target, int val) {
        if (head == NULL) {
            cout << "List is empty" << endl;
            return;
        }

        if (head->data == target) {
            push_front(val);
            return;
        }

        Node *prev = NULL;
        Node *ptr = head;

        while (ptr != NULL && ptr->data != target) {
            prev = ptr;
            ptr = ptr->next;
        }

        if (ptr == NULL) {
            cout << "Target not found" << endl;
            return;
        }

        Node *newNode = new Node(val);
        newNode->next = ptr;
        prev->next = newNode;
    }

    // Added from PDF: Insert after an element
    void insert_after(int target, int val) {
        Node *ptr = head;

        while (ptr != NULL && ptr->data != target) {
            ptr = ptr->next;
        }

        if (ptr == NULL) {
            cout << "Target not found" << endl;
            return;
        }

        Node *newNode = new Node(val);
        newNode->next = ptr->next;
        ptr->next = newNode;


    }

    // Added from PDF: Delete before an element
    void delete_before(int target) {
        if (head == NULL || head->next == NULL) {
            cout << "Deletion not possible" << endl;
            return;
        }

        if (head->data == target) {
            cout << "No node exists before target" << endl;
            return;
        }

        if (head->next->data == target) {
            pop_front();
            return;
        }

        Node *prev2 = NULL;
        Node *prev1 = head;
        Node *ptr = head->next;

        while (ptr != NULL && ptr->data != target) {
            prev2 = prev1;
            prev1 = ptr;
            ptr = ptr->next;
        }

        if (ptr == NULL) {
            cout << "Target not found" << endl;
            return;
        }

        prev2->next = ptr;
        delete prev1;
    }

    // Added from PDF: Delete after an element
    void delete_after(int target) {
        Node *ptr = head;

        while (ptr != NULL && ptr->data != target) {
            ptr = ptr->next;
        }

        if (ptr == NULL || ptr->next == NULL) {
            cout << "Deletion not possible" << endl;
            return;
        }

        Node *temp = ptr->next;
        ptr->next = temp->next;


        if (temp == tail) {
            tail = ptr;
        }


        delete temp;
    }

    void printLL() {
        Node *temp = head;
        while (temp != NULL) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};

int main() {
    List ll;

    ll.push_front(0);
    ll.push_front(1);
    ll.push_front(2);
    cout << "After push_front: ";
    ll.printLL();

    ll.push_back(8);
    cout << "After push_back: ";
    ll.printLL();

    ll.pop_front();
    cout << "After pop_front: ";
    ll.printLL();

    ll.pop_back();
    cout << "After pop_back: ";
    ll.printLL();

    ll.insert(1, 5);
    cout << "After insert at position 1: ";
    ll.printLL();

    ll.insert(2, 55);
    cout << "After insert at position 2: ";
    ll.printLL();

    ll.insert_before(5, 9);
    cout << "After insert_before(5, 9): ";
    ll.printLL();

    ll.insert_after(5, 7);
    cout << "After insert_after(5, 7): ";
    ll.printLL();

    ll.delete_before(5);
    cout << "After delete_before(5): ";
    ll.printLL();

    ll.delete_after(5);
    cout << "After delete_after(5): ";
    ll.printLL();

    return 0;
}
