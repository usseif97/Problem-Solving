#include "CoinChange2.h"
#include <bits/stdc++.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;

CoinChange2::CoinChange2() {
	// TODO Auto-generated constructor stub

}

CoinChange2::~CoinChange2() {
	// TODO Auto-generated destructor stub
}

int CoinChange2::change(int amount, vector<int>& coins) {

    int n = coins.size();

    vector<vector<int>> dp; // 2d array of possibilities of each coin in a row

    for(int i = 0; i <= n; i++) {
	    vector<int> temp;
	    for(int j = 0; j <= amount; j++) {
		    temp.push_back(0);
	    }
	    dp.push_back(temp);
    }

    for(int i = 0; i <= n; i++)
        dp[i][0] = 1;  // put 1 in the first column

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= amount; j++){
            if(j >= coins[i - 1]) // coins[i - 1] returns the temp added coin.
                dp[i][j] = dp[i - 1][j] + dp[i][j - coins[i - 1]];
            else
                dp[i][j] = dp[i - 1][j];
        }
    }
    return dp[n][amount];

}

