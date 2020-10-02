#include "RottingOranges.h"
#include <bits/stdc++.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;

RottingOranges::RottingOranges() {
	// TODO Auto-generated constructor stub

}

RottingOranges::~RottingOranges() {
	// TODO Auto-generated destructor stub
}

int orangesRotting(vector<vector<int>>& grid) {

    int n = grid.size();
    int m = grid[0].size();

    int fresh = 0;
    int minutes = 0;
    queue<pair<int,int>> q;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(grid[i][j] == 1)
                fresh++;
            else if(grid[i][j] == 2)
                q.push(make_pair(i, j));
        }
    }

    while(q.size()){
        int size = q.size();
        for(int i = 0; i < size; i++){
            int x = q.front().first;
            int y = q.front().second;
            q.pop();

            if(x >= 1 && grid[x - 1][y] == 1){  // LEFT
                grid[x - 1][y] = 2;  // Rotten (Visited)
                q.push(make_pair(x - 1, y));
                fresh--;
            }
            if(x < n - 1 && grid[x + 1][y] == 1){ // RIGHT
                grid[x + 1][y] = 2;  // Rotten (Visited)
                q.push(make_pair(x + 1, y));
                fresh--;
            }
            if(y >= 1 && grid[x][y - 1] == 1){  // UP
                grid[x][y - 1] = 2;  // Rotten (Visited)
                q.push(make_pair(x, y - 1));
                fresh--;
            }
            if(y < m - 1 && grid[x][y + 1] == 1){  // DOWN
                grid[x][y + 1] = 2;  // Rotten (Visited)
                q.push(make_pair(x, y + 1));
                fresh--;
            }
        }
        minutes++;
    }

    if(fresh != 0)
        return -1;

    if(minutes == 0)
        return 0;

    return minutes - 1;
}

