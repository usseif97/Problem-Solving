#include "AllPathsFromSourceToTarget.h"
#include <bits/stdc++.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;

AllPathsFromSourceToTarget::AllPathsFromSourceToTarget() {
	// TODO Auto-generated constructor stub

}

AllPathsFromSourceToTarget::~AllPathsFromSourceToTarget() {
	// TODO Auto-generated destructor stub
}

vector<vector<int>> AllPathsFromSourceToTarget::allPathsSourceTarget(vector<vector<int>>& graph) {

    int target = graph.size() - 1;
    vector<vector<int>> paths;
    vector<int> currentPath;

    dfs(graph, 0, target, paths, currentPath);

    return paths;
}


void AllPathsFromSourceToTarget::dfs(vector<vector<int>>& graph, int currentNode, int target,
                        vector<vector<int>>& paths, vector<int>& currentPath){


    currentPath.push_back(currentNode);

    if(currentNode == target)
        paths.push_back(currentPath);
    else{
        for(int node : graph[currentNode])
            dfs(graph, node, target, paths, currentPath);
    }
    // popping back
    currentPath.pop_back();
}
