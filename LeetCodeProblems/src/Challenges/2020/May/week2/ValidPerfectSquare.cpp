#include "ValidPerfectSquare.h"
#include <bits/stdc++.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;

ValidPerfectSquare::ValidPerfectSquare() {
	// TODO Auto-generated constructor stub

}

ValidPerfectSquare::~ValidPerfectSquare() {
	// TODO Auto-generated destructor stub
}

bool ValidPerfectSquare::isPerfectSquare(int num) {

    for(long int i = 1; i * i <= num; i++){
        if((num % i == 0) && (num / i == i)){
            return true;
        }
    }
    return false;
}

