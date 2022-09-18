vector<int> leftView(Node *root)
{
   // Your code here
   vector<int> ans ; 
   if(root == NULL) {
       return ans;
   }
   
   map<int, int> mp;
   queue<pair<Node* , int> > q;
   
   q.push(make_pair(root, 0));
   
   while(!q.empty()) {
       pair<Node* , int> temp = q.front();
       q.pop();
       
       Node* frontNode = temp.first;
       int lvl = temp.second;
       
       if(mp.find(lvl) == mp.end() ) {
           mp[lvl] = frontNode->data;
       }
       if(frontNode->left ) {
           q.push(make_pair(frontNode->left, lvl+1));
       }
       if(frontNode->right) {
           q.push(make_pair(frontNode->right, lvl+1));
       }
   }
   
   for(auto i: mp) {
       ans.push_back(i.second);
   }
   
   return ans;
}
