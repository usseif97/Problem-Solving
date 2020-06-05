#include "DeleteNodeInLinkedList.h"
#include <bits/stdc++.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;

DeleteNodeInLinkedList::DeleteNodeInLinkedList() {
	// TODO Auto-generated constructor stub

}

DeleteNodeInLinkedList::~DeleteNodeInLinkedList() {
	// TODO Auto-generated destructor stub
}


// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};


void deleteNode(ListNode* node) {
	node->val = node->next->val;
    node->next = node->next->next;
}


