#include "PlusOne.h"
#include <bits/stdc++.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;

PlusOne::PlusOne() {
	// TODO Auto-generated constructor stub

}

PlusOne::~PlusOne() {
	// TODO Auto-generated destructor stub
}

vector<int> plusOnee(vector<int>& digits) {


   int i = digits.size() - 1;  // Last Digit

    while(i >= 0 && digits[i] == 9){
        digits[i] = 0;
        i--;
    }

    if(i == -1){ // if all number has 9 digits only
        vector<int> numberPlusOne(digits.size()+1, 0);
        numberPlusOne[0] = 1;
        return numberPlusOne;
    }

    digits[i]++;
    return digits;

}
