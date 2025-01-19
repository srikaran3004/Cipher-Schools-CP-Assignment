#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

long long countTrips(const vector<int>& time, long long t) {
    long long total = 0;
    for (int i = 0; i < time.size(); i++) {
        total += t / time[i];
    }
    return total;
}

long long minimumTime(vector<int>& time, long long totalTrips) {
    long long low = 1, high = *max_element(time.begin(), time.end()) * totalTrips;
    long long result = high;

    while (low <= high) {
        long long mid = low + (high - low) / 2;
        if (countTrips(time, mid) >= totalTrips) {
            result = mid;
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    return result;
}

int main() {
    vector<int> time1 = {1, 2, 3};
    int totalTrips1 = 5;
    cout << minimumTime(time1, totalTrips1) << endl;  

    vector<int> time2 = {2};
    int totalTrips2 = 1;
    cout << minimumTime(time2, totalTrips2) << endl;  

    return 0;
}
