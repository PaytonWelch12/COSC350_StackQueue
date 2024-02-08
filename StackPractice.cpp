// Author: Payton Welch
// Original Date: 7/28/2023
// Updated 2/8/2024
// Class: COSC 350 2W 23/SU2
// This program implement a practice stack.


#include <iostream>
using namespace std;

const int MAX = 5;

class Stack
{
private:
    int val[MAX];
    int top;

public:
    Stack()
    {
        top = -1;
    }

    void push(int x)
    {
        if (isFull())
        {
            cout << "Stack is full." << endl;
        }
        else
        {
            top++;
            val[top] = x;
        }
    }

    void pop()
    {
        if (isEmpty())
        {
            cout << "Stack is empty." << endl;
        }
        else
        {
            val[top] = 0;
            top--;
        }
    }

    int topPrint()
    {
        if (isEmpty())
        {
            cout << "Stack is empty." << endl;
        }
        else
        {
            return val[top];
        }
    }

    void printStack()
    {
        cout << " Stack" << endl
             << " -----" << endl;
        for (int i = top; i >= 0; i--)
        {
            cout << " | " << val[i] << " | " << endl;
        }
        cout << endl;
    }

    bool isEmpty()
    {
        return top == -1;
    }

    bool isFull()
    {
        return top == MAX - 1;
    }
};

// Driver Code
int main()
{
    Stack S;

    // Push 1 2 3 into the stack
    cout << " Push 1 2 3 into the stack." << endl << endl;
    S.push(1);
    S.push(2);
    S.push(3);

    // Print the Stack
    S.printStack();

    // Pop 3
    cout << " Pop 3 and push 4 5 into the stack." << endl << endl;
    S.pop();

    // Push 4 5
    S.push(4);
    S.push(5);

    // Print the Stack
    S.printStack();

    // Pause and exit
    char get;
    cout << "\n\nType any character to exit: ";
    cin >> get;

    return (0);
}