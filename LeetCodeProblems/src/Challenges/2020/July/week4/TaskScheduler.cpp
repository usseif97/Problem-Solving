#include "TaskScheduler.h"
#include <bits/stdc++.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;

TaskScheduler::TaskScheduler() {
	// TODO Auto-generated constructor stub

}

TaskScheduler::~TaskScheduler() {
	// TODO Auto-generated destructor stub
}

int TaskScheduler::leastInterval(vector<char>& tasks, int n) {

    // n = 2
    // A - idle - idle - A - idle - idle - A

    vector<int> frequency(26);
    for (auto ch : tasks)
        frequency[ch - 'A']++;

    sort(frequency.begin(), frequency.end());

    int maxValue = frequency[25] - 1;  // -1 because there's no idle slots after the last char
    int idleSlots = maxValue * n;
    cout<<idleSlots<<endl;

    for(int i = 24; i >=0 ; i--)
        idleSlots -= min(frequency[i], maxValue);

    cout<<idleSlots<<endl;


    return idleSlots > 0 ? idleSlots + tasks.size() : tasks.size();

}

