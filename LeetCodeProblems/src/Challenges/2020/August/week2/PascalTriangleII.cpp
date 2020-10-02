#include "PascalTriangleII.h"
#include <bits/stdc++.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;

PascalTriangleII::PascalTriangleII() {
	// TODO Auto-generated constructor stub

}

PascalTriangleII::~PascalTriangleII() {
	// TODO Auto-generated destructor stub
}

vector<int> getRow(int rowIndex) {

    vector<int> pascal(rowIndex + 1, 0);  // Overwrite the same vector
    pascal[0] = 1;

    for(int i = 1; i <= rowIndex; i++){
        for(int j = i; j > 0; j--)
            pascal[j] = pascal[j] + pascal[j - 1];
    }
    return pascal;
}
