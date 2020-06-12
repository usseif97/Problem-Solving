#include "isSubsequence.h"
#include <bits/stdc++.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;

isSubsequence::isSubsequence() {
	// TODO Auto-generated constructor stub

}

isSubsequence::~isSubsequence() {
	// TODO Auto-generated destructor stub
}

bool isSubsequence::isSubseequence(string s, string t) {
    int i = 0; // counter on String t
    int j = 0; // counter on String s
    while(i < t.length()){
        if(t[i] == s[j]){
            j++;
        }
        if(j == s.length()){
            return true;
        }
        i++;
    }
    return j == s.length();
}

