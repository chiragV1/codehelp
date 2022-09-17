class Solution{
public:
bool static comp(vector<int>&v1 , vector<int>&v2){
       if(v1[1]==v2[1]) return v1[2]<v2[2];
       return v1[1]<v2[1];
       
   }
   
   
   vector<int> maxMeetings(int N,vector<int> &S,vector<int> &F){
       vector<vector<int>> v;
       
       for(int i=0 ;i<N ;i++){
           v.push_back({S[i],F[i],i+1});
       }
       
       sort(v.begin(),v.end(),comp);
       int j=0;
       vector<int> ans;
       ans.push_back(v[j][2]);
       
       for(int i=1; i<N ;i++){
           if(v[i][0]>v[j][1]){
               j=i;
               ans.push_back(v[i][2]);
           }
           
       }
       sort(ans.begin(),ans.end());
       return ans;
   }
};
