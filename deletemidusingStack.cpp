void deleteel(stack<int>&inputStack, int count,  int N) {
    //base 
    if(count == N/2) {
        inputStack.pop();
        return;
    }
    
    // condition
    int num = inputStack.top();
    inputStack.pop();
    deleteel(inputStack , ++count , N);
    inputStack.push(num);
}

void deleteMiddle(stack<int>&inputStack, int N){
	
   // Write your code here
    
    int count=0;
    deleteel(inputStack,count, N);
}
