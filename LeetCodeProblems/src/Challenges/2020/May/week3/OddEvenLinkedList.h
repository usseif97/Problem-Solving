/*
 * OddEvenLinkedList.h
 *
 *  Created on: May 16, 2020
 *      Author: Usseif
 */

#ifndef CHALLENGES_MAY_WEEK3_ODDEVENLINKEDLIST_H_
#define CHALLENGES_MAY_WEEK3_ODDEVENLINKEDLIST_H_
#include <bits/stdc++.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;

class OddEvenLinkedList {
public:
	// Definition for singly-linked list.
	 struct ListNode {
	     int val;
	     ListNode *next;
	     ListNode() : val(0), next(nullptr) {}
	     ListNode(int x) : val(x), next(nullptr) {}
	     ListNode(int x, ListNode *next) : val(x), next(next) {}
	 };
	OddEvenLinkedList();
	virtual ~OddEvenLinkedList();
	ListNode* oddEvenList(ListNode*);
};

#endif /* CHALLENGES_MAY_WEEK3_ODDEVENLINKEDLIST_H_ */
