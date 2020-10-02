#include "AddBinary.h"
#include <bits/stdc++.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;


AddBinary::AddBinary() {
	// TODO Auto-generated constructor stub

}

AddBinary::~AddBinary() {
	// TODO Auto-generated destructor stub
}

int carry;

string AddBinary::addBiinary(string a, string b) {

    int n = a.size();
    int m = b.size();

    int length = max(n, m);
    string result = "";
    carry = 0;

    while(n && m){
        result = to_string(add(a[n - 1] - '0', b[m - 1] - '0')) + result;
        n--;
        m--;
    }
    while(n){
        result = to_string(add(a[n - 1] - '0', 0)) + result;
        n--;
    }
    while(m){
        result = to_string(add(0, b[m - 1] - '0')) + result;
        m--;
    }
    if(carry == 1)
        result = to_string(carry) + result;
    return result;

}

int AddBinary::add(int x, int y){
    int sum = x ^ y ^ carry;  // XOR (work for x & y first then with carry)
    carry = (x + y + carry > 1) ? 1: 0;
    return sum;


