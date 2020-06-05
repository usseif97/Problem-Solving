#include "FindTownJudge.h"
#include <bits/stdc++.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;

FindTownJudge::FindTownJudge() {
	// TODO Auto-generated constructor stub

}

FindTownJudge::~FindTownJudge() {
	// TODO Auto-generated destructor stub
}

int findJudge(int N, vector<vector<int>>& trust) {

    int persons[N + 1];  // declare the array and then...
    for (int i = 0; i <= N; i++){ // ...initialize it
        persons[i] = 0;
    }

    for(vector<int> tempTrust : trust){
        persons[tempTrust[0]]--;
        persons[tempTrust[1]]++;
    }

    for(int i = 1; i <= N; i++){
        if(persons[i] == N - 1){
            return i;
        }
    }
    return -1;
}

