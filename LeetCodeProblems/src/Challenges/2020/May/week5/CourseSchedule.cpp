/*
 * CourseSchedule.cpp
 *
 *  Created on: May 29, 2020
 *      Author: Usseif
 */

#include "CourseSchedule.h"

CourseSchedule::CourseSchedule() {
	// TODO Auto-generated constructor stub

}

CourseSchedule::~CourseSchedule() {
	// TODO Auto-generated destructor stub
}

// JAVA Code

/*
ArrayList<Integer>[] graph;

public boolean canFinish(int numCourses, int[][] prerequisites) {
	graph = new ArrayList[numCourses]; // Adjacent Matrix

	for (int i = 0; i < numCourses; ++i)
		graph[i] = new ArrayList();

	for (int[] edge: prerequisites)
		graph[edge[0]].add(edge[1]);

	int[] visited = new int[numCourses]; // Visited Array intialized with 0
	//System.out.println(visited[0]);

	for(int i = 0; i < numCourses; i++){
		if(visited[i] == 0 && !dfs(graph, visited, i))  // first check if not visited then check dfs
			return false;
	}
	return true;
}

public boolean dfs(ArrayList<Integer>[] graph, int[] visited, int node) {
	// check if there's a cycle
	if (visited[node] == 1)
		return false;
	if (visited[node] == 2)
		return true;
	visited[node] = 1;

	for (int nei: graph[node]){
		if (!dfs(graph, visited, nei))
			return false;
	}

	//All have been visited for this Node
	visited[node] = 2;
	return true;
}
*/
