#include<bits/stdc++.h>
using namespace std ;

void merge(int arr[] , int low , int high) {
    int mid = low + (high - low)/2 ;

    int left = low ;
    int right = mid +1 ;

    int temp[high - low +1] ;
    int idx = 0 ;

    while(left <= mid && right <= high) {
        if(arr[left] <= arr[right]) {
            temp[idx] = arr[left] ;
            idx++ ;
            left++ ;
        }
        else{
            temp[idx] = arr[right] ;
            idx++ ;
            right++ ;
        }
    }

    while(left <= mid) {
        temp[idx] = arr[left] ;
        idx++ ;
        left++ ;
    }

    while(right <= high) {
        temp[idx] = arr[right] ;
        idx++ ;
        right++ ;
    }

    for(int i = low ; i<=high ; i++) {
        arr[i] = temp[i - low] ;
    }
}

void mergesort(int arr[] , int low , int high) {

    if(low >= high) {
        return ;
    }
    
    int mid = low + (high - low)/2 ;

    mergesort(arr , low , mid) ;
    mergesort(arr , mid+1 ,high) ;

    merge(arr , low , high) ;
}

int main() {

    int arr[] = {12, 11, 13, 5, 6, 7} ;
    int n = sizeof(arr)/sizeof(arr[0]) ;

    mergesort(arr , 0 , n-1 ) ;

    for(int i = 0 ; i<n ; i++) {
        cout << arr[i] << " " ;
    }
}