#include "FirstBadVersion.h"
#include <bits/stdc++.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;

FirstBadVersion::FirstBadVersion() {
	// TODO Auto-generated constructor stub

}

FirstBadVersion::~FirstBadVersion() {
	// TODO Auto-generated destructor stub
}

int FirstBadVersion::firstBad(int n) { //binarySearch
    int left = 1;
    int right = n;
    while (left < right) {
        int mid = left + (right - left) / 2;
        if (isBadVersion(mid)) {
            right = mid;
        } else {
            left = mid + 1;
        }
    }
    return left;

}

int FirstBadVersion::isBadVersion(int x){
	return 0 | 1;
}

