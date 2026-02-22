#include<iostream>
using namespace std;

//this node has 3 section data= node data, isTerminal= stores either node is terminal or not, 3rd section store ptr of an arr
class trieNode{
    public:
    char data;
    bool isTerminal;
    trieNode* children[26];

    trieNode(char ch){
        this->data= ch;
        this->isTerminal= false;
        for (int i=0; i<26; i++){
            children[i]= NULL;
        }
    }
};

class trie{
    public:
    //root has no data.
    trieNode* root;

    trie(){
        root= new trieNode('\0');
    }

    void insertHelper(trieNode* node, string &word, int index) {
        // Base case
        if (index == word.length()) {
            node->isTerminal = true;
            return;
        }
        
        //let's say word[index]= c, then c- 'a'= 2
        //for each node (children[2]= c) will be inserted if found the proper word.
        int childIndex = word[index] - 'a';

        // Ignore invalid characters which are not a-z char.
        if (childIndex < 0 || childIndex >= 26)
            return;

        trieNode* child;

        //char is present
        if (node->children[childIndex] != NULL) {
            child = node->children[childIndex];
        } else {
            //char not present.
            child = new trieNode(word[index]);
            node->children[childIndex] = child;
        }

        insertHelper(child, word, index + 1);
    }


    void insertWord(string word){
        // Convert to lowercase
        for (int i = 0; i < word.length(); i++) {
            word[i] = tolower(word[i]);
        }

        insertHelper(root, word, 0);
    }

    bool searchHelper(trieNode* node, string &word, int index){
        //base case 
        if(index== word.length()){
            return node->isTerminal;
        }

        int childIndex= word[index]- 'a';

        if(childIndex< 0 || childIndex> 25){
            return false;
        }

        trieNode* child= node->children[childIndex];

        if(child== NULL){
            return false;
        }

        return searchHelper(child, word, index+ 1);
    }

    bool searchWord(string word){
        for(int i=0; i<word.size(); i++){
            word[i]= tolower(word[i]);
        }
        return searchHelper(root, word, 0);
    }
};

int main(){
    // trieNode* check= new trieNode('a');
    // cout<<check->data<<" "<<check->isTerminal<<" "<<check->children<<endl;
    // check->children[0]= new trieNode('b');
    // cout<<check->children[0]->data;

    trie* t = new trie();
    t->insertWord("Roli");
    t->insertWord("Code");
    t->insertWord("Coding");

    cout<<t->searchWord("roli")<<endl;
    cout<<t->searchWord("cod")<<endl;
    return 0;
}