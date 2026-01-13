#include<bits/stdc++.h>
using namespace std ;

int binarsea(int arr[] , int n , int target){
    int low = 0 ;
    int high = n - 1 ;

    while(low <= high) {
        int mid = low + (high - low)/2 ;

        if(arr[mid] == target) {
            return mid ;
        }
        else if(arr[mid] < target) {
            low = mid + 1 ;
        }
        else{
            high = mid - 1 ;
        }
    }

    return -1 ;
}

int main() {

    int arr[] = {2, 5, 8, 12, 16, 23, 38, 56, 72, 91} ;
    int n = sizeof(arr)/sizeof(arr[0]) ;

    int result = binarsea(arr , n , 23) ;

    if(result == -1) {
        cout << "element is not found " << endl ;
    }
    else{
        cout << " found at " << result << endl ;
    }
}