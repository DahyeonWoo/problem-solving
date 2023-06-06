#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
	
    int N;
    vector<int> arr;

    cin >> N;
    for (int i = 1; i <= N; i++) {
        arr.push_back(i);
    }

    do {
       for (int i = 0; i < N; i++)
            cout << arr[i] << ' ';
        cout << '\n';
    } while (next_permutation(arr.begin(), arr.end()));
}
