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
    stack<node*> s;
    vector<int> in;

    while(true) {
        if(root != NULL) {
            s.push(root);
            root = root->left;

        }

        else{
            if(s.empty()) break;

            node* temp = s.top();
            s.pop();

            in.push_back(temp->data);

            root = root->right;
        }
    }

    return in;
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