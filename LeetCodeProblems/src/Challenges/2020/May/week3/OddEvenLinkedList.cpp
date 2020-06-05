#include "OddEvenLinkedList.h"
#include <bits/stdc++.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;

OddEvenLinkedList::OddEvenLinkedList() {
	// TODO Auto-generated constructor stub

}

OddEvenLinkedList::~OddEvenLinkedList() {
	// TODO Auto-generated destructor stub
}

/*ListNode* OddEvenLinkedList::oddEvenList(ListNode* head) {
    if(head == NULL){
        return NULL;
    }
    ListNode* odd = head;
    ListNode* even = head->next;
    ListNode* evenHead = even;
    while(even != NULL && even->next != NULL){
        odd->next = even->next;
        odd = odd->next;
        even->next = odd->next;
        even = even->next;
    }
    odd->next = evenHead;

    return head;
}*/

