#include "NumbersWithSameConsecutiveDifferences.h"
#include <bits/stdc++.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;

NumbersWithSameConsecutiveDifferences::NumbersWithSameConsecutiveDifferences() {
	// TODO Auto-generated constructor stub

}

NumbersWithSameConsecutiveDifferences::~NumbersWithSameConsecutiveDifferences() {
	// TODO Auto-generated destructor stub
}

void dfs(int n, int number, int k, vector<int>& answer){
    if(n == 0){
        answer.push_back(number);
        return;
    }

    if((number % 10) + k < 10)  // (number % 10) it's the last Digit (units)
        dfs(n - 1, number * 10 + number % 10 + k, k, answer);
    if(k > 0 && (number % 10) - k >= 0)
        dfs(n - 1, number * 10 + number % 10 - k, k, answer);
    // number * 10 + number % 10 + k,
    // increase a digit,
    // then get the last digit,
    // then add or subtract the K value

}

vector<int> numsSameConsecDiff(int N, int K) {

    if (N == 1)
        return {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    vector<int> answer;

    for(int i = 1; i < 10; i++)
        dfs(N - 1, i, K, answer);
    return answer;
}
