#include "NumberOfRecentCalls.h"
#include <bits/stdc++.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;

NumberOfRecentCalls::NumberOfRecentCalls() {
	// TODO Auto-generated constructor stub

}

NumberOfRecentCalls::~NumberOfRecentCalls() {
	// TODO Auto-generated destructor stub
}

queue<int> q;

RecentCounter() {

}

int ping(int t) {
    q.push(t);
    while(q.front() < t - 3000)
        q.pop();
    return q.size();
}
