#include "MaxAreaOfIsland.h"
#include <bits/stdc++.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;

MaxAreaOfIsland::MaxAreaOfIsland() {
	// TODO Auto-generated constructor stub

}

MaxAreaOfIsland::~MaxAreaOfIsland() {
	// TODO Auto-generated destructor stub
}

int MaxAreaOfIsland::closedIsland(vector<vector<int>>& grid) {
	int max = -1;

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
			if(grid[i][j] == 1 && visited[i][j] == 0){
				int tempArea = 0;
				dfs(grid, visited, i, j, tempArea);
				if(tempArea > max){
					max = tempArea;
				}
				/*if (dfs(grid, visited, i, j)){
					int tempArea = 0;
					dfsAndCount(grid, i, j, tempArea);
					if(tempArea > max){
						max = tempArea;
					}
				}*/
			}
		}
	}

	cout << "max: "<<max<< endl; // prints !!!Hello World!!!
	return max;
}

void MaxAreaOfIsland::dfs(vector<vector<int>>& grid, vector<vector<int>>& vis , int x, int y, int& currentArea){
	if(grid[x][y] == 1){
		grid[x][y] = 0;
		currentArea++;
		if(x >= 1)
			dfs(grid, vis, x - 1, y, currentArea);
		if(y >= 1)
			dfs(grid, vis, x, y - 1, currentArea);
		if(x < grid.size() - 1) // Size of Row
			dfs(grid, vis, x + 1, y, currentArea);
		if(y < grid[0].size() - 1) // Size of Column
			dfs(grid, vis, x, y + 1, currentArea);
	}
}

