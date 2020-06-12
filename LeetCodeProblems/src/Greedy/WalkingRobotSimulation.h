/*
 * WalkingRobotSimulation.h (Easy)
 *
 *  Created on: Jun 12, 2020
 *      Author: Usseif
 */

#ifndef GREEDY_WALKINGROBOTSIMULATION_H_
#define GREEDY_WALKINGROBOTSIMULATION_H_
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <bits/stdc++.h>
using namespace std;

class WalkingRobotSimulation {
public:
	WalkingRobotSimulation();
	virtual ~WalkingRobotSimulation();
	int robotSim(vector<int>& , vector<vector<int>>& );
};

#endif /* GREEDY_WALKINGROBOTSIMULATION_H_ */
