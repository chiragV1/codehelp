void  insertatbottom(stack<int> & stack, int num) {
    if(stack.empty()) {
        stack.push(num);
        return;
    }
    
    int x = stack.top();
    stack.pop();
    insertatbottom(stack , num);
    stack.push(x);
        
}

void reverseStack(stack<int> &stack) {
    // Write your code here
    //base
     if(stack.empty()) {
       return;
    }
    int num = stack.top();
    stack.pop();
   
    
    reverseStack(stack);
    insertatbottom(stack, num);
}
