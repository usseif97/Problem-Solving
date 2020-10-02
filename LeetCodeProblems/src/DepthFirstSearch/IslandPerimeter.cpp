#include "IslandPerimeter.h"
#include <bits/stdc++.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;

IslandPerimeter::IslandPerimeter() {
	// TODO Auto-generated constructor stub

}

IslandPerimeter::~IslandPerimeter() {
	// TODO Auto-generated destructor stub
}

int IslandPerimeter::islandPerimeter(vector<vector<int>>& grid) {

    int n = grid.size();
    int m = grid[0].size();
    int perimeter = 0;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(grid[i][j] == 1)
                perimeter += cellPerimeter(i, j, grid, n, m);
        }
    }

    return perimeter;

}


int IslandPerimeter::cellPerimeter(int i, int j, vector<vector<int>>& grid, int n, int m){
    int peri = 0;

    if(i - 1 < 0)
        peri++;
    else if(grid[i - 1][j] == 0)
        peri++;

    if(i + 1 >= n)
        peri++;
    else if(grid[i + 1][j] == 0)
        peri++;

    if(j - 1 < 0)
        peri++;
    else if(grid[i][j - 1] == 0)
        peri++;

    if(j + 1 >= m)
        peri++;
    else if(grid[i][j + 1] == 0)
        peri++;

    return peri;
}

