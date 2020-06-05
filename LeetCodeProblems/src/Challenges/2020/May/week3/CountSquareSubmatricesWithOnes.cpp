/*
 * CountSquareSubmatricesWithOnes.cpp
 *
 *  Created on: May 21, 2020
 *      Author: Usseif
 */

#include "CountSquareSubmatricesWithOnes.h"

CountSquareSubmatricesWithOnes::CountSquareSubmatricesWithOnes() {
	// TODO Auto-generated constructor stub

}

CountSquareSubmatricesWithOnes::~CountSquareSubmatricesWithOnes() {
	// TODO Auto-generated destructor stub
}

int CountSquareSubmatricesWithOnes::countSquares(vector<vector<int>>& matrix) {

        vector<vector<int>> mem;
        for(int i = 0; i < matrix.size(); i++) {
            vector<int> temp;
            for(int j = 0;j < matrix[0].size();j++) {
                temp.push_back(0);
            }
            mem.push_back(temp);
        }

        int numberOfSqures = 0;
        for(int i = 0; i < matrix.size(); i++){
            for(int j = 0; j < matrix[0].size(); j++){
                if(i == 0 || j == 0){
                    mem[i][j] = matrix[i][j];
                } else if(matrix[i][j] == 1){ // Only Find on Above Left Side
                    mem[i][j] = min(mem[i - 1][j], min( mem[i - 1][j - 1], mem[i][j - 1] ) ) + 1;
                }
                numberOfSqures += mem[i][j];
            }
        }
        return numberOfSqures;
    }

