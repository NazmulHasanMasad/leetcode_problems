#include <iostream>
#include <queue>
#include <bits/stdc++.h>
using namespace std;

class MyStack
{
private:
    queue<int> queue1, queue2;

public:
    MyStack() {}

    void push(int x)
    {
        queue1.push(x);
    }

    int pop()
    {
        while (!queue1.empty())
        {
            queue2.push(queue1.front());
            queue1.pop();
        }
        int topElement = queue1.front();
        queue1.pop();
        swap(queue1, queue2);
        return topElement;
    }

    int top()
    {

        while (!queue1.empty())
        {
            queue2.push(queue1.front());
            queue1.pop();
        }
        int topElement = queue1.front();
        queue2.push(queue1.front());
        queue1.pop();

        swap(queue1, queue2);
        cout << topElement;
    }

    bool empty()
    {
        return queue1.empty();
    }
};

int main()
{
    MyStack st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);

    cout << st.top();

    return 0;
}