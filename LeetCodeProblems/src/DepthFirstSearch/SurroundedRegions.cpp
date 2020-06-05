#include "SurroundedRegions.h"
#include <bits/stdc++.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;

SurroundedRegions::SurroundedRegions() {
	// TODO Auto-generated constructor stub

}

SurroundedRegions::~SurroundedRegions() {
	// TODO Auto-generated destructor stub
}

void SurroundedRegions::solve(vector<vector<char>>& board) {


	vector<vector<int>> visited;
	for(int i = 0; i < board.size(); i++) {
		vector<int> temp;
		for(int j = 0;j < board[0].size();j++) {
			temp.push_back(0);
		}
		visited.push_back(temp);
	}

	for(int i = 0; i < board.size(); i++) {
		for(int j = 0;j < board[0].size();j++) {
			if(board[i][j] == 'O' && visited[i][j] == 0){
				if (dfs(board, visited, i, j)){
					dfsAndFlipping(board, i, j);
				}
			}
		}
	}

	for(int i = 0; i < board.size(); i++) {
		for(int j = 0;j < board[0].size();j++) {
			cout << "board: "<<board[i][j]<< endl; // prints !!!Hello World!!!
		}
	}

}

bool SurroundedRegions::dfs(vector<vector<char>>& mat, vector<vector<int>>& vis , int x, int y){

	if(vis[x][y] == 1 || mat[x][y] == 'X')
		return true;
	if(x == 0 || y == 0 || x == mat.size() - 1 || y == mat[0].size() - 1)
		return false;

	vis[x][y] = 1;
	bool left = dfs(mat, vis, x - 1, y);
	bool bottom = dfs(mat, vis, x, y - 1);
	bool right = dfs(mat, vis, x + 1, y);
	bool up = dfs(mat, vis, x, y + 1);
	return left && bottom && right && up;
}

void SurroundedRegions::dfsAndFlipping(vector<vector<char>>& mat, int x, int y){

	if(mat[x][y] == 'O'){
		mat[x][y] = 'X';
		if(x >= 1)
			dfsAndFlipping(mat, x - 1, y);
		if(y >= 1)
			dfsAndFlipping(mat, x, y - 1);
		if(x < mat.size() - 1) // Size of Row
			dfsAndFlipping(mat, x + 1, y);
		if(y < mat[0].size() - 1) // Size of Column
			dfsAndFlipping(mat, x, y + 1);
	}
}

