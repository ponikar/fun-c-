#include <iostream>
using namespace std;

class Stack
{
private:
    int array[10];
    int top;

public:
    Stack()
    {
        top = -1;
    }

    void add(int &a)
    {
        if(top >= 9)
        {
            cout << "Stack Overflow" << endl;
            return; 
        }
        array[++top] = a;
    }

    int del()
    {
        if(top < 0)
        {
            cout << "Stack Underflow" << endl;
            return -1;
        }
        return array[top--];
    }

    int CurrentPosition()
    {
        return top;
    }

    void print()
    {
        if(top < 0)
        {
            cout << "Stack is empty" << endl;
            return;
        }
        cout << "Stack contents: ";
        for(int i = 0; i <= top; i++)
        {
            cout << array[i] << " ";
        }
        cout << endl;
    }
};

class Queue
{
private:
    int array[10];
    int front;
    int back;

public:
    Queue()
    {
        front = 0;
        back = -1;
    }

    void insert(int &a)
    {
        if(back >= 9)
        {
            cout << "Queue Overflow" << endl;
            return;
        }
        array[++back] = a;
    }

    int del()
    {
        if(front > back)
        {
            cout << "Queue Underflow" << endl;
            return -1;
        }
        return array[front++];
    }

    void PrintFrontIndex()
    {
        cout << "Front Index: " << front << endl;
    }

    void PrintBackIndex()
    {
        cout << "Back Index: " << back << endl;
    }

    void print()
    {
        if(front > back)
        {
            cout << "Queue is empty" << endl;
            return;
        }
        cout << "Queue contents: ";
        for(int i = front; i <= back; i++)
        {
            cout << array[i] << " ";
        }
        cout << endl;
    }

};
int main()
{
    Stack s;
    int a = 15, b = 10, c = 29, d = 2;
    s.add(a);
    s.add(b);
    s.add(c);
    s.add(d);
    s.print();
    cout << "Stack current position: " << s.CurrentPosition() << endl;
    cout << "Stack deleted: " << s.del() << endl;
    s.print();
    cout << "Stack current position: " << s.CurrentPosition() << endl;

    cout << "\n" << endl;

    Queue q;
    int m = 20, n = 30, o = 40, p = 50;
    q.insert(m);
    q.insert(n);
    q.insert(o);
    q.insert(p);
    q.print();
    q.PrintFrontIndex();
    q.PrintBackIndex();
    cout << "Queue deleted: " << q.del() << endl;
    q.PrintFrontIndex();
    q.PrintBackIndex();
    q.print();

    return 0;
}