#include "UncrossedLines.h"
#include <bits/stdc++.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;

UncrossedLines::UncrossedLines() {
	// TODO Auto-generated constructor stub

}

UncrossedLines::~UncrossedLines() {
	// TODO Auto-generated destructor stub
}

int UncrossedLines::maxUncrossedLines(vector<int>& A, vector<int>& B) {

	int m = A.size(), n = B.size();
	// 2D Vector with 1 index perspective
	vector<vector<int>> dp(m + 1, vector<int>(n + 1));

	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			if(A[i] == B[j])
				dp[i+1][j+1] = dp[i][j] + 1; // get Diagonal + 1
			else
				dp[i+1][j+1] = max(dp[i+1][j], dp[i][j+1]); // check above row & left column
		}
	}
	return dp[m][n];
}

