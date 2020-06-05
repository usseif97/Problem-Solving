#include "RansomNote.h"
#include <bits/stdc++.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;

RansomNote::RansomNote() {
	// TODO Auto-generated constructor stub

}

RansomNote::~RansomNote() {
	// TODO Auto-generated destructor stub
}

bool RansomNote::canConstruct(string ransomNote, string magazine) {
       int count = 0;
       int taken[magazine.size()];
       for (int i = 0; i < magazine.size(); i++) {// ...initialize it
           taken[i] = 0;
       }

       for(char ransom: ransomNote){
          for(int i = 0; i < magazine.size(); i++){
              if(ransom == magazine[i] && taken[i] == 0){
                  taken[i] = 1;
                  count++;
                  break;
              } else {
                  continue;
              }
          }
      }
      if(count == ransomNote.size()){
          return true;
      } else {
          return false;
      }
   }

