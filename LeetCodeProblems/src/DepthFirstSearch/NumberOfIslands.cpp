#include "NumberOfIslands.h"
#include <bits/stdc++.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;

NumberOfIslands::NumberOfIslands() {
	// TODO Auto-generated constructor stub

}

NumberOfIslands::~NumberOfIslands() {
	// TODO Auto-generated destructor stub
}

int NumberOfIslands::numIslands(vector<vector<char>>& grid) {
    int count = 0;
	cout << "NumberOfIslands" << endl;

    //int n = grid.size();
    //int m = grid[0].size();
    // Intailze 2D empty Vector
    //vector<vector<int>>visited(n,vector<int>(m));

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
            if(grid[i][j] == '1' && visited[i][j] == 0){
            	cout << "i: "<<i<<" j: "<<j<< endl;
                dfs(grid, visited, i, j);
                count++;
            }
        }
    }
    cout << "count: "<<count<< endl;
    return count;
}

void NumberOfIslands::dfs(vector<vector<char>>& mat, vector<vector<int>>& vis , int x, int y){
    if(mat[x][y] == '1' && vis[x][y] == 0){
    	cout << "x: "<<x<<" y: "<<y<< endl;
        vis[x][y] = 1;
        if(x >= 1)
            dfs(mat, vis, x - 1, y);
        if(y >= 1)
            dfs(mat, vis, x, y - 1);
        if(x < mat.size() - 1)
            dfs(mat, vis, x + 1, y);
        if(y < mat[0].size() - 1)
            dfs(mat, vis, x, y + 1);
    }
}

