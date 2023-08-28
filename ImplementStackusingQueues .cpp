// 225. Implement Stack using Queues

#include "bits/stdc++.h"

using namespace std;

class MyStack {
queue<int> q;
public:
    MyStack() {}

    void push(int x) {
        q.push(x);
        for (int i = 0; i < q.size(); i++) {
            q.push((q.front()));
            q.pop();
        }
    }

    int pop() {
        int val = q.front();
        q.pop();
        return val;
    }

    int top() {
        return q.front();
    }

    bool empty() {
        return q.empty();
    }
};
