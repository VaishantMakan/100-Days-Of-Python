#include<bits/stdc++.h>
using namespace std;



class Solution {

public:

    vector<int> helper(TreeNode*  root)
    {
        TreeNode* node = root;

        stack<TreeNode*> s;

        vector<int> in;

        s.push(root);

        while (1)
        {
            if (node != NULL)
            {
                s.push(node);
                node = node->left;
            }
            else
            {
                if (s.empty())
                    break;

                in.push_back(s.top()->val);
                s.pop();

                node = node->right;
            }
        }
    }

    int main()
    {

    }

};