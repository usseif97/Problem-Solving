#include "WordPattern.h"
#include <bits/stdc++.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;

WordPattern::WordPattern() {
	// TODO Auto-generated constructor stub

}

WordPattern::~WordPattern() {
	// TODO Auto-generated destructor stub
}

vector<string> splitBySpace(string str) {

    string word = "";
    vector<string> words;
    for (auto x : str) {
        if (x == ' ') {
            //cout << word << endl;
            words.push_back(word);
            word = "";
        } else
            word = word + x;
    }
    words.push_back(word);
    //cout << word << endl;
    return words;
}


bool wordPattern(string pattern, string str) {

    unordered_map<char, string> unOrderedMap1;
    unordered_map<string, int> unOrderedMap2;

    vector<string> words = splitBySpace(str);

    if(words.size() != pattern.size())
        return false;

    for(int i = 0; i < pattern.size(); i++){
        char key = pattern[i];
        string value = words[i];
        if (unOrderedMap1.find(key) == unOrderedMap1.end() &&
              unOrderedMap2.find(value) == unOrderedMap2.end()) {
            unOrderedMap1.insert({key, value});
            unOrderedMap2.insert({value, 1});
        }
        else
            continue;
    }

    for(int i = 0; i < pattern.size(); i++){
        if(unOrderedMap1.find(pattern[i]) == unOrderedMap1.end())
            return false;
        string word = unOrderedMap1.at(pattern[i]);
        if(word != words[i])
            return false;
    }
    return true;
}
