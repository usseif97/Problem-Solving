#include "IntervalListIntersections.h"
#include <bits/stdc++.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;

IntervalListIntersections::IntervalListIntersections() {
	// TODO Auto-generated constructor stub

}

IntervalListIntersections::~IntervalListIntersections() {
	// TODO Auto-generated destructor stub
}


vector<vector<int>> IntervalListIntersections::intervalIntersection(vector<vector<int>>& A,
		vector<vector<int>>& B) {

       int i = 0, j = 0;
       vector<vector<int>> intersection;

       while(i < A.size() && j < B.size()){
           vector<int> temp;
           // EndA >= StartB && StartA <= EndB
    	   if(A[i][1] >= B[j][0] && A[i][0] <= B[j][1]){
    		   temp.push_back(max(A[i][0], B[j][0]));
    		   temp.push_back(min(A[i][1], B[j][1]));
    		   intersection.push_back(temp);
    	   }
    	   if(A[i][1] < B[j][1]){ // Still can there's overlapping
    		   i++;
    	   } else {
    		   j++;
    	   }
       }
       return intersection;
 }















/*vector<vector<int>> IntervalListIntersections::intervalIntersection(vector<vector<int>>& A,
		vector<vector<int>>& B) {

       // Naive Solution if VEctors not Sorted
	   //O(n^2)
       int start = 0;
       int count = 0;
       vector<vector<int>> intersection;

       for(vector<int> vec1 : A){
           int maxend = -1;
           for(vector<int> vec2 : B){
               vector<int> temp;
               if(vec1[1] >= vec2[0] && vec1[0] <= vec2[1]){
                   temp.push_back(max(vec1[0], vec2[0]));
                   temp.push_back(min(vec1[1], vec2[1]));
                   intersection.push_back(temp);
               }
           }
       }
       return intersection;
 }*/

