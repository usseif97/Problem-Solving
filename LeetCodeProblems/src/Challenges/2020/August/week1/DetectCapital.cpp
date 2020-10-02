#include "DetectCapital.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <bits/stdc++.h>
using namespace std;

DetectCapital::DetectCapital() {
	// TODO Auto-generated constructor stub

}

DetectCapital::~DetectCapital() {
	// TODO Auto-generated destructor stub
}

bool detectCapitalUse(string word) {

    regex r("[A-Z]*|.[a-z]*"); // Geeks followed by any character

    if ( regex_match(word.begin(), word.end(), r) )
        return true;
    return false;
}

