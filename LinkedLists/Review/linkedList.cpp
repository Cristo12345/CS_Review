#include <cstddef>

using namespace std;

// Linked Lists
// A linear data structure. Made up of nodes that aren't necessarily stored next to each other in memory

// Advantage over Arrays
// 1. Dynamic size
//     - array sizes are fixed. Cannot add to a full array, must create a new one

// 2. Easier Insertion/Deletion    
//     - In a sorted array, inserting a new element also means moving all the elements to the right of it. Same with deletion

// Disadvatages
// 1. No Random Access
//     - must traverse sequentially from the first node (cannot do binary search)

// 2. Extra memory required for storing pointer in each element


// Representation
// Each node contains a value and a pointer to next node. 
// Represented by a pointer to the first node (the HEAD). HEAD's value is empty if the list empty

// Each node is made up of
//  1. DATA
//  2. POINTER (reference to next node)

// Singly-Linked List (each node only points to the next node)
// [ A ] -> [ B ] -> [ C ] -> NULL

// we create a Linked list by creating Node structures

#include <iostream>
using namespace std;

struct Node {
    int data;
    struct Node *next;
};

// Insert new node to font of list (new head)
void push(struct Node** head, int node_data) {
    // 1. create a new node struct
    struct Node* newNode = new Node;
    
    // 2. assign data to new node
    newNode -> data = node_data;

    // 3. set next of new node as head
    newNode -> next = (*head);

    // 4. move head to point to new node
    (*head) = newNode;
}

int main () {

}