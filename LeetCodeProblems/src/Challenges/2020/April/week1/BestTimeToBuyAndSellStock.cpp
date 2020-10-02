#include "BestTimeToBuyAndSellStock.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <bits/stdc++.h>
using namespace std;

BestTimeToBuyAndSellStock::BestTimeToBuyAndSellStock() {
	// TODO Auto-generated constructor stub

}

BestTimeToBuyAndSellStock::~BestTimeToBuyAndSellStock() {
	// TODO Auto-generated destructor stub
}

int maxProfit(vector<int>& prices) {

    // 1 pass solution (Graph)

    int minPrice = INT_MAX;
    int maxProfit = 0;

    for(int i = 0; i < prices.size(); i++){
        if(prices[i] < minPrice)
            minPrice = prices[i];
        else if(prices[i] - minPrice > maxProfit)
            maxProfit = prices[i] - minPrice;
    }
    return maxProfit;
}

