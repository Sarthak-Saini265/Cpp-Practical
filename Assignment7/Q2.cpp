#include <iostream>
using namespace std;

template <typename T>
class Stack
{
    T *arr;
    int top;
    int capacity;

public:
    Stack(int size)
    {
        capacity = size;
        arr = new T[capacity];
        top = -1;
    }

    ~Stack()
    {
        delete[] arr;
    }

    void push(T value)
    {
        if (top == capacity - 1)
        {
            cout << "Stack Overflow" << endl;
            return;
        }
        arr[++top] = value;
    }

    void pop()
    {
        if (top == -1)
        {
            cout << "Stack Underflow" << endl;
            return;
        }
        --top;
    }

    void display()
    {
        if (top == -1)
        {
            cout << "Stack is empty" << endl;
            return;
        }
        for (int i = top; i >= 0; --i)
            cout << arr[i] << " ";
        cout << endl;
    }
};

int main()
{
    Stack<int> s(5);

    s.push(10);
    s.push(20);
    s.push(30);
    s.display();

    s.pop();
    s.display();

    s.push(40);
    s.push(50);
    s.push(60);
    s.push(70);
    s.display();

    return 0;
}
