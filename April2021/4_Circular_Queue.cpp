class MyCircularQueue {
public:
    int front, rear, size;
    int *queue;
    MyCircularQueue(int k) {
        front=rear=-1;
        size=k;
        queue=new int[size];
    }
    
    bool enQueue(int value) {    
        if((front==0 && rear==size-1) || rear == front-1)
            return false;
        else if(front==-1){
            front=rear=0;
            queue[0]=value;
        }else if(rear==size-1 && front!=0){
            rear=0;
            queue[rear]=value;
        }else{
            rear++;
            queue[rear]=value;
        }
        return true;
    }
    
    bool deQueue() {
        if(front==-1){
            return false;
        }
        queue[front]=-1; //deleting the element  i.e. dequeuing
        if(front==rear){
            front = -1;
            rear = -1;
        }else if(front == size-1){
            front=0;
        }else{
            front++;
        }
        return true;
        
    }
    
    int Front() {
        if(front==-1){
            return -1;
        }else{
            int f=queue[front];
            return f;
        }
    }
    
    int Rear() {
        if(rear==-1){
            return -1;
        }else{
            int r = queue[rear];
            return r;
        }
    }
    
    bool isEmpty() {
        if(front==-1)
            return true;
        return false;
    }
    
    bool isFull() {
        if(front==0 && rear == size-1)
            return true;
        else if(rear==front-1)
            return true;
        return false;
    }
};

/**
 * Your MyCircularQueue object will be instantiated and called as such:
 * MyCircularQueue* obj = new MyCircularQueue(k);
 * bool param_1 = obj->enQueue(value);
 * bool param_2 = obj->deQueue();
 * int param_3 = obj->Front();
 * int param_4 = obj->Rear();
 * bool param_5 = obj->isEmpty();
 * bool param_6 = obj->isFull();
 */