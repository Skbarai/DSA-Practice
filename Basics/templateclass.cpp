#include<iostream>
using namespace std;
template<class T>
#define MAX 100
class Stack {
private:
    T top;
    T data[MAX];

public:
    // Constructor
    Stack() { top = -1; }

    // Destructor
    ~Stack() {}

    // Check if the stack is empty
    bool isEmpty() { return (top == -1); }

    // Add an element to the stack
    void push(T value) {
        if (top >= (MAX - 1))
            std::cout << "Stack Overflow\n";
        else {
            data[++top] = value;
            std::cout << value << " pushed into stack\n";
        }
    }

    // Remove and return the top element from the stack
    T pop() {
        if (top < 0) {
            std::cout << "Stack Underflow\n";
            return 0;
        }
        else {
            int temp = data[top--];
            return temp;
        }
    }
};
int  main() {
    Stack<int> s;
    s.push(5);
    s.push(7);
    cout<<s.pop()<<" Poped from stack";
    }