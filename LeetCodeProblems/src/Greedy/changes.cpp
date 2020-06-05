#include "changes.h"
#include <bits/stdc++.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;

changes::changes() {
	// TODO Auto-generated constructor stub

}

changes::~changes() {
	// TODO Auto-generated destructor stub
}

bool changes::lemonadeChange(vector<int>& bills) {
       int fiveCount = 0;
       int tenCount = 0;
       int twentyCount  = 0;
       for(int b : bills){
           if(b == 5){
               fiveCount++;
           } else if(b == 10){
               if(fiveCount == 0){
                   return false;
               } else{
                   fiveCount--;
                   tenCount++;
               }
           } else if(b == 20){
               if(fiveCount > 0 && tenCount > 0){
                   fiveCount--;
                   tenCount--;
                   twentyCount++;
               } else if(fiveCount >= 3){
                   fiveCount -= 3;
                   twentyCount++;
               } else {
                   return false;
               }
           }

       }
       return true;

   }

