#include <bits/stdc++.h>
using namespace std;

int main()
{
    priority_queue<int, vector<int>> queue;
    queue.push(1);
    queue.push(2);
    queue.push(3);

    cout << queue.top() << endl;
    queue.pop();
    cout << queue.top() << endl;

    priority_queue<int, vector<int>, greater<int>> queuemin;
    queuemin.push(1);
    queuemin.push(2);
    queuemin.push(3);

    cout << queuemin.top() << endl;
    queuemin.pop();
    cout << queuemin.top() << endl;
}