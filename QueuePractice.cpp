// Author: Payton Welch
// Original Date: 7/28/2023
// Updated 2/8/2024
// Class: COSC 350 2W 23/SU2
// This program implement a practice queue.

#include <iostream>
using namespace std;

const int MAX = 5;

// Queue Class
class Queue
{
private:
    int val[MAX];
    int head;
    int tail;

public:
    Queue()
    {
        head = 0;
        tail = -1;
    }
    void enqueue(int x)
    {
        if (isFull())
        {
            cout << " Queue is full." << endl;
        }
        else
        {
            tail++;
            val[tail] = x;
        }
    }

    void dequeue()
    {
        if (isEmpty())
        {
            cout << " Empty: Queue has five open slots" << endl;
        }
        else
        {
            for (int i = 1; i < MAX; i++)
            {
                val[i - 1] = val[i];
            }
            tail--;
        }
    }
    // Prints tail item in queue. Meaning the first put in.
    int top()
    {
        if (isEmpty())
        {
            cout << " Queue is Empty" << endl;
        }
        else
        {
            return val[tail];
        }
    }

    // prints head value
    int front()
    {
        if (isEmpty())
        {
            cout << " Queue is Empty" << endl;
        }
        else
        {
            return val[head];
        }
    }
    void printQueue()
    {
        if (isEmpty())
        {
            cout << " Queue is Empty";
        }
        else
        {
            cout << " Queue" << endl << " -----" << endl;
            for (int i = tail; i >= 0; i--)
            {
                cout << " " << val[i] << " ";
            }
            cout << endl << endl;
        }
    }
    bool isEmpty()
    {
        return tail == -1;
    }

    bool isFull()
    {
        return tail == MAX - 1;
    }
};

// Stack class

// Driver Code
int main()
{

    Queue Q;

    // Enqueue 1 2 3 into the queue
    cout << " Enqueue 1 2 3 into the queue." << endl << endl;
    Q.enqueue(1);
    Q.enqueue(2);
    Q.enqueue(3);

    // Print the queue
    Q.printQueue();

     
    // Dequeue 1
    cout << " Dequeue 1 and enqueue 4 5 into the queue." << endl << endl;
    Q.dequeue();

    // Enqueue 4 5
    Q.enqueue(4);
    Q.enqueue(5);
    
    // Print the queue
    Q.printQueue();
   
    // Pause and exit
    char get;
    cout << "\nType any character to exit: ";
    cin >> get;

    return (0);
}