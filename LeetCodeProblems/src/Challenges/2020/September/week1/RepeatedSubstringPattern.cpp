#include "RepeatedSubstringPattern.h"
#include <bits/stdc++.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;

RepeatedSubstringPattern::RepeatedSubstringPattern() {
	// TODO Auto-generated constructor stub

}

RepeatedSubstringPattern::~RepeatedSubstringPattern() {
	// TODO Auto-generated destructor stub
}


bool repeatedSubstringPattern(string s) {

    // Check if the new string, still contains the original string or not
    string concatenated = s + s;

    concatenated = concatenated.substr(1, concatenated.size() - 2);

    if (concatenated.find(s) != std::string::npos)
        return true; //Found
    return false;
}
