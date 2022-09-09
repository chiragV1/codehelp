#include<bits/stdc++.h>
 
using namespace std;

class node{
    public:
    int data ;
    node* left ;
    node* right;

    node(int d){
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
}; 

node* buildtreelevel(node* root ) {
    queue<node*> q ;
    cout<<"Enter the data for the root"<<endl;
    int data ;
    cin>>data;

    root = new node(data);
    q.push(root);

    while(!q.empty() ){
        node* temp = q.front();
        q.pop();

        cout<<"enter the data for left of " << temp->data<<endl;
        int ledftdata;
        cin>>ledftdata;

        if(ledftdata!= -1){
            temp->left = new node(ledftdata);
            q.push(temp->left);
        }

        cout<<"enter the data for right of "<<temp->data<<endl;
        int rightdata;
        cin>>rightdata;

        if(rightdata != -1) {
            temp->right = new node(rightdata);
            q.push(temp->right);
        }
    }

    return root;
}

void leverordertraversal(node* root) {
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
int main() {
  
  node* root = NULL;

   root = buildtreelevel(root);
   cout<<endl;
   leverordertraversal(root);
 
return 0;
}