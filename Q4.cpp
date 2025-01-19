#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> vec;
    int n, element, choice;

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> element;
        vec.push_back(element);
    }

    for (int elem : vec) {
        cout << elem << " ";
    }

    cin >> choice;
    if (choice == 1) {
        cin >> element;
        vec.push_back(element);

        for (int elem : vec) {
            cout << elem << " ";
        }
    }

    return 0;
}
