
#include <iostream>
#include <vector>

class Queue {
public:
    // Constructor
    Queue();

    // Destructor
    ~Queue();

    // Add an element to the back of the queue
    void enqueue(int value);

    // Remove and return the front element from the queue
    void dequeue();

    // Get the front element of the queue without removing it
    int front() const;

    // Check if the queue is empty
    bool empty() const;

private:
    //You need to define where to store the data

    //You can define anything else to help o
};

