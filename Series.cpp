#include <bits/stdc++.h>

using namespace std;

#define fast_io ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main () {

    fast_io;

    long long int num;
    cin >> num;

    long long int arr[num];

    for (int i=0; i<num; i++) {
        cin >> arr[i];
    }

    vector <int> v;

    for (int j=0; j<num; j++) {
        int x = abs(arr[j]-arr[j+1]);
        v.push_back(x);
    }

    long long int count = 0;

    for (int z=0; z<num-1; z++) {
        if (v[z] == v[z+1]) count++;
    }

    if (count == num-2) cout << abs(arr[0] - arr[1]) << endl;
    else cout << -1 << endl;
    
    return 0;

}