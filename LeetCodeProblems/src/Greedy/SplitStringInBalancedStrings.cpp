#include "SplitStringInBalancedStrings.h"
#include <bits/stdc++.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;

SplitStringInBalancedStrings::SplitStringInBalancedStrings() {
	// TODO Auto-generated constructor stub

}

SplitStringInBalancedStrings::~SplitStringInBalancedStrings() {
	// TODO Auto-generated destructor stub
}

int SplitStringInBalancedStrings::balancedStringSplit(string s) {

    int output = 0, count = 0;

    for(char c : s){
        if(c == 'L')
            count++;
        else
            count--;

        if(count == 0)
            output++;
    }
    return output;
}
