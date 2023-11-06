#include "Stack/Stack.cpp"
#include "Queue/Queue.cpp"

int main() {
    // Test the Stack class
    Stack myStack;

    myStack.push(10);
    myStack.push(20);
    myStack.push(30);

    std::cout << "Top element of the stack: " << myStack.peek() << std::endl;
    myStack.pop();

    if (myStack.empty()) {
        std::cout << "Stack is empty." << std::endl;
    } else {
        std::cout << "Stack is not empty." << std::endl;
    }

    // Test the Queue class
    Queue myQueue;

    myQueue.enqueue(10);
    myQueue.enqueue(20);
    myQueue.enqueue(30);

    std::cout << "Front element of the queue: " << myQueue.front() << std::endl;
    myQueue.dequeue();

    if (myQueue.empty()) {
        std::cout << "Queue is empty." << std::endl;
    } else {
        std::cout << "Queue is not empty." << std::endl;
    }

    return 0;
}
