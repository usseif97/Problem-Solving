#include "PermutationInString.h"
#include <bits/stdc++.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;

PermutationInString::PermutationInString() {
	// TODO Auto-generated constructor stub

}

PermutationInString::~PermutationInString() {
	// TODO Auto-generated destructor stub
}

bool PermutationInString::checkInclusion(string s1, string s2) {

	if(s1.size() > s2.size()){
		return false;
	}

	// if(letters[s.at(i) - 'a']++ >= 0)
	// means check letters[s.at(i) - 'a'] >= 0 then increase it
	int letters[26] = {0};
	for(char c : s1) {
		letters[c - 'a']++;
	}

	vector<int> result;
	int remaining = s1.size(), j = 0;

	//sliding window technique.
	for(int i = 0; i< s2.size(); i++){
		while(j < s2.size() && j - i < s1.size()){
			if(letters[s2.at(j) - 'a'] > 0){
				remaining--;
			}
			letters[s2.at(j) - 'a']--;
			j++;
		}
		if(remaining == 0){
			return true;
		}
		// Since letters[s.at(i) - 'a'] >= 0 then it's character from Anagrams and definitely
		// j pass through it before and remaining decrease by 1 So when i pass through it
		// must increase by 1 again
		if(letters[s2.at(i) - 'a'] >= 0){
			remaining++;
		}
		letters[s2.at(i) - 'a']++;
	}
	return false;
}


