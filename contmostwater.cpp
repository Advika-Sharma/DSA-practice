#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int maxwater = 0;
    int n[] = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    int size = sizeof(n) / sizeof(n[0]);

    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            int width = j - i;
            int ht = min(n[i], n[j]);
            int area = width * ht;
            maxwater = max(maxwater, area);
        }
    }

    cout << "Maximum water that can be stored: " << maxwater << endl;
    return 0;
}