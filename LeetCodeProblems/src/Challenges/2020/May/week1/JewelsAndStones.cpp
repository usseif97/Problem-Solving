/*
 * JewelsAndStones.cpp
 *
 *  Created on: May 4, 2020
 *      Author: Usseif
 */

#include "JewelsAndStones.h"
#include <bits/stdc++.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;

JewelsAndStones::JewelsAndStones() {
	// TODO Auto-generated constructor stub

}

JewelsAndStones::~JewelsAndStones() {
	// TODO Auto-generated destructor stub
}


int JewelsAndStones::numJewelsInStones(string J, string S) {
       int count = 0;
       for(char jewel: J){
           for(char stone : S){
               if(jewel == stone){
                   count++;
               }
           }
       }
       return count;

   }

