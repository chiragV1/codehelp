class Queue {
    int *arr;
    int fron ; 
    int rear ; 
    int size;
    
public:
    Queue() {
        size = 10000;
       arr = new int[size];
        fron =0;
        rear =0;
        
        
    }

    /*----------------- Public Functions of Queue -----------------*/

    bool isEmpty() {
        if(rear == fron) {
            return true;
        }
        else{
            return false;
        }
    }

    void enqueue(int data) {
        if(rear == size) {
            return;
        }
        else{
            arr[rear] = data;
            rear++;
        }
    }

    int dequeue() {
        if(rear == fron) {
            return -1;
        }
        else{
            int ans  = arr[fron];
            arr[fron] = -1;
            fron++;
            if(fron == rear){
                 fron =0 ;
                 rear =0;
             } 
                return ans;
        }
    }

    int front() {
        if(rear== fron)  {
            return -1;
        }
        else{
            return arr[fron];
        }
    }
};                    
