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
    root->left = buildtree(root->left);
    cout<<"enter the data for the insertion in right of "<<data << endl;
    
    root->right = buildtree(root->right);
    
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

void RevLevelOrderTrav(node* root) {
    queue<node*> q;

    stack<node*> s;

    q.push(root);

    while(!q.empty()) {
        node* temp = q.front();
        q.pop();

        s.push(temp);

         if(temp->left) {
            q.push(temp->left);
         }
         if(temp ->right) {
            q.push(temp->right);
         }

    }

    while(!s.empty()) {
        root = s.top();

        cout<<root->data<<" ";

        s.pop();
    }
}

void inorder(node* root) {
    
    //base case
    if(root ==NULL) {
        return ;
    }

    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
   
}

void preorder (node* root){
    //base
    if(root == NULL) {
        return;
    }

    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}

void Postorder(node* root) {
    //base
    if(root == NULL) {
        return;
    }

    Postorder(root->left);
    Postorder(root->right);
    cout<<root->data<<" ";
}

int main() {

    node* root = NULL;

    root = buildtree(root);

    LevelOrderTraversal(root);

    inorder(root);
    cout<<endl;
    preorder(root);
    cout<<endl;
    Postorder(root);
    cout<<endl;
    
    RevLevelOrderTrav(root);



    return 0;
}