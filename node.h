#include <iostream>
using namespace std;
class Node {
public:
    string element;
    Node* prev;
    Node* next;
    Node(string name) : element(name), prev(nullptr), next(nullptr) {}
};

class DoublyLinkedList{
private:
    Node* head;
    Node* tail;

public:
    DoublyLinkedList();
    void insert(string element);
    void print();
    void selectionSort();

private:
    void swapNodes(Node* node1, Node* node2);
};

DoublyLinkedList::DoublyLinkedList() {
    head = NULL;
    tail = NULL;
    insert("Water");
    insert("Land");
    insert("Trees");
    insert("Animals");
    insert("Wood");
    insert("Metal");
	insert("Male");
	insert("Female");
}

    void DoublyLinkedList::insert(string element) {
        Node* newNode = new Node(element);
        if (!head) {
            head = tail = newNode;
        } else {
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }
    }

    void DoublyLinkedList::print() {
        int i=1;
        Node* current = head;
        while (current) {
          cout << current->element << " ";
          if(i%6==0) cout<<endl<<"              ";
          i++;
          current = current->next;
        }
        cout <<endl;
    }

    void DoublyLinkedList::selectionSort() {
        if (!head || !head->next) return;

        Node* i = head;
        while (i->next) {
            Node* minNode = i;
            Node* j = i->next;
            while (j) {
                if (j->element < minNode->element) {
                    minNode = j;
                }
                j = j->next;
            }
            if (minNode != i) {
                swapNodes(i, minNode);
            }
            i = i->next;
        }
    }

    void DoublyLinkedList::swapNodes(Node* node1, Node* node2) {
        if (node1 == node2) return;
        string temp = node1->element;
        node1->element = node2->element;
        node2->element = temp;
    }