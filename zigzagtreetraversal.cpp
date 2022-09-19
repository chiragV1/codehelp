/*Structure of the node of the binary tree is as
struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/

class Solution{
    public:
    //Function to store the zig zag order traversal of tree in a list.
    vector <int> zigZagTraversal(Node* root)
    {
    	// Code here
    	vector<int> result;
    	
    	if(root == NULL ) {
    	    return result;
    	}
    	
    	queue<Node*> q;
    	q.push(root);
    	
    	bool ltr = true;
    	
    	while(!q.empty()) {
    	    int size = q.size();
    	    vector<int> ans(size);
    	    
    	    
    	    for(int i=0;i<size;i++) {
    	        Node* frontnode = q.front();
    	        q.pop();
    	        
    	        int index = ltr? i : size - i -1;
    	        ans[index] = frontnode->data;
    	        
    	        if(frontnode->left) {
    	            q.push(frontnode ->left);
    	        }
    	        if(frontnode->right) {
    	            q.push(frontnode->right);
    	        }
    	        
    	    }
    	    
    	    ltr = !ltr;
    	    
    	    for(auto i: ans){
    	        result.push_back(i);
    	    }
    	    
    	    
    	}
    	
    	return result;
    }
};
