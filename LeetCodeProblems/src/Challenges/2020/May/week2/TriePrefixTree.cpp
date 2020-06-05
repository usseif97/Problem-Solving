#include "TriePrefixTree.h"
#include <bits/stdc++.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;

Trie_PrefixTree::Trie_PrefixTree() {
	// TODO Auto-generated constructor stub

}

Trie_PrefixTree::~Trie_PrefixTree() {
	// TODO Auto-generated destructor stub
}

/*class TrieNode{

    private TrieNode[] nodelinks;
    public boolean isEnd;

    // Constructor
    public TrieNode(){
        nodelinks = new TrieNode[26];
    }

    public boolean containsKey(char ch){
        return nodelinks[ch - 'a'] != null;
    }

    public TrieNode get(char ch){
        return nodelinks[ch - 'a'];
    }

    public void put(char ch, TrieNode node){
         nodelinks[ch - 'a'] = node;
    }

}


class Trie {

    // Initialize your data structure here.
    private TrieNode root;

    public Trie() {
        root = new TrieNode();
    }

    // Inserts a word into the trie.
    public void insert(String word) {
        TrieNode node = root;

        for(int i = 0; i < word.length(); i++){
            char currentChar = word.charAt(i);
            if(!node.containsKey(currentChar)){
                node.put(currentChar, new TrieNode());
            }
            node = node.get(currentChar);
        }
        node.isEnd = true;
    }

    // Returns if the word is in the trie.
    public boolean search(String word) {
        TrieNode node = root;

        for(int i = 0; i < word.length(); i++){
            char currentChar = word.charAt(i);
            if(node.containsKey(currentChar)){
                node = node.get(currentChar);
            } else {
                return false;
            }
        }
        if (node.isEnd){
            return true;
        } else {
            return false;
        }
    }

    // Returns if there is any word in the trie that starts with the given prefix.
    public boolean startsWith(String prefix) {
        TrieNode node = root;

        for(int i = 0; i < prefix.length(); i++){
            char currentChar = prefix.charAt(i);
            if(node.containsKey(currentChar)){
                node = node.get(currentChar);
            } else {
                return false;
            }
        }
        return true;
    }
}*/

/**
 * Your Trie object will be instantiated and called as such:
 * Trie obj = new Trie();
 * obj.insert(word);
 * boolean param_2 = obj.search(word);
 * boolean param_3 = obj.startsWith(prefix);
 */
