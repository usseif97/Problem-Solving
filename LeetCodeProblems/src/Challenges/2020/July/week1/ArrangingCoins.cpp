#include "ArrangingCoins.h"
#include <bits/stdc++.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;

ArrangingCoins::ArrangingCoins() {
	// TODO Auto-generated constructor stub

}

ArrangingCoins::~ArrangingCoins() {
	// TODO Auto-generated destructor stub
}

int ArrangingCoins::arrangeCoiins(int n) {
    // K(K+1) <= 2n
    // (K+1)^2 - 1/4 <= 2n

    return (int)(sqrt(2*(double)n + 0.25) - 0.5);

}
