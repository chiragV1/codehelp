class node {
    public:
    int data;
    node * left; 
    node* right;
    
    node(int d) {
        this->data = d;
        this->right = NULL;
        this->left = NULL;
    }
};
class cmp{
    public:
	    bool operator()(node* a, node* b) {
	    return a->data > b->data;
	    }
};
class Solution
{
	public:
	   
	    
	    void traversal(node* root  , vector<string> &ans, string temp) {
	        //base 
	        if(root->right == NULL && root ->left == NULL) {
	            ans.push_back(temp);
	            return;
	        }
	        
	        traversal(root->left , ans , temp +'0');
	        traversal(root->right , ans , temp +'1');
	        
	    }
	
		vector<string> huffmanCodes(string S,vector<int> f,int N)
		{
		    priority_queue<node* , vector<node*> , cmp > pq;
		    
		    for(int i =0;i<N;i++) {
		        node* node1= new node(f[i]);
		        pq.push(node1);
		    }
		    
		    while(pq.size() >1) {
		        node* left = pq.top();
		        pq.pop();
		        
		        node* right = pq.top();
		        pq.pop();
		        
		        node* newnode = new node(left->data + right ->data);
		        newnode->left = left;
		        newnode->right = right;
		        
		        pq.push(newnode);
		    }
		    
		    node* root = pq.top();
		    
		    vector<string> ans;
		    string temp = "" ;
		    
		    traversal(root , ans , temp);
		    
		    return ans;
		    
		    
		}
};
