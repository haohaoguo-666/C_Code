#define _CRT_SECURE_NO_WARNINGS 1
typedef struct {
    int* a;
    int front;
    int rear;
    int k;
} MyCircularQueue;

bool myCircularQueueIsEmpty(MyCircularQueue* obj) {
    assert(obj);
    return obj->front == obj->rear;
}

bool myCircularQueueIsFull(MyCircularQueue* obj) {
    assert(obj);
    return ((obj->rear + 1) % (obj->k + 1)) == obj->front;
}

MyCircularQueue* myCircularQueueCreate(int k) {
    MyCircularQueue* obj = (MyCircularQueue*)malloc(sizeof(MyCircularQueue));
    //�࿪һ��ʵ������
    obj->a = (int*)malloc(sizeof(int) * (k + 1));
    obj->front = obj->rear = 0;
    //����ʱ���ܴ洢���ݸ������ռ��СӦ��Ϊk+1;
    obj->k = k;

    return obj;
}

bool myCircularQueueEnQueue(MyCircularQueue* obj, int value) {
    assert(obj);

    if (myCircularQueueIsFull(obj)) return false;

    obj->a[obj->rear++] = value;

    obj->rear %= (obj->k + 1);

    return true;

}

bool myCircularQueueDeQueue(MyCircularQueue* obj) {
    assert(obj);

    if (myCircularQueueIsEmpty(obj)) return false;

    obj->front++;

    obj->front %= (obj->k + 1);

    return true;
}

int myCircularQueueFront(MyCircularQueue* obj) {
    assert(obj);

    if (myCircularQueueIsEmpty(obj)) return -1;

    return obj->a[obj->front];

}

int myCircularQueueRear(MyCircularQueue* obj) {
    assert(obj);

    if (myCircularQueueIsEmpty(obj)) return -1;

    int rear = obj->rear == 0 ? obj->k : obj->rear - 1;

    return obj->a[rear];

}



void myCircularQueueFree(MyCircularQueue* obj) {
    free(obj->a);
    free(obj);
}

/**
 * Your MyCircularQueue struct will be instantiated and called as such:
 * MyCircularQueue* obj = myCircularQueueCreate(k);
 * bool param_1 = myCircularQueueEnQueue(obj, value);

 * bool param_2 = myCircularQueueDeQueue(obj);

 * int param_3 = myCircularQueueFront(obj);

 * int param_4 = myCircularQueueRear(obj);

 * bool param_5 = myCircularQueueIsEmpty(obj);

 * bool param_6 = myCircularQueueIsFull(obj);

 * myCircularQueueFree(obj);
*/