/*
 * FlattenMultilevelDoublyLinkedList.h
 *
 *  Created on: Jul 10, 2020
 *      Author: Usseif
 */

#ifndef CHALLENGES_2020_JULY_WEEK2_FLATTENMULTILEVELDOUBLYLINKEDLIST_H_
#define CHALLENGES_2020_JULY_WEEK2_FLATTENMULTILEVELDOUBLYLINKEDLIST_H_
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <bits/stdc++.h>
using namespace std;

class FlattenMultilevelDoublyLinkedList {
public:
	FlattenMultilevelDoublyLinkedList();
	virtual ~FlattenMultilevelDoublyLinkedList();
	Node* flatten(Node* head);
};

#endif /* CHALLENGES_2020_JULY_WEEK2_FLATTENMULTILEVELDOUBLYLINKEDLIST_H_ */
