#include "assignCookies.h"
#include <bits/stdc++.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;

assignCookies::assignCookies() {
	// TODO Auto-generated constructor stub

}

assignCookies::~assignCookies() {
	// TODO Auto-generated destructor stub
}

int assignCookies::findContentChildren(vector<int>& g, vector<int>& s) {
       if (g.size() == 0 || s.size() == 0){
           return 0;
       }
       sort(g.begin(), g.end());
       sort(s.begin(), s.end());

       int i = g.size() - 1;
       int j = s.size() - 1;
       int count = 0;

       while(i >= 0 && j >= 0){
           if(s[j] >= g[i]){
               j--;
               i--;
               count++;
           } else {
               i--;
           }
       }
       return count;

   }

