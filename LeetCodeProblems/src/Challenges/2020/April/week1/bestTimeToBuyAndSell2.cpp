#include "bestTimeToBuyAndSell2.h"
#include <bits/stdc++.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;

bestTimeToBuyAndSell2::bestTimeToBuyAndSell2() {
	// TODO Auto-generated constructor stub

}

bestTimeToBuyAndSell2::~bestTimeToBuyAndSell2() {
	// TODO Auto-generated destructor stub
}

int bestTimeToBuyAndSell2::maxProfit(vector<int>& prices) {
	int max = 0;
    for (int i = 1; i < prices.size(); i++){
    	if (prices[i-1] < prices[i]){
    		max += (prices[i] - prices[i-1]);
        }
    }
    return max;
 }

//TotalProfit=∑i ( height(peak i) − height(valley i) )

