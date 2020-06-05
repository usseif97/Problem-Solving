#include "contingElements.h"
#include <bits/stdc++.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;

contingElements::contingElements() {
	// TODO Auto-generated constructor stub

}

contingElements::~contingElements() {
	// TODO Auto-generated destructor stub
}


int contingElements::find(int el, vector<int> vec){
	for (int j = 0; j < vec.size(); j++){
		if (vec[j] == el){
			return 1;
        }
    }
    return 0;
}

int contingElements::countElements(vector<int>& arr) {

	int count = 0;
    for (int i = 0; i < arr.size(); i++){
    	if(find(arr[i]+1, arr)){
    		count++;
    	}
    }
    return count;
}

