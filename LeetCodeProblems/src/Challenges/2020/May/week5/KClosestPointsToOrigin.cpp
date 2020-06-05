#include "KClosestPointsToOrigin.h"
#include <bits/stdc++.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;

KClosestPointsToOrigin::KClosestPointsToOrigin() {
	// TODO Auto-generated constructor stub

}

KClosestPointsToOrigin::~KClosestPointsToOrigin() {
	// TODO Auto-generated destructor stub
}


vector<vector<int>> KClosestPointsToOrigin::kClosest(vector<vector<int>>& points, int K) {

    vector<pair<float, int>> distances;
    vector<vector<int>> result;

    for(int i = 0; i < points.size(); i++){
        vector<int> currentPoint = points[i];
        float dis = distance(currentPoint[0], currentPoint[1]);
        distances.push_back( make_pair(dis, i) );
    }

    sort(distances.begin(), distances.end());

    for(int i = 0; i < K; i++){
        pair <float,int> p = distances[i];
        vector<int> temp = points[p.second];
        result.push_back(temp);
    }

    return result;
}


float KClosestPointsToOrigin::distance(int x, int y) {
    // Calculating distance
    return sqrt(pow(x - 0, 2) +
                pow(y - 0, 2) * 1.0);
}

