#include "ItsStraightLine.h"
#include <bits/stdc++.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;

ItsStraightLine::ItsStraightLine() {
	// TODO Auto-generated constructor stub

}

ItsStraightLine::~ItsStraightLine() {
	// TODO Auto-generated destructor stub
}

bool ItsStraightLine::checkStraightLine(vector<vector<int>>& coordinates) {

    if(coordinates.size() == 2){
    	cout << "Here! True" << endl; // prints !!!Hello World!!!
        return true;
    } else{ // scaling by multiplication to avoid flooring
        int dy = coordinates[1][1] - coordinates[0][1];
        int dx = coordinates[1][0] - coordinates[0][0];
        for(int i = 2; i < coordinates.size(); i++){
            vector<int> tempPoint = coordinates[i];
            if(dx*(tempPoint[1] - coordinates[0][1]) != dy*(tempPoint[0] - coordinates[0][0]) ){
                return false;
            }
        }
        return true;
    }
}

/*	vector<vector<int> > vect{ { 1, 1 },
	                               { 2, 2 },
	                               { 3, 4 },
								   { 4, 5 },
								   { 5, 6 },
								   { 7, 7 } };
 *
 */

