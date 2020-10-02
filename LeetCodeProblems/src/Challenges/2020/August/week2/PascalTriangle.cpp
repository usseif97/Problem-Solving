#include "PascalTriangle.h"
#include <bits/stdc++.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;

PascalTriangle::PascalTriangle() {
	// TODO Auto-generated constructor stub

}

PascalTriangle::~PascalTriangle() {
	// TODO Auto-generated destructor stub
}

vector<vector<int>> generate(int numRows) {

    if (numRows == 0)
        return vector<vector<int>>();


    vector<vector<int>> pascal;

    pascal.push_back({1}); // 1st Row (0 index)

    for(int i = 1; i < numRows; i++){
        vector<int> currentRow;
        vector<int> previousRow = pascal[i - 1];

        currentRow.push_back(1);
        for(int j = 1; j < i; j++)
            currentRow.push_back(previousRow[j] + previousRow[j - 1]);
        currentRow.push_back(1);

        pascal.push_back(currentRow);
    }
    return pascal;
}
