#include "InsertDeleteGetRandomInOrder1.h"
#include <bits/stdc++.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;

InsertDeleteGetRandomInOrder1::InsertDeleteGetRandomInOrder1() {
	// TODO Auto-generated constructor stub

}

InsertDeleteGetRandomInOrder1::~InsertDeleteGetRandomInOrder1() {
	// TODO Auto-generated destructor stub
}

class RandomizedSet {

    vector<int> elements;
    unordered_map<int, int> positions; // HashMap(), search in O(1) on average, <Value, Index>

public:
    /** Initialize your data structure here. */
    RandomizedSet() {

    }

    /** Inserts a value to the set. Returns true if the set did not already contain the specified element. */
    bool insert(int val) {
        if(positions.find(val) != positions.end()) // element arleady exist
            return false;

        elements.push_back(val);
        positions.insert({val, elements.size() - 1});
        return true;
    }

    /** Removes a value from the set. Returns true if the set contained the specified element. */
    bool remove(int val) {
        if(positions.find(val) == positions.end()) // element not exist
            return false;

        int index = positions.at(val); // get index of element using HashMap in O(1)
        elements[index] = elements[elements.size() - 1]; // set lastElement value to this index in Vector
        elements.pop_back(); // remove lastElement from  Vector
        positions[elements[index]] = index; // set the newIndex of Elment in HashMap
        positions.erase(val); // remove the value from HashMap in O(1)
        return true;

    }

    /** Get a random element from the set. */
    int getRandom() {
        return elements[rand() % elements.size()];
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */


// unordered_set<> vs unordered_map<key, value>
/* They are nearly identical. unordered_set only contains keys,
 *  and no values. There is no mapping from a key to a value,
 *  so no need for an operator[]. unordered_map maps a key to a value.*/
