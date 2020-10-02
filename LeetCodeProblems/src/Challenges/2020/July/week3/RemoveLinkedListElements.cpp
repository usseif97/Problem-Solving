#include "RemoveLinkedListElements.h"
#include <bits/stdc++.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;

RemoveLinkedListElements::RemoveLinkedListElements() {
	// TODO Auto-generated constructor stub

}

RemoveLinkedListElements::~RemoveLinkedListElements() {
	// TODO Auto-generated destructor stub
}

 //Definition for singly-linked list.
 struct ListNode {
     int val;
     ListNode *next;
     ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
 };


ListNode* removeElements(ListNode* head, int val) {

    if(head == NULL)
        return NULL;

    ListNode* current = head;
    while(current->next != NULL){
        if(current->next->val == val){
            current->next = current->next->next;
        } else {
            current = current->next;
        }
    }
    if(head->val == val)    // if head have the value
        head = head->next;

    return head;
}
