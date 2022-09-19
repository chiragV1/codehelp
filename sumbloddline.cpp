class Solution
{
public:
    void solve(Node* root , int len , int &maxlen , int sum , int &maxsum) {
        if(root == NULL ) {
            if(len > maxlen) {
                maxlen = len;
                maxsum = sum;
            }
            else if (len == maxlen) {
                maxsum = max(sum, maxsum);
            }
            return;
        }
        sum = sum + root->data;
        
        solve(root->left, len +1, maxlen, sum , maxsum );
        solve(root->right, len +1, maxlen, sum , maxsum );
    }
    int sumOfLongRootToLeafPath(Node *root)
    {
        //code here
        int len =0;
        int maxLen = 0;
        
        int sum =0;
        int maxSum =INT_MIN;
        
        solve(root , len , maxLen, sum , maxSum);
        
        return maxSum;
    }
};
