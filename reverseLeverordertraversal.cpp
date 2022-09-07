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

    if(data ==-1) {
        root = NULL;
    }

    cout<<"enter the data for insertion in left of " << data <<endl;
    root->left = buildtree(root->left);
    cout<<"enter the data for the insertion in right of "<<data << endl;
    root->right = buildtree(root->right);
    
    return root;
}

void LevelOrderTraversal(node* root) { //breath first search
    queue<node*> q;

    q.push(root);

    while(!q.empty()) {
        node* temp = NULL;
        q.pop() ;

        if(temp->left !=NULL) {
            q.push(temp->)
        }
    }
}

void RevLevelOrderTrav(node* root) {

}

int main() {



    return 0;
}