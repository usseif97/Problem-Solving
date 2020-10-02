#include "LongestPalindrome.h"
#include <bits/stdc++.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;


LongestPalindrome::LongestPalindrome() {
	// TODO Auto-generated constructor stub

}

LongestPalindrome::~LongestPalindrome() {
	// TODO Auto-generated destructor stub
}

int longestPalindrome(string s) {

    vector<int> counter(58);

    for (char c : s)
        counter[c - 'A']++;

    int ans = 0;
    for (int v : counter) {
        ans += v / 2 * 2;
        if (ans % 2 == 0 && v % 2 == 1)
            ans++;
    }
    return ans;
}
