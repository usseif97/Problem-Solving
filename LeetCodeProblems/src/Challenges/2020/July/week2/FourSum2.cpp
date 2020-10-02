#include "FourSum2.h"
#include <bits/stdc++.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;

// O(n^2)

FourSum2::FourSum2() {
	// TODO Auto-generated constructor stub

}

FourSum2::~FourSum2() {
	// TODO Auto-generated destructor stub
}

int fourSumCount(vector<int>& A, vector<int>& B, vector<int>& C, vector<int>& D) {

    // not unordered_set because it remove duplicates
    // Both unordered_map & unordered_set run Search on O(1) on average
    unordered_map<int, int> map;
    int count = 0;

    for(int x : A){
        for(int y : B)
            map[x + y]++; // increment value at this index
    }

    for(int x : C){
        for(int y : D){
            if(map.find(-(x + y)) != map.end())
                count +=   map[-(x + y)];
        }
    }
    return count;
}

