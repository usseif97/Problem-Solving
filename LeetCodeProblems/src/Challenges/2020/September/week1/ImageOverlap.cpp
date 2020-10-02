#include "ImageOverlap.h"
#include <bits/stdc++.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;

ImageOverlap::ImageOverlap() {
	// TODO Auto-generated constructor stub

}

ImageOverlap::~ImageOverlap() {
	// TODO Auto-generated destructor stub
}

int countOverlaps(vector<vector<int>>& A, vector<vector<int>>& B, int rowOff, int columnOff) {

    int count = 0;
    int n = A.size();
    int m = A[0].size();

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if( (i + rowOff < 0 || i + rowOff >= n) || (j + columnOff < 0 || j + columnOff >= m) ) // many cases Ignored
                continue;
            if( (B[i][j] == A[i + rowOff][j + columnOff]) && B[i][j] == 1)
                count++;
        }
    }
    cout<<count<<endl;
    return count;
}

int largestOverlap(vector<vector<int>>& A, vector<vector<int>>& B) {

    int largestOverLap = 0;
    // OFFSET: from -(N - 1)  to (N - 1)
    int rowOffset = -(A.size() - 1);
    int columnOffset = -(A.size() - 1);

    int N = A.size();

    for(int i = rowOffset; i < N; i++){
        cout<<i<<endl;
        for(int j = columnOffset; j < N; j++){
            int counter = countOverlaps(A, B, i, j);
            //cout<<counter<<endl;
            largestOverLap = max(largestOverLap, counter);
        }
    }
    return largestOverLap;
}


