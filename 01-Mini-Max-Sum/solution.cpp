#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<long long> arr(5);

    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end());

    long long minSum = arr[0] + arr[1] + arr[2] + arr[3];
    long long maxSum = arr[1] + arr[2] + arr[3] + arr[4];

    cout << minSum << " " << maxSum << endl;

    return 0;
}
