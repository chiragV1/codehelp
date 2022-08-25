void solve(stack<int> &stack , int num) {
    //base
    if(((!stack.empty()) && num>=stack.top()) || stack.empty()) {
        stack.push(num);
        return;
    }
    
    int x = stack.top();
    stack.pop();
    
    solve(stack , num);
    stack.push(x);
}
void sortStack(stack<int> &stack)
{
	// Write your code here
    //base 
    if(stack.empty()) {
        return;
    }
    
    int num = stack.top();
    stack.pop();
    
    sortStack(stack);
    
    solve(stack , num);
    
    
    
}
