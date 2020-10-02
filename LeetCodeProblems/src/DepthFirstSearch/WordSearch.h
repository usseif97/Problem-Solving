/*
 * WordSearch.h
 *
 *  Created on: Jul 23, 2020
 *      Author: Usseif
 */

#ifndef DEPTHFIRSTSEARCH_WORDSEARCH_H_
#define DEPTHFIRSTSEARCH_WORDSEARCH_H_
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <bits/stdc++.h>
using namespace std;

class WordSearch {
public:
	WordSearch();
	virtual ~WordSearch();
	bool exist(vector<vector<char>>& , string );
	bool dfs(vector<vector<char>>& , vector<vector<int>>& , int , int , int , string );
};

#endif /* DEPTHFIRSTSEARCH_WORDSEARCH_H_ */
