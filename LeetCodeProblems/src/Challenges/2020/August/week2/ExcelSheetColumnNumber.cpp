#include "ExcelSheetColumnNumber.h"
#include <bits/stdc++.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;

ExcelSheetColumnNumber::ExcelSheetColumnNumber() {
	// TODO Auto-generated constructor stub

}

ExcelSheetColumnNumber::~ExcelSheetColumnNumber() {
	// TODO Auto-generated destructor stub
}

int titleToNumber(string s) {

    // A -> 65
    // Z -> 90
    // (minus 64)

    /*Input - "ACBD"
        A            C         B          D
     1*26^3   +  3*26^2  +  2*26^1  +  4*26^0    =   19660
     ^           ^          ^          ^
     |           |          |          |
     3 <--       2  <--     1<--       0 <-start */

    int columnNumber = 0;
    int n = s.size();
    int power = 0;

    for(int i = n - 1; i >= 0; i--){
        columnNumber += ((int) s[i] - 64) * pow(26, power);
        power++;
    }

    return columnNumber;
}
