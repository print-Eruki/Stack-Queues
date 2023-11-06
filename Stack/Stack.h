
#include <iostream>
#include <vector>

class Stack {
public:
    // Constructor
    Stack();

    // Destructor
    ~Stack();

    // Push a value onto the stack
    void push(int value);

    // Peek at the top element of the stack
    int peek() const;

    // Pop and remove the top element from the stack
    int pop();

    // Check if the stack is empty
    bool empty() const;

private:
    //You need to define where are we going to store the data
    

    //You can define anything else that can help you below


};

