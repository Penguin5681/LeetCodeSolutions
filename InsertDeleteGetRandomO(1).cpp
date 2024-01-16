// 380. Insert Delete GetRandom O(1)

#include <bits/stdc++.h>

using namespace std;

class RandomizedSet {
public:
    RandomizedSet() {

    }

    bool insert(int val) {
        if (valToIndex.find(val) != valToIndex.end()) {
            return false; 
        }

        elements.push_back(val);
        valToIndex[val] = elements.size() - 1;

        return true;
    }

    bool remove(int val) {
        if (valToIndex.find(val) == valToIndex.end()) {
            return false; 
        }

        int lastElement = elements.back();
        int indexToRemove = valToIndex[val];
        elements[indexToRemove] = lastElement;
        valToIndex[lastElement] = indexToRemove;

        elements.pop_back();
        valToIndex.erase(val);

        return true;
    }

    int getRandom() {
        int randomIndex = rand() % elements.size();
        return elements[randomIndex];
    }

private:
    vector<int> elements;
    unordered_map<int, int> valToIndex;
};

signed main() {

}