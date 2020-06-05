/*
 * contingElements.h
 *
 *  Created on: Apr 13, 2020
 *      Author: Usseif
 */

#ifndef WEEK1_CONTINGELEMENTS_H_
#define WEEK1_CONTINGELEMENTS_H_
#include <bits/stdc++.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;

class contingElements {
public:
	contingElements();
	virtual ~contingElements();
	int find(int , vector<int> );
	int countElements(vector<int>& );
};

#endif /* WEEK1_CONTINGELEMENTS_H_ */
