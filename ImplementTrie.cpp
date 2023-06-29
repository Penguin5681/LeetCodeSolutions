// 208. Implement Trie (Prefix Tree)

#include <bits/stdc++.h>

using namespace std;

struct node {
    node* links[26];
    bool flag = false;

    bool hasKey(char ch) {
        return links[ch - 'a'] != NULL;
    }

    void put(char ch, node* Node) {
        links[ch - 'a'] = Node;
    }

    node* get(char ch) {
        return links[ch - 'a'];
    }

    void setEnd() {
        flag = true;
    }

    bool isEnd() {
        return flag;
    }
};

class Trie {
private: node* root;
public:
    Trie() {
        root = new node();
    }
    
    void insert(string word) {
        node* Node = root;
        for (int i = 0; i < word.length(); ++i) {
            if (!Node->hasKey(word[i]))
                Node->put(word[i], new node());
            Node = Node->get(word[i]);
        }
            Node->setEnd();
    }
    
    bool search(string word) {
        node *Node = root;
        for (int i = 0; i < word.length(); ++i) {
            if (!Node->hasKey(word[i]))
                return false;
            Node = Node->get(word[i]);
        }
        return Node->isEnd();
    }
    
    bool startsWith(string prefix) {
        node* Node = root;
        for (int i = 0; i < prefix.length(); ++i) {
            if (!Node->hasKey(prefix[i]))
                return false;
            Node = Node->get(prefix[i]);
        }
        return true;
    }
};


int main(void) {

}