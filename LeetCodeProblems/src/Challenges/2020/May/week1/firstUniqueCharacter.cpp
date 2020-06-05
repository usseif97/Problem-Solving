#include "firstUniqueCharacter.h"
#include <bits/stdc++.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;

firstUniqueCharacter::firstUniqueCharacter() {
	// TODO Auto-generated constructor stub

}

firstUniqueCharacter::~firstUniqueCharacter() {
	// TODO Auto-generated destructor stub
}


int firstUniqueCharacter::firstUniqChar(string s) {

	int result = -1;

	int taken[s.length()];  // declare the array and then...
    for (int i = 0; i < s.length(); i++){ // ...initialize it
    	taken[i] = 0;
    }

    if(s.length() == 1){
    	result = 0;
    } else {
    	for(int i = 0; i < s.length(); i++){
    		if(taken[i] == 1){
    			continue;
    		}
    		int flag = 0;
            for(int j = i+1; j < s.length(); j++){
            	if(s[i] == s[j]){
            		flag = 1;
            		taken[j] = 1;
                 }
             }
             if (flag == 0){
            	 result = i;
            	 break;
             }
    	}
    }
    return result;
   }
