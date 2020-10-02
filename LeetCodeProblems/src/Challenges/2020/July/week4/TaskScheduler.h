/*
 * TaskScheduler.h
 *
 *  Created on: Aug 6, 2020
 *      Author: Usseif
 */

#ifndef CHALLENGES_2020_JULY_WEEK4_TASKSCHEDULER_H_
#define CHALLENGES_2020_JULY_WEEK4_TASKSCHEDULER_H_
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <bits/stdc++.h>
using namespace std;

class TaskScheduler {
public:
	TaskScheduler();
	virtual ~TaskScheduler();
	int leastInterval(vector<char>& , int );
};

#endif /* CHALLENGES_2020_JULY_WEEK4_TASKSCHEDULER_H_ */
