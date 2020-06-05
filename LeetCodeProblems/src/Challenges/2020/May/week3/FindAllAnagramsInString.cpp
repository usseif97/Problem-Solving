#include "FindAllAnagramsInString.h"
#include <bits/stdc++.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;

FindAllAnagramsInString::FindAllAnagramsInString() {
	// TODO Auto-generated constructor stub

}

FindAllAnagramsInString::~FindAllAnagramsInString() {
	// TODO Auto-generated destructor stub
}

vector<int> FindAllAnagramsInString::findAnagrams(string s, string p) {

	// if(letters[s.at(i) - 'a']++ >= 0)
	// means check letters[s.at(i) - 'a'] >= 0 then increase it

	 int letters[26] = {0};
	 for(char c : p) {
		 letters[c - 'a']++;
	 }

	 vector<int> result;
	 int remaining = p.size(), j = 0;

	 //sliding window technique.
	 for(int i = 0; i< s.size(); i++){
		 while(j < s.size() && j - i < p.size()){
	       if(letters[s.at(j) - 'a'] > 0){
	    	   remaining--;
	       }
	       letters[s.at(j) - 'a']--;
	       j++;
		 }
		 if(remaining == 0){
			 result.push_back(i);
		 }
		 // Since letters[s.at(i) - 'a'] >= 0 then it's character from Anagrams and definitely
		 // j pass through it before and remaining decrease by 1 So when i pass through it
		 // must increase by 1 again
		 if(letters[s.at(i) - 'a'] >= 0){
			 remaining++;
		 }
		 letters[s.at(i) - 'a']++;
	 }
	 return result;
}
