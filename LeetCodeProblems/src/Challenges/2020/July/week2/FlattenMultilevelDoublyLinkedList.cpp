#include "FlattenMultilevelDoublyLinkedList.h"
#include <bits/stdc++.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;

FlattenMultilevelDoublyLinkedList::FlattenMultilevelDoublyLinkedList() {
	// TODO Auto-generated constructor stub

}

FlattenMultilevelDoublyLinkedList::~FlattenMultilevelDoublyLinkedList() {
	// TODO Auto-generated destructor stub
}

// Definition for a Node.
class Node {
public:
    int val;
    Node* prev;
    Node* next;
    Node* child;
};


Node* flatten(Node* head) {

    if (head == NULL)
        return head;


    stack <Node*> s;
    s.push(head);

    while(!s.empty()){

        Node* current = s.top();
        //cout<<current->val<<endl;
        s.pop();

        if(current->child != NULL){
            Node* child = current->child;
            s.push(current->child);
            // adjust last child with Next
            Node* lastChild = child;
            while(lastChild->next != NULL){
                lastChild = lastChild->next;
            }
            lastChild->next = current->next;
            if(current->next != NULL)
                current->next->prev = lastChild;
            // adjust first child with current
            current->next = child;
            child->prev = current;
            current->child = NULL;
        } else {
            if(current->next != NULL)
                s.push(current->next);
        }
    }
    return head;
}
