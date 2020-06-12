#include "MaximizeSumOfArrayAfterKNegations.h"
#include <bits/stdc++.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;

MaximizeSumOfArrayAfterKNegations::MaximizeSumOfArrayAfterKNegations() {
	// TODO Auto-generated constructor stub

}

MaximizeSumOfArrayAfterKNegations::~MaximizeSumOfArrayAfterKNegations() {
	// TODO Auto-generated destructor stub
}

int largestSumAfterKNegations(vector<int>& A, int K) {

    int sum = 0;

    while(K > 0){
        int minElement = INT_MAX;
        int minElementIndex = 0;

        for(int i = 0; i < A.size(); i++){
            if(A[i] < minElement){
                minElement = A[i];
                minElementIndex = i;
            }
        }

        A[minElementIndex] *= -1;
        K--;
    }

    for(int x : A)
        sum += x;

    return sum;
}
