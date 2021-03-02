int getHeight(Node* root) {
    if(root == NULL) {
        return -1;
    }
    return max(getHeight(root->right), getHeight(root->left)) + 1;
}

void levelOrder(Node* node, vector<int> &arr, int level) {
    if(level == 0) {
        arr.push_back(node->data);
    }
    else {
        if(node->left != NULL)
            levelOrder(node->left, arr, level - 1);
        if(node->right != NULL)
            levelOrder(node->right, arr, level - 1);
    }
}



// A wrapper over leftViewUtil()
vector<int> leftView(Node *root)
{
    int height = getHeight(root);
    vector<int> ans;
    for(int i = 0; i <= height; i++) {
        vector<int>temp;
        levelOrder(root, temp, i);
        ans.push_back(temp[0]);
    }
    return ans;
}
