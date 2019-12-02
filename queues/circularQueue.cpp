#include <bits/stdc++.h>
using namespace std;

// Circular queue implementation
class CircularQueue {
    private:
        int head; // head position
        int tail; // tail position
        int counter; // track the number of elements
        int size; // fixed size of array
        int *arr; // array

    public:
        CircularQueue(int k) {
            head = 0;
            tail = -1;
            size = k;
            arr = new int[size];
            counter = 0;
        }

        bool enqueue(int value) {
            if(!isFull()) {
                tail = (tail + 1) % size;
                arr[tail] = value;
                counter++;
                return true;
            }
            else {
                return false;
            }
        }

        bool dequeue() {
            if(!isEmpty()) {
                front = (front + 1) % size;
                counter--;
                return true;
            }
            else {
                return false;
            }
        }

        int Front() {
            return !isEmpty() ? arr[head] : -1;
        }

        int Rear() {
            return !isEmpty() ? arr[tail] : -1;
        }

        bool isEmpty() {
            return counter == 0;
        }

        bool isFull() {
            return counter == size;
        }

}
