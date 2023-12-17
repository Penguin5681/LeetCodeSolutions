// 2353. Design a Food Rating System

#include <bits/stdc++.h>

using namespace std;

struct FoodComparator {
    bool operator()(const pair<int, string>& a, const pair<int, string>& b) {
        if (a.first == b.first)
            return a.second > b.second;
        return a.first < b.first;
    }
};

class FoodRatings {
public:
    unordered_map<string, priority_queue<pair<int, string>, vector<pair<int, string>>, FoodComparator>> cuisineMap;
    unordered_map<string, string> cuisineCheck;
    unordered_map<string, int> ratingsMap;

    FoodRatings(const vector<string>& foods, const vector<string>& cuisines, const vector<int>& ratings) {
        for (size_t i = 0; i < foods.size(); ++i) {
            cuisineMap[cuisines[i]].push({ ratings[i], foods[i] });
            cuisineCheck[foods[i]] = cuisines[i];
            ratingsMap[foods[i]] = ratings[i];
        }
    }

    void changeRating(const string& food, int newRating) {
        ratingsMap[food] = newRating;
        cuisineMap[cuisineCheck[food]].push({ newRating, food });
    }

    string highestRated(const string& cuisine) {
        auto& foodQueue = cuisineMap[cuisine];
        string topFood = foodQueue.top().second;
        int topRating = foodQueue.top().first;

        while (ratingsMap[topFood] != topRating) {
            foodQueue.pop();
            topFood = foodQueue.top().second;
            topRating = foodQueue.top().first;
        }

        return topFood;
    }
};

/**
 * Your FoodRatings object will be instantiated and called as such:
 * FoodRatings* obj = new FoodRatings(foods, cuisines, ratings);
 * obj->changeRating(food,newRating);
 * string param_2 = obj->highestRated(cuisine);
 */

signed main() {

}