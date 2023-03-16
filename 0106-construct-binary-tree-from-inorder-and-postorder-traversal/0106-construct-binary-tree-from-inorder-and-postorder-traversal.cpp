class Solution {
public:
    int n;
    vector<int> inOrder, postOrder; // Store inorder and postorder traversal of the tree in global variables

    int getInorderIdx(int val, int start, int end) { // Get the index of a value in the inorder traversal vector
        for (int i = start; i <= end; i++)
            if (inOrder[i] == val)
                return i;

        return -1;
    }

    TreeNode *build(int inStart, int inEnd, int postStart, int postEnd) {
        if (inStart > inEnd or postStart > postEnd) // We reached the end of the tree
            return nullptr;
        
        int rootVal = postOrder[postEnd]; // The root will be the last element in the postorder traversal
        int rootIndexInorder = getInorderIdx(rootVal, inStart, inEnd); // Get the index of the root in the inorder traversal
        auto *root = new TreeNode(rootVal); // Create the root node with the value of the root
        int leftSubtreeSize = rootIndexInorder - inStart; // Get the size of the left subtree
        
        root->left = build(inStart, rootIndexInorder - 1, postStart, postStart + leftSubtreeSize - 1); // Build the left subtree after updating the pointers
        root->right = build(rootIndexInorder + 1, inEnd, postStart + leftSubtreeSize, postEnd - 1); // Build the right subtree after updating the pointers
        
        return root; // Return the root of the tree
    }

    TreeNode *buildTree(vector<int> &inorder, vector<int> &postorder) {
        inOrder = inorder;
        postOrder = postorder;
        n = (int) inorder.size();
        return build(0, n - 1, 0, n - 1); // return the final tree
    }
};