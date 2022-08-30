class CircularQueue{
    int *arr;
    int fron; 
    int rear;
    int size;
    public:
    // Initialize your data structure.
    
    CircularQueue(int n){
        // Write your code here.
        size = 100000;
        arr = new int[size];
        fron =-1;
        rear =-1;
        
    }

    // Enqueues 'X' into the queue. Returns true if it gets pushed into the stack, and false otherwise.
    bool enqueue(int value){
        // Write your code here.
        if( (fron ==0 && rear ==size -1) || (rear == (fron -1)%(size-1)  )) {
            cout<<"Queue is Full"<<endl;
            return false;
        }
        else if(fron ==-1) {
            fron = rear =0;   
        }
        else if(rear == size-1 && fron !=0) {
            rear =0;
        }
        else{
            rear++;
        }
        arr[rear] = value;
        return true;
    }

    // Dequeues top element from queue. Returns -1 if the stack is empty, otherwise returns the popped element.
    int dequeue(){
        // Write your code here.
        if(fron == rear ==-1) {
            return -1;
        }
        else{
            return arr[fron];
            fron++;
        }
    }
};
