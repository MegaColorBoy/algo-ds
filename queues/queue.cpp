#include <bits/stdc++.h>
using namespace std;

// Simple queue implementation
class Queue {
    private:
        vector<int> data;
        int p_start;

    public:
        Queue() {
            p_start = 0;
        }

        // Enqueue
        bool enqueue(int x) {
            data.push_back(x);
            return true;
        }

        // Dequeue
        bool dequeue() {
            if(isEmpty()) {
                return false;
            }
            p_start++;
            return true;
        }

        // Get the front element of the queue
        int Front() {
            return data[p_start];
        }

        // Check if the queue is empty
        bool isEmpty() {
            return p_start >= data.size();
        }
};

int main() {
    Queue q;
    q.enqueue(5);
    q.enqueue(3);
    
    if(!q.isEmpty()) {
        cout << q.Front() << endl;
    }

    q.dequeue();
    if(!q.isEmpty()){cout << q.Front() << endl;}

    q.dequeue();
    if(!q.isEmpty()){cout << q.Front() << endl;}

}
