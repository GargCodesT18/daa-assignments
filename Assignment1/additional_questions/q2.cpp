#include<bits/stdc++.h>
using namespace std ;

int main() {
    int n ;
    cin >> n ;

    vector<int>arr(n);

    for(int i = 0 ; i<n ; i++) {
        cin >> arr[i] ;
    }

    sort(arr.begin() , arr.end()) ;

    int left = 0 ;

    int max_len = 0 ;

    for(int i = 0 ; i<n ; i++) {
        while(arr[i] - arr[left] > 10) {
            left++ ;
        }

        int curr_len = i - left + 1 ;
        if(curr_len > max_len) {
            max_len = curr_len ;
        }
    }

    cout << max_len ;
}