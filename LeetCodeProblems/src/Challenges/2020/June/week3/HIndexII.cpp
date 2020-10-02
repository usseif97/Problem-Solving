#include "HIndexII.h"
#include <bits/stdc++.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;

HIndex_II::HIndex_II() {
	// TODO Auto-generated constructor stub

}

HIndex_II::~HIndex_II() {
	// TODO Auto-generated destructor stub
}

int hIndex(vector<int>& citations) {

    int n = citations.size();

    if (n == 0){
        return 0;
    }

    for(int i = 0; i < n; i++){
        if(citations[i] >= n - i)
            return n - i;
    }
    return 0;
}
