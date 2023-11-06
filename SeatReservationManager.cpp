// 1845. Seat Reservation Manager

#include <bits/stdc++.h>

using namespace std;

class SeatManager {
public:
    SeatManager(int n) {
        for (int i = 1; i <= n; i++) {
            available_seats.push(i);
        }
    }

    int reserve() {
        if (available_seats.empty()) {
            return -1;  // No available seats
        }

        int seat = available_seats.top();
        available_seats.pop();
        reserved_seats.insert(seat);
        return seat;
    }

    void unreserve(int seatNumber) {
        if (reserved_seats.find(seatNumber) != reserved_seats.end()) {
            available_seats.push(seatNumber);
            reserved_seats.erase(seatNumber);
        }
    }

private:
    priority_queue<int, vector<int>, greater<int>> available_seats;
    set<int> reserved_seats;
};


signed main() {
    
}