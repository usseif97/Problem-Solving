#include "WalkingRobotSimulation.h"
#include <bits/stdc++.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;

WalkingRobotSimulation::WalkingRobotSimulation() {
	// TODO Auto-generated constructor stub

}

WalkingRobotSimulation::~WalkingRobotSimulation() {
	// TODO Auto-generated destructor stub
}

int WalkingRobotSimulation::robotSim(vector<int>& commands, vector<vector<int>>& obstacles) {

    // Directions
    int dx[4] = {0, 1, 0, -1};
    int dy[4] = {1, 0, -1, 0};

    int x = 0, y = 0; // Current Position
    int di = 0;
    int distance = 0;

     // you need this in order to put pair in the set
    // Just for Leetcode
    struct pair_hash {
        std::size_t operator()(const std::pair<int, int>& v) const {
                return v.first * 97 + v.second;
            }
    };

     // Search in O(1) onAverage
    unordered_set<pair<int, int>, pair_hash> obstacleSet;

    for (vector<int> obstacle: obstacles)
        obstacleSet.insert(make_pair(obstacle[0], obstacle[1]));


    for(int command : commands){
        if(command == -1)
            di = (di + 1) % 4;
        else if(command == -2)
            di = (di + 3) % 4;
        else{
            while(command > 0){
                int tempX = x + dx[di];
                int tempY = y + dy[di];

                // Check if there's Obtacle
                if(obstacleSet.find(make_pair(tempX, tempY)) != obstacleSet.end()){
                    // if there's Obstacle do nothing
                } else{
                    x = tempX;
                    y = tempY;
                    distance = max(distance, x*x + y*y);
                }
                command--;
            }
        }
    }

    return distance;
}
