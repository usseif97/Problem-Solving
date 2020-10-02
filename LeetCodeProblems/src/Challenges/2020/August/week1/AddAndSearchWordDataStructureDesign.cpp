#include "AddAndSearchWordDataStructureDesign.h"
#include <bits/stdc++.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;

AddAndSearchWord_DataStructureDesign::AddAndSearchWord_DataStructureDesign() {
	// TODO Auto-generated constructor stub

}

AddAndSearchWord_DataStructureDesign::~AddAndSearchWord_DataStructureDesign() {
	// TODO Auto-generated destructor stub
}

// JAVA Code
/* Trie with DFS */


/*class TrieNode{

    public TrieNode[] nodelinks;
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

}*/


//class WordDictionary {

    //private TrieNode root;

    /** Initialize your data structure here. */
    /*public WordDictionary() {
        root = new TrieNode();
    }*/

    /** Adds a word into the data structure. */
    /*public void addWord(String word) {
        TrieNode node = root;

        for(int i = 0; i < word.length(); i++){
            char currentChar = word.charAt(i);
            if(!node.containsKey(currentChar))
                node.put(currentChar, new TrieNode());

            node = node.get(currentChar);
        }
        node.isEnd = true;
    }*/

    /** Returns if the word is in the data structure. A word could contain the dot character '.' to represent any one letter. */
    /*public boolean search(String word) {
        TrieNode node = root;
        return dfs(word, node, 0);
    }*/


    /*public boolean dfs(String word, TrieNode node, int index){

        if(node == null)
            return false;

        if(index == word.length())
            return node.isEnd;


        char current = word.charAt(index);
        if(current == '.'){
            for(int c = 0; c < 26; c++)
                if(dfs(word, node.nodelinks[c], index+1))
                    return true;

        } else{
            if(node.containsKey(current)){
                return dfs(word, node.get(current), index + 1);
            }
        }
        return false;
    }*/


//}

/**
 * Your WordDictionary object will be instantiated and called as such:
 * WordDictionary obj = new WordDictionary();
 * obj.addWord(word);
 * boolean param_2 = obj.search(word);
 */
