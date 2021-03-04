int getAns(Tree* root, int *ans) {
    if(root == NULL) {
        return 0;
    }
    int left = getAns(root->left, ans);
    int right = getAns(root->right, ans);
    int maxi = max(left, right);
    if(root->val >= maxi) {
        (*ans)++;
    }
    return max(maxi, root->val);
}

int solve(Tree* root) {
    int ans = 0;
    getAns(root, &ans);
    return ans;
}
