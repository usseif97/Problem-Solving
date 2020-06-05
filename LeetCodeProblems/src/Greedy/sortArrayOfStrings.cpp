#include "sortArrayOfStrings.h"
#include <bits/stdc++.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;

sortArrayOfStrings::sortArrayOfStrings() {
	// TODO Auto-generated constructor stub

}

sortArrayOfStrings::~sortArrayOfStrings() {
	// TODO Auto-generated destructor stub
}


void sort(string s[], int n) {
    for (int i=1 ;i<n; i++)  {
        string temp = s[i];

        // Insert s[j] at its correct position
        int j = i - 1;
        while (j >= 0 && temp.length() < s[j].length()) {
            s[j+1] = s[j];
            j--;
        }
        s[j+1] = temp;
    }
}
