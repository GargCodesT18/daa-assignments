#include<bits/stdc++.h>
using namespace std ;

int main() {
    int n , k ;
    cin >> n >> k ;

    int arr[10000] ;

    for(int i = 0 ; i<n ; i++) {
        cin >> arr[i] ;
        cout << " " ;
    }

    int spec = 0 ;

    for(int i = 0 ; i<n ; i++) {
        int cnt = 0 ;

        for(int j = 0 ; j<n ; j++) {
            if(arr[j] > arr[i]) {
                cnt++ ;
            }
        }

        if(cnt >= k) {
            spec += arr[i] ;
        }
    }

    cout << spec << endl ;
    
}