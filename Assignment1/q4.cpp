#include<bits/stdc++.h>
using namespace std ;

// Kadane's algorithm

int maxsubarray(int arr[] , int n) {
    int sum = 0 ;
    int maxsum = arr[0] ;

    for(int i = 1 ; i<n ; i++) {
        sum += arr[i] ;
        if(sum > maxsum) {
            maxsum = sum ;
        }

        if(sum < 0) {
            sum = 0 ;
        }
    }

    return maxsum ;

}

int main() {

    int arr[] = {-2, -5, 6, -2, -3, 1, 5, -6} ;

    int n = sizeof(arr) / sizeof(arr[0]) ;
    int res = maxsubarray(arr , n ) ;

    cout << res ;
}