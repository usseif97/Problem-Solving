#include "maxCircularSubArray.h"
#include <climits>
#include <bits/stdc++.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;

maxCircularSubArray::maxCircularSubArray() {
	// TODO Auto-generated constructor stub

}

maxCircularSubArray::~maxCircularSubArray() {
	// TODO Auto-generated destructor stub
}

// MaxSum can get from circular array is The SUM of all elements in the array except
// the MIN SubArray
// So we will calculate the MaxSum using this and also with kadane Algorithm
// Then find the MAX
int maxCircularSubArray::maxSubarraySumCircular(vector<int>& A) {
	int maxSoFar = INT_MIN;
	int minSoFar = INT_MAX;
    int maxTemp = 0;
    int minTemp = INT_MAX;
    int totalSum = 0;

    for (int i = 0; i < A.size(); i++){
    	// MAX SubArray
    	maxTemp += A[i];
        if(maxSoFar < maxTemp){
        	maxSoFar = maxTemp;
        }
        if(maxTemp < 0){
        	maxTemp = 0;
        }
        // MIN SubArray
        if(minTemp > 0){
        	minTemp = A[i];
        } else{
        	minTemp += A[i];
        }
        if(minTemp < minSoFar){
        	minSoFar = minTemp;
        }
        // Total Sum
        totalSum += A[i];
    }

	cout << "maxSoFar: "<<maxSoFar<< endl;
	cout << "minSoFar: "<<minSoFar<< endl;
	cout << "totalSum: "<<totalSum<< endl;

    // if minSubArray == totalSum
    // then all Array are -ve
    if(minSoFar == totalSum){
    	cout << "Result: "<<maxSoFar<< endl;
    	return maxSoFar;
    } else {
    	cout << "Result: "<<(totalSum < maxSoFar ? maxSoFar : totalSum - minSoFar)<< endl;
    	return (totalSum - minSoFar < maxSoFar ? maxSoFar : totalSum - minSoFar);
    }
}
