#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

class Stack{
	public:
	int * arr;
	int top;
	int size;
	
	Stack(int size) {
		this->size = size;
		arr = new int[size];
		top =-1;
	}
	
	void push(int element) {
		if(size - top > 1) {
			top++;
			arr[top] = element;
		}
		else{
			cout<<"Stack overflow"<<endl;
		}
	}
	
	void pop() {
		if(top >=0) {
			top--;
		}
		else{
			cout<<"Stack underflow"<<endl;
		}
		
		
	}
	
	int peek() {
		if(top>=0 && top<size) {
			return arr[top];
		}
		else {
			cout<<"stack is empty";
			return -1;
		}
	}
	
	bool empty() {
		if(top==-1) {
			return true;
			
		}
		else{
			return false;
		}
		
	}
};

int main() {
	// Your code goes here;
	
	Stack ob(5);
	
	ob.push(2);
	ob.push(3);
	ob.push(4);
	ob.push(5);
	ob.push(6);
	ob.push(2);
	ob.push(2);
	

	return 0;
}
