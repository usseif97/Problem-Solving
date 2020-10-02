#include "WordSearch.h"
#include <bits/stdc++.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;

WordSearch::WordSearch() {
	// TODO Auto-generated constructor stub

}

WordSearch::~WordSearch() {
	// TODO Auto-generated destructor stub
}

bool WordSearch::exist(vector<vector<char>>& board, string word) {

    int n = board.size();
    int m = board[0].size();

    // Intailze 2D empty Vector
    vector<vector<int>> visited(n,vector<int>(m));

    // Iteration
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if(board[i][j] == word[0] && visited[i][j] == 0 && dfs(board, visited, i, j, 0, word)){
                return true;
            }
        }
    }
    return false;
}


bool WordSearch::dfs(vector<vector<char>>& mat, vector<vector<int>>& vis , int x, int y, int index, string word){

    if(vis[x][y])
        return false;

    // Assume it's Right
    vis[x][y] = 1;
    index++;

    if(index == word.size())
        return true;

    if(x >= 1 && mat[x - 1][y] == word[index] && dfs(mat, vis, x - 1, y, index, word))
        return true;
    if(y >= 1 && mat[x][y - 1] == word[index] && dfs(mat, vis, x, y - 1, index, word))
        return true;
    if(x < mat.size() - 1 && mat[x + 1][y] == word[index] && dfs(mat, vis, x + 1, y, index, word))
        return true;
    if(y < mat[0].size() - 1 && mat[x][y + 1] == word[index] && dfs(mat, vis, x, y + 1, index, word))
        return true;

    // if it not the word remove visited & return false
    vis[x][y] = 0;
    return false;
}

