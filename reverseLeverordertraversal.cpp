#include<bits/stdc++.h>

using namespace std;

class node{
    public:
    int data ;
    node* left;
    node* right;

    node(int data) {
        this->data = data;
        this->left = NULL;
        this->right = NULL;

    }

};

node* buildtree(node* root) {
    cout<<"enter the data" <<endl;
    int data;
    cin>>data;

    root  = new node(data);

    if(data == -1) {
        return NULL;
    }

    cout<<"enter the data for insertion in left of " << data <<endl;
    root->right = buildtree(root->right);
    cout<<"enter the data for the insertion in right of "<<data << endl;
    
    root->left = buildtree(root->left);
    
    return root;
}

void LevelOrderTraversal(node* root) { //breath first search
    queue<node*> q;
    
    q.push(root);
    q.push(NULL);

    while(!q.empty()) {
        node* temp = q.front();
        
        q.pop() ;

        if(temp ==NULL) {
            cout<<endl;
            if(!q.empty()) {
                q.push(NULL);
            }
        }
        else{
            cout<< temp->data<<" ";
            if(temp->left) {
            q.push(temp->left);
            }
            if(temp->right) {
            q.push(temp->right);
            }

        }

        

    }
}

// void RevLevelOrderTrav(node* root) {

// }

void inorder(node* root) {
    if(root ==NULL) {
        return ;
    }
    cout<<r
    if(root->left) {
        inorder
    }
}

int main() {

    node* root = NULL;

    root = buildtree(root);

    LevelOrderTraversal(root);



    return 0;
}