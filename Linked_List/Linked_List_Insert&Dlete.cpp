#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
};

//Print_data function that prints whole linked list
void print_data(Node* head) {
    while (head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

// Insert an element at the beginning of a linked list 
Node* insert_first(Node* head, int value) {
    Node* newnode = new Node();

    newnode->data = value;
    newnode->next = head;

    head = newnode;

    return head;
}

// Insert an element at the end of a linked list 
Node* insert_end(Node* head, int value) {
    Node* newnode = new Node();

    newnode->data = value;
    newnode->next = NULL;

    Node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }

    temp->next = newnode;
    return head;
}

//Insert an element in the middle of a linked list 
Node* insert_any(Node* head, int value, int key) {
    Node* newnode = new Node();
    newnode->data = value;
    newnode->next = NULL;
    Node* temp = head;

    while (temp->next != NULL) {
        if (temp->data == key) {
            newnode->next = temp->next;
            temp->next = newnode;
            break;
        }
        temp = temp->next;
    }
    return head;
}


// Delete from beginning 
Node* delete_beginning(Node* head) {
    Node* temp = head;
    head = head->next;
    temp->next = NULL;
    return head;
}


//Delete from end
Node* delete_end(Node* head) {
    Node* temp = head;
    while (temp->next->next != NULL) {
        temp = temp->next;
    }
    temp->next = NULL;
    return head;
}


//Delete from middle 
Node* delete_middle(Node* head, int key) {
    Node* temp = head;
    int position = 1;
    int i = 1;
    while (temp->next != NULL) {
        if (temp->data == key)
            break;
        temp = temp->next;
        i = i + 1;
        position = i;
    }
    
    Node* temp1 = head;
    for (int i = 2; i < position; i++) {
        if (temp1->next != NULL) { temp1 = temp1->next; }
    }
    temp1->next = temp1->next->next;
    return head;
}

int main() {
    Node* head = NULL;
    Node* first = new Node();
    Node* second = new Node();
    Node* third = new Node();
    Node* forth = new Node();

    first->data = 10;
    second->data = 20;
    third->data = 40;
    forth->data = 50;

    first->next = second;
    second->next = third;
    third->next = forth;
    forth->next = NULL;

    //Printing linked list
    head = first;
    cout << "Printing Linked List: ";
    print_data(head);

    //insertion as first element
    head = insert_first(head, 30);
    cout << "Linked List after first element insertion: ";
    print_data(head);

    //insertion as last element
    head = insert_end(head, 60);
    cout << "Linked List after last element insertion: ";;
    print_data(head);

    //insertion in any position 
    head = insert_any(head, 45, 40);
    cout << "Linked List after any position insertion: ";
    print_data(head);

    //first element deletion
    head = delete_beginning(head);
    cout << "Linked List after first element deletion: ";
    print_data(head);

    //last element deletion
    head = delete_end(head);
    cout << "Linked List after last element deletion: ";
    print_data(head);

    //middle element deletion
    head = delete_middle(head, 40);
    cout << "Linked List after middle element deletion: ";
    print_data(head);
    
    return 0;
}
