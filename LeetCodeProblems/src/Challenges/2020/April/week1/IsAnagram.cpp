#include "IsAnagram.h"
#include <bits/stdc++.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;


IsAnagram::IsAnagram() {
	// TODO Auto-generated constructor stub

}

IsAnagram::~IsAnagram() {
	// TODO Auto-generated destructor stub
}

bool IsAnagram::iisAnagram(string s, string t) {

    string sortedStr1 = s;
        sort(sortedStr1.begin(), sortedStr1.end());
    string sortedStr2 = t;
        sort(sortedStr2.begin(), sortedStr2.end());

    return sortedStr1 == sortedStr2 ? true : false;

}

