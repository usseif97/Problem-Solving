#include "FloodFill.h"
#include <bits/stdc++.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;

FloodFill::FloodFill() {
	// TODO Auto-generated constructor stub

}

FloodFill::~FloodFill() {
	// TODO Auto-generated destructor stub
}

vector<vector<int>> FloodFill::floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
	int tempColor = image[sr][sc];
	if(tempColor != newColor){
		dfs(image, sr, sc, tempColor, newColor);
	}
	return image;
}

void FloodFill::dfs(vector<vector<int>>& grid, int x, int y, int color, int newColor){
	if(grid[x][y] == color){
		grid[x][y] = newColor;
		if(x >= 1)
			dfs(grid, x - 1, y, color, newColor);
		if(y >= 1)
			dfs(grid, x, y - 1, color, newColor);
		if(x < grid.size() - 1) // Size of Row
			dfs(grid, x + 1, y, color, newColor);
		if(y < grid[0].size() - 1) // Size of Column
			dfs(grid, x, y + 1, color, newColor);
	}
}

