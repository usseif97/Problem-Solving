/*
 * IteratorForCombination.cpp
 *
 *  Created on: Aug 13, 2020
 *      Author: Usseif
 */

#include "IteratorForCombination.h"

IteratorForCombination::IteratorForCombination() {
	// TODO Auto-generated constructor stub

}

IteratorForCombination::~IteratorForCombination() {
	// TODO Auto-generated destructor stub
}



/* Function to get no of set bits in binary
representation of positive integer n */
/*bool countSetBits(int n, int lenght) {
    int count = 0;
    while (n) {
        count += n & 1;
        n >>= 1;
    }
    return n == lenght;
}


string findSubSet(int number, string characters){
    // Bitwise
    string str = "";
    int i = 0;

    while(number){
        // take each bit on the number(0,1) individually
        // if equal 1 push on vector else if equal 0 continue
        if(number & 1){
            str += characters[i];
        }
        i++;
        number >>= 1;
    }
    return str;
}

vector<string> generate(string characters, int n){

    vector<string> combinations;
    int numberOfSubsets = 1 << n;  // 2^n

    for(int i = 0; i < numberOfSubsets; i++){
        if(countSetBits(i, n)){
            string subset = findSubSet(i, characters);
            combinations.push_back(subset);
        }
    }
    for(int i = 0; i < combinations.size(); i++)
            cout<<"HERE: "<<combinations[i]<<endl;
    return combinations;
}


class CombinationIterator {
public:

    vector<string> combinations;
    int pointer;

    CombinationIterator(string characters, int combinationLength) {
        this->combinations = generate(characters, combinationLength);
        this->pointer = 0;
    }

    string next() {
        return this->combinations[this->pointer++];
    }

    bool hasNext() {
        return this->pointer < this->combinations.size();
    }

};*/

/**
 * Your CombinationIterator object will be instantiated and called as such:
 * CombinationIterator* obj = new CombinationIterator(characters, combinationLength);
 * string param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */
