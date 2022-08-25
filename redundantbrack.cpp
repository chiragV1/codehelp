#include<stack>
bool findRedundantBrackets(string &s)
{
    // Write your code here.
    stack<int> st;
    for(int i =0;i<s.length();i++) {
        char ch = s[i];
         if(ch =='(' || ch =='+' || ch =='-' ||  ch =='/' || ch =='*' ) {
             st.push(ch);
         }
        else{
            if(ch == ')') {
                bool isred = true;
                
                while(st.top() !='(') {
                    char top = st.top();
                    if(top =='+' || top =='-' || top =='/' || top =='*') {
                        isred = false;
                    }
                    st.pop();
                }
                if(isred == true) {
                    return true;
                }
                
                st.pop();
            }
        }
        
    }
    
    return false;
}
