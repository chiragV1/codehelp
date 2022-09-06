#include<bits/stdc++.h>

using namespace std;

class Node{
    public:
    int data;
    Node* right;
    Node* left;

    Node(int data) {
        this-> data = data;
        this->left = NULL;
        this->right = NULL;
    }



};

Node* BuildTree(Node* root) {
    cout<<"Enter the data"<<endl;
    int data;
    cin>>data;

    root = new Node(data);

    if(data == -1) {
        return NULL ;
    }

    cout<<"Enter the right child of "<< data <<endl;
    root->left = BuildTree(root->left);
    cout<<"Enter the left child of " <<data<<endl;
    root->right = BuildTree(root->right) ;

    return root;

}

void LevelOrderTraversal(Node* root) {
    queue<Node*> q;
    
    q.push(root);
    q.push(NULL);

    while(!q.empty()) {
        Node* temp = q.front();
        
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

int main() {

    Node* root = NULL;

    root = BuildTree(root);
    LevelOrderTraversal(root);

    return 0;
}