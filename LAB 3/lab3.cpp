#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node *next;
    Node(int x, Node *n) {data=x; next=n;}
};

class myQueue {
private:
    Node *front, *rear;
    int size;
public:
    myQueue() {
        front = rear = NULL;
        size = 0;
    }
    void enqueue(int x) {
        Node *temp = new Node(x, NULL);
        if (rear == NULL) {
            front = rear = temp;
        } else {
            rear->next = temp;
            rear = temp;
        }
        size++;
    }
    void dequeue() {
        if (front == NULL) {
            cout << "....Queue is empty...." << endl;
            return;
        }
        Node *temp = front;
        front = front->next;
        delete temp;
        size--;
        if (front == NULL) {
            rear = NULL;
        }
    }
    int top() {
        if (front == NULL) {
            cout << "....Queue is EMPTY...." << endl;
            return -1;
        }
        return front->data;
    }
    int getSize() {
        return size;
    }
    bool isEmpty() {
        return (front == NULL);
    }
};

int main() {
    myQueue q;
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    cout << "Your Queue size is " << q.getSize() << endl;
    cout << "Your Front element is " << q.top() << endl;
    q.dequeue();
    cout << "Your Queue size is " << q.getSize() << endl;
    cout << "Your Front element is " << q.top() << endl;
    q.dequeue();
    q.dequeue();
    if (q.isEmpty()) {
        cout << "This queue is EMPTY!!!!" << endl;
    } else {
        cout << "This queue is NOT EMPTY!!!!" << endl;
    }
    return 0;
}
