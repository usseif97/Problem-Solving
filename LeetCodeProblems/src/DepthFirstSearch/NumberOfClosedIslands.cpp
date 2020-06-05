#include "NumberOfClosedIslands.h"
#include <bits/stdc++.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;

NumberOfClosedIslands::NumberOfClosedIslands() {
	// TODO Auto-generated constructor stub

}

NumberOfClosedIslands::~NumberOfClosedIslands() {
	// TODO Auto-generated destructor stub
}

int NumberOfClosedIslands::closedIsland(vector<vector<int>>& grid) {
	int count = 0;

	vector<vector<int>> visited;
	for(int i = 0; i < grid.size(); i++) {
		vector<int> temp;
		for(int j = 0;j < grid[0].size();j++) {
			temp.push_back(0);
		}
		visited.push_back(temp);
	}

	for(int i = 0; i < grid.size(); i++) {
		for(int j = 0;j < grid[0].size();j++) {
			if(grid[i][j] == 0 && visited[i][j] == 0){
				if (dfs(grid, visited, i, j)){
					count++;
				}
			}
		}
	}
	return count;
}

bool NumberOfClosedIslands::dfs(vector<vector<int>>& mat, vector<vector<int>>& vis , int x, int y){

	if(vis[x][y] == 1 || mat[x][y] == 1)
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

