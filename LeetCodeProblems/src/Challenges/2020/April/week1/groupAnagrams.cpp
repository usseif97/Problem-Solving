#include "groupAnagrams.h"
#include <bits/stdc++.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;

groupAnagrams::groupAnagrams() {
	// TODO Auto-generated constructor stub

}

groupAnagrams::~groupAnagrams() {
	// TODO Auto-generated destructor stub
}

int groupAnagrams::containsKey(string str){
	for (int k = 0; k < anagrams.size(); k++){
		if (str == anagrams[k].first){
			return 1;
		}
	}
    return 0;
}

vector<vector<string>> groupAnagrams::groupanagrams(vector<string>& strs) {

	for(string s : strs){

		string sortedStr = s;
        sort(sortedStr.begin(), sortedStr.end());

        if(! containsKey(sortedStr)){
        	vector<string> vect;
            vect.push_back(s);
        	anagrams.push_back(make_pair(sortedStr, vect));
         } else {
        	 int idx;
             for (int k = 0; k < anagrams.size(); k++){
            	 if (sortedStr == anagrams[k].first){
			         idx = k;
		         }
	         }
             anagrams[idx].second.push_back(s);
         }

        }
	vector<vector<string>> result;
    for (int i = 0; i < anagrams.size(); i++){
    	pair<string, vector<string>> x = anagrams[i];
        vector<string> group;
        vector<string> temp = x.second;
        for(int j = 0; j < temp.size(); j++){
        	group.push_back(temp[j]);
        }
        result.push_back(group);
     }
     return result;
}
