#include "SortCharactersByFrequency.h"
#include <bits/stdc++.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;

SortCharactersByFrequency::SortCharactersByFrequency() {
	// TODO Auto-generated constructor stub

}

SortCharactersByFrequency::~SortCharactersByFrequency() {
	// TODO Auto-generated destructor stub
}

string SortCharactersByFrequency::frequencySort(string s) {

    vector< pair <int,int> > vect;

    sort(s.begin(), s.end());

    int lettersFrequency[128] = {0};
    for(char c : s)
        lettersFrequency[c]++;


    for(char c : s)
        vect.push_back( make_pair(lettersFrequency[c], c) );


    sort(vect.begin(), vect.end());
    reverse(vect.begin(), vect.end());

    string result;
    for(pair <int,int> p : vect)
        result += p.second;


    return result;

}


































/*string frequencySort(string s) {
    int lettersFrequency[128] = {0};
    for(char c : s) {
        lettersFrequency[c]++;
    }
    sort(s.begin(), s.end());

    for (int i = 1 ;i < s.length(); i++)  {
        char temp = s[i];

        // Insert s[j] at its correct position
        int j = i - 1;
        while (j >= 0 && lettersFrequency[temp] > lettersFrequency[s[j]] ) {
            s[j+1] = s[j];
            j--;
        }
        s[j+1] = temp;
    }
    return s;
}*/
