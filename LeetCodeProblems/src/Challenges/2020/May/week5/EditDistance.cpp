#include "EditDistance.h"
#include <bits/stdc++.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;

EditDistance::EditDistance() {
	// TODO Auto-generated constructor stub

}

EditDistance::~EditDistance() {
	// TODO Auto-generated destructor stub
}

int EditDistance::minDistance(string word1, string word2) {

    vector<vector<int> > dp;

    for(int i = 0; i <= word1.size(); i++) {
        vector<int> temp;
        for(int j = 0;j <= word2.size();j++) {
            temp.push_back(0);
        }
        dp.push_back(temp);
    }


    for(int i = 1; i <= word1.size(); i++)
        dp[0][i] = word1[i-1];


    for(int i = 1; i <= word2.size(); i++)
        dp[i][0] = word2[i-1];


    for(int i = 1; i <=  word1.size(); i++){
        for(int j = 1; j <= word2.size(); j++){
            if(dp[0][i] == dp[j][0])
                dp[i][j] = dp[i-1][j-1];
            else
                dp[i][j] = min(min(dp[i-1][j], dp[i][j-1]), dp[i-1][j-1]) + 1;
        }
    }

    return dp[word1.size()][word2.size()];
}

//  Time Limit Exceeded
/*int minDistance(string word1, string word2) {
    int minCost = editDist(word1, word2, word1.length(), word2.length());
    return minCost;
}

int minimium(int x, int y, int z) {
    return min(min(x, y), z);
}

int editDist(string str1, string str2, int m, int n) {
    if (m == 0)
        return n;

    if (n == 0)
        return m;

    if (str1[m - 1] == str2[n - 1])
        return editDist(str1, str2, m - 1, n - 1);

    // If last characters are not same, consider all three
    // operations on last character of first string, recursively
    // compute minimum cost for all three operations and take
    // minimum of three values.
    return 1 + minimium(editDist(str1, str2, m, n - 1), // Insert
                   editDist(str1, str2, m - 1, n), // Remove
                   editDist(str1, str2, m - 1, n - 1) // Replace
                   );
} */


