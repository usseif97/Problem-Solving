/*
 * SearchInRotatedSortedArray.h
 *
 *  Created on: Jul 25, 2020
 *      Author: Usseif
 */

#ifndef CHALLENGES_2020_JULY_WEEK4_SEARCHINROTATEDSORTEDARRAY_H_
#define CHALLENGES_2020_JULY_WEEK4_SEARCHINROTATEDSORTEDARRAY_H_
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <bits/stdc++.h>
using namespace std;

class SearchInRotatedSortedArray {
public:
	SearchInRotatedSortedArray();
	virtual ~SearchInRotatedSortedArray();
	int search(vector<int>& nums, int target);
	int binarySearch(vector<int>& , int , int , int );
};

#endif /* CHALLENGES_2020_JULY_WEEK4_SEARCHINROTATEDSORTEDARRAY_H_ */
