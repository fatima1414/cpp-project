#include <iostream>
using namespace std;

class Stack {
private:
    int top;
    int capacity;
    int* arr;

public:
    Stack(int size) {
        capacity = size;
        arr = new int[capacity];
        top = -1;
    }

    ~Stack() {
        delete[] arr;
    }

    
    void push(int value) {
        if (isFull()) {
            cout << "Stack is full. Cannot push " << value << endl;
        } else {
            arr[++top] = value;
            cout << value << " pushed to stack." << endl;
        }
    }

   
    void pop() {
        if (isEmpty()) {
            cout << "Stack is empty. Cannot pop." << endl;
        } else {
            cout << arr[top--] << " popped from stack." << endl;
        }
    }

    
    void peek() {
        if (isEmpty()) {
            cout << "Stack is empty. No top element to display." << endl;
        } else {
            cout << "Top element: " << arr[top] << endl;
        }
    }

    
    bool isEmpty() {
        return top == -1;
    }

    
    bool isFull() {
        return top == capacity - 1;
    }
};

int main() {
    int size;
    cout << "Enter the size of the stack: ";
    cin >> size;
    Stack stack(size);


    stack.push(10);
    stack.push(20);
    stack.push(30);
    stack.push(40);
    stack.push(50);
    stack.push(60); 
    stack.peek();
    stack.pop();

    cout << (stack.isEmpty() ? "Stack is empty." : "Stack is not empty.") << endl;
    cout << (stack.isFull() ? "Stack is full." : "Stack is not full.") << endl;

    return 0;
}
