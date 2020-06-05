#include "RemoveKdigits.h"
#include <bits/stdc++.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;

RemoveKdigits::RemoveKdigits() {
	// TODO Auto-generated constructor stub

}

RemoveKdigits::~RemoveKdigits() {
	// TODO Auto-generated destructor stub
}

string RemoveKdigits::removeKdiigits(string num, int k) {

	int n = num.length();
	cout <<"n: "<<n<< endl;
	if(k == n){
		return "0";
	}

	vector<char> stack;
	for(int i = 0; i < n; i++){
		cout <<"i: "<<i<< endl;
		int stackSize = stack.size();
		while(k > 0 && !stack.empty() && stack[stackSize - 1] > num[i] ){
			cout <<"Pop From Stack: "<<stack[stackSize - 1]<< endl;
			stack.pop_back();
			stackSize = stack.size();
			k--;
		}
		cout <<"Push In Stack: "<<num[i]<< endl;
		stack.push_back(num[i]);
		cout <<" "<< endl;
	}

	for(int i = 0; i < stack.size(); i++){
		cout << "stack: "<<stack[i]<< endl;
	}
	cout <<"k: "<<k<< endl;


	while(k > 0){
		stack.pop_back();
		k--;
	}
	std::reverse(stack.begin(),stack.end());    // 9 8 7 6 5 4 3 2 1

	string smallest = "";
	int stackSize = stack.size();
	while(!stack.empty()){
		smallest += stack[stackSize - 1];
		stack.pop_back();
		stackSize = stack.size();
	}

	while(smallest.size() > 1 && smallest[0] == '0'){
		smallest = smallest.substr(1, smallest.size() - 1);
	}

	cout <<"smallest: "<<smallest<< endl;
	return smallest;

}

