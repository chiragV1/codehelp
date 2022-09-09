#include<bits/stdc++.h>
 
using namespace std;
 class node{
    public:
    int data;
    node* left;
    node* right;

    node(int d) {
        this->data = d;
        this->left = NULL;
        this->right  = NULL;
    }
 };

node* buildtree(node* root){
    cout<<"Enter the data"<<endl;
    int data ;
    cin>>data;

    if(data == -1) {
        return NULL;
    }

    root = new node(data);

    cout<<"enter the data for the left of "<<root->data<<endl;
    buildtree(root->left);
    cout<<"enter the data for the right of "<<root->data<<endl;
    buildtree(root->right);
    
}

vector<int> inorder(node* root) {
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
     
    vector<int> inorderTraversal(TreeNode* root) {
        //base
       
       vector < int > inOrder;
  stack < TreeNode * > s;
  while (true) {
    if (root != NULL) {
      s.push(root);
      root = root -> left;
    } else {
      if (s.empty()) break;
      root = s.top();
      inOrder.push_back(root ->val);
      s.pop();
      root = root -> right;
    }
  }
  return inOrder;
    }
};
}
int main() {

    node* root = NULL;

    root = buildtree(root);
    vector<int> ans =inorder(root) ;
    
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }

 
return 0;
}
// 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1