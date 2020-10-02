#include "ReverseWordsInAString.h"
#include <bits/stdc++.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;

ReverseWordsInAString::ReverseWordsInAString() {
	// TODO Auto-generated constructor stub

}

ReverseWordsInAString::~ReverseWordsInAString() {
	// TODO Auto-generated destructor stub
}

string ReverseWordsInAString::reverseWords(string s) {

    int i = 0;
    int n = s.length();
    string result;

    while(i < n){
        while(i < n && s[i] == ' ')
            i++;
        if(i >= n)
            break;
        int j = i + 1;
        while(j < n && s[j] != ' ')
            j++;
        string word = s.substr(i, j - i);  // subString start from index i to length j - i
        if(result.length() == 0)
            result = word;
        else
            result = word + " " + result;
        i = j + 1;

    }
    return result;
}
