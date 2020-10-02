#include "LargestTimeForGivenDigits.h"
#include <bits/stdc++.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;

LargestTimeForGivenDigits::LargestTimeForGivenDigits() {
	// TODO Auto-generated constructor stub

}

LargestTimeForGivenDigits::~LargestTimeForGivenDigits() {
	// TODO Auto-generated destructor stub
}

string largestTimeFromDigits(vector<int>& A) {

    string answer="";
    string result="";

    for(auto i:A)
        result += to_string(i);  // to_string: Convert int to string


    sort(result.begin(), result.end());
    do {
        string hh = result.substr(0,2);
        string mm = result.substr(2);

        int h = stoi(hh); // stoi: Convert string to int
        int m = stoi(mm);

        if(h >= 0 && h <= 23 && m >=0 && m <= 59)
            answer = max(answer ,hh + ":" + mm);


    } while(next_permutation(result.begin(),result.end()));  // next_permutation: get permutations of the string

    return answer;
}
