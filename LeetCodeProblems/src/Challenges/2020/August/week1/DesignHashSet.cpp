#include "DesignHashSet.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <bits/stdc++.h>
using namespace std;

DesignHashSet::DesignHashSet() {
	// TODO Auto-generated constructor stub

}

DesignHashSet::~DesignHashSet() {
	// TODO Auto-generated destructor stub
}

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */

/** Initialize your data structure here. */
unordered_set <int> set;  // HashSet is UnOrderedSet in C++

// Constructor
/*MyHashSet() {

}*/

void add(int key) {
    set.insert(key);
}

void remove(int key) {
    set.erase(key);
}

/** Returns true if this set contains the specified element */
bool contains(int key) {
    if (set.find(key) == set.end()) // Not Found
        return false;
    else // Found
        return true;
}

