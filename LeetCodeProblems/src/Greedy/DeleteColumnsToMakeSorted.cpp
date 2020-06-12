#include "DeleteColumnsToMakeSorted.h"
#include <bits/stdc++.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;

DeleteColumnsToMakeSorted::DeleteColumnsToMakeSorted() {
	// TODO Auto-generated constructor stub

}

DeleteColumnsToMakeSorted::~DeleteColumnsToMakeSorted() {
	// TODO Auto-generated destructor stub
}

int DeleteColumnsToMakeSorted::minDeletionSize(vector<string>& A) {

    int n = A[0].size(); // Strings length
    int m = A.size(); // Array length
    int result = 0;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m - 1;j++){
            if(A[j][i] > A[j + 1][i]){
                result++;
                break;
            }
        }
    }
    return result;
}

