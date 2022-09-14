#include <iostream>
using namespace std;
int binarySearch (int arr[],int left, int right,int index){
    if (left < right) {
        int mid = (left + right)/2;
        if (arr[mid] == index) return mid;
        if (arr[mid] < index) return binarySearch(arr, mid + 1, right, index);
        if (arr[mid] > index) return binarySearch(arr, left, mid - 1, index);
    }
    return -1;
}
int main () {
    int n , s;
    cin >> n >> s;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    if (binarySearch(arr,0,n,s)>-1) {
        cout<<"YES";
    }
    else cout<<"NO";
    return 0;
}

Meoemeoemeoeoemome
ACBC