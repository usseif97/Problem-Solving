/*
 * PossibleBipartition.cpp
 *
 *  Created on: May 27, 2020
 *      Author: Usseif
 */

#include "PossibleBipartition.h"

PossibleBipartition::PossibleBipartition() {
	// TODO Auto-generated constructor stub

}

PossibleBipartition::~PossibleBipartition() {
	// TODO Auto-generated destructor stub
}


// JAVA Code

/*
ArrayList<Integer>[] graph;
Map<Integer, Integer> color;

public boolean possibleBipartition(int N, int[][] dislikes) {
	graph = new ArrayList[N+1];  // Adjacent Matrix
	for (int i = 1; i <= N; ++i)
		graph[i] = new ArrayList();

	for (int[] edge: dislikes) {
		graph[edge[0]].add(edge[1]);
		graph[edge[1]].add(edge[0]);
	}

	color = new HashMap();
	for (int node = 1; node <= N; ++node){
		if (!color.containsKey(node) && !dfs(node, 0))
			return false;
	}
	return true;
}

public boolean dfs(int node, int c) {
	if (color.containsKey(node))
		return color.get(node) == c;
	color.put(node, c);

	for (int nei: graph[node]){
		if (!dfs(nei, c ^ 1))
			return false;
	}

	//All have been visited for this Node
	return true;
}*/

