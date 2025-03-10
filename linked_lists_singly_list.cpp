#include <iostream>
//this is a forward list



// Node for a singly linked list
struct Node {
    int data {};
    Node* next {};
};

// add a new node to the front of the list
// returns a pointer to this new node, which is now
// the first node in the list
//this function wants to create a node that lives beyond the scope of the function
// so we have to use new here for heap memory
Node* push_front(int val, Node* head) {
    // Node* newNode = new Node{val, head};
    // return newNode;
    return new Node{val, head};
}

// Print the values
void print(Node* head){
    for(Node* cur {head}; cur != nullptr; cur = cur->next){
        std::cout << (*cur).data << '\n';
    }
}

// new must be paired with delete
// we need to free all the memory we used
void cleanUp(Node* head){
    for(Node* cur{head}; cur != nullptr;){
        Node* temp = cur;
        cur = cur->next;
        delete temp;
    }
}

int main() {
    
    // Node a {1};
    // Node b {2};
    // Node c {3};
    // a.next = &b;
    // b.next = &c;

    // print(&a);
    // std::cout << "***\n";
    // Node* head = push_front(0, &a);
    // print(head);

    Node* head = nullptr;
    head = push_front(4, head);
    head = push_front(3, head);
    head = push_front(2, head);
    head = push_front(1, head);
    head = push_front(0, head);
    print(head);
    cleanUp(head);

    return 0;
}