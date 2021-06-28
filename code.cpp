/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int>A;
     void minDepth2(TreeNode* root,int size) {
        if(root->left==NULL && root->right==NULL)
        {
            size=size+1;
            A.push_back(size);
        }
         size=size+1;
         if(root->left)minDepth2(root->left,size);
         if(root->right)minDepth2(root->right,size);
    }
    int minDepth(TreeNode* root) {
     int size=0;
        if(root){minDepth2(root,size);
        //sort(A.begin(),A.end());
        return *min_element(A.begin(),A.end());}
        return 0;
    }
};
