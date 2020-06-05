/*
 * JumpGameI.h (Medium) (Bottom-UP)
 *
 *  Created on: May 4, 2020
 *      Author: Usseif
 */

#ifndef DYNAMICPROGRAMMING_JUMPGAMEI_H_
#define DYNAMICPROGRAMMING_JUMPGAMEI_H_
#include <bits/stdc++.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;

class JumpGameI {
public:
	JumpGameI();
	virtual ~JumpGameI();
	int canJump(vector<int>& nums);
	int min(int , int );
};

#endif /* DYNAMICPROGRAMMING_JUMPGAMEI_H_ */
