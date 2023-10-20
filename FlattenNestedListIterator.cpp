// 341. Flatten Nested List Iterator

#include <bits/stdc++.h>


class NestedInteger {
  public:
    bool isInteger() const;

    int getInteger() const;

    const vector<NestedInteger> &getList() const;
};

using namespace std;

class NestedIterator {
private:
    std::stack<NestedInteger> stack;

public:
    NestedIterator(std::vector<NestedInteger>& nestedList) {
        for (int i = nestedList.size() - 1; i >= 0; i--) {
            stack.push(nestedList[i]);
        }
    }

    int next() {
        if (!hasNext()) {
            return -1; 
        }
        
        int result = stack.top().getInteger();
        stack.pop();
        return result;
    }

    bool hasNext() {
        while (!stack.empty() && !stack.top().isInteger()) {
            std::vector<NestedInteger> nestedList = stack.top().getList();
            stack.pop();
            for (int i = nestedList.size() - 1; i >= 0; i--) {
                stack.push(nestedList[i]);
            }
        }
        
        return !stack.empty();
    }
};