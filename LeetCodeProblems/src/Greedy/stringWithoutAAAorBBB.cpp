/*
 * stringWithoutAAAorBBB.cpp
 *
 *  Created on: Apr 25, 2020
 *      Author: Usseif
 */

#include "stringWithoutAAAorBBB.h"
#include <bits/stdc++.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;

stringWithoutAAAorBBB::stringWithoutAAAorBBB() {
	// TODO Auto-generated constructor stub

}

stringWithoutAAAorBBB::~stringWithoutAAAorBBB() {
	// TODO Auto-generated destructor stub
}

string stringWithoutAAAorBBB::strWithout3a3b(int A, int B) {
        string output = "";

        while (A > 0 || B > 0) {
            int writeA = 0;
            int writeB = 0;

            int L = output.length();
            if (L >= 2 && output[L-1] == output[L-2]) {
                if (output[L-1] == 'b')
                    writeA = 1;
                else
                    writeB = 1;
            } else {
                if (A >= B)
                    writeA = 1;
                else
                    writeB = 1;
            }

            if (writeA) {
                A--;
                output += 'a';
            } else if(writeB) {
                B--;
                output += 'b';
            }
        }

        return output;
    }

