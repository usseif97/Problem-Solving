#include "CompareVersionNumbers.h"
#include <bits/stdc++.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;

CompareVersionNumbers::CompareVersionNumbers() {
	// TODO Auto-generated constructor stub

}

CompareVersionNumbers::~CompareVersionNumbers() {
	// TODO Auto-generated destructor stub
}

vector<int> splitByDot(string str) {

    string word = "";
    vector<int> words;
    for (auto x : str) {
        if (x == '.') {
            words.push_back(stoi(word));
            word = "";
        } else
            word = word + x;
    }
    words.push_back(stoi(word));
    return words;
}

string removeLeadingZeros(string str) {
    // Count trailing zeros
    int i = 0;
    while (str[i] == '0')
       i++;

    // The erase function removes i characters
    // from given index (0 here)
    str.erase(0, i);

    return str;
}

int compareVersion(string version1, string version2) {

    vector<int> ver1 = splitByDot(version1);
    vector<int> ver2 = splitByDot(version2);

    ver1.size() > ver2.size() ? ver2.resize(ver1.size()) : ver1.resize(ver2.size());

    for(int i = 0; i < ver1.size(); i++){
        cout<<ver1[i]<<endl;
        cout<<ver2[i]<<endl;
    }

    for(int i = 0; i < ver1.size(); i++){
        if(ver1[i] < ver2[i])
            return -1;
        else if(ver1[i] > ver2[i])
            return 1;
    }
    return 0;
}
