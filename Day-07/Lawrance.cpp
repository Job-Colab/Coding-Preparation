class Solution {
public:
    static const int ALPHABET = 26;

    struct TrieNode {
        TrieNode *children[ALPHABET];
        char val;
        bool leaf;
        size_t size;
    };
    
    TrieNode* getNode() {
    TrieNode *parent = new TrieNode;
    parent->leaf = false;
    parent->size = 0;
    for(int i = 0; i < ALPHABET; i++) {
        parent->children[i] = NULL;
    }
    return parent;
}

    TrieNode* insert(TrieNode* root, string pattern) {
        TrieNode *temp = root;
        for(char i : pattern) {
            int number = i - 'a';
            if(temp->children[number] == NULL) {
                temp->children[number] = getNode();
                temp->size++;
            }
            temp = temp->children[number];
        }
        temp->leaf = true;
        return root;
    }

    int searchforWord(TrieNode* root, string word) {
        TrieNode *temp = root;
        int i;
        cout << root->size << endl;
        for(i = 0; i < word.size(); ++i) {
            int index = word[i] - 'a';
            if(temp->size > 1 || temp->children[index]->size > 1) break;
            temp = temp->children[index];
        }
        return i;
    }
    string longestCommonPrefix(vector<string>& test) {
        if(test.size() == 0) return "";
        if(test.size() == 1) return test.at(0);
        TrieNode *root = getNode();
        string minString = test.at(0);
        for(auto i : test) {
            if(i.size() < minString.size()) minString = i;
            root = insert(root, i);
        }
        if(root->size > 1) return "";
        int index = searchforWord(root, minString);
        return minString.substr(0, index+1);
    }
};
