#include <stdio.h>
#include <algorithm>
using namespace std;
/*
Given an array of integers, return true if there are duplicates, otherwise return false.

input: [1, 2, 3, 4, 5]
output: false

input: [1, 2, 3, 4, 5, 5]
output: true

input: [1, 2, 3, 4, 4, 5]
output: true

input: [1, 2, 3, 4, 5, 6]
output: false

input: [1, 2, 3, 4, 5, 6, 6]
output: true
*/
int main() {
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    sort(arr, arr+n);
    for(int i = 1; i < n; i++){
        if(arr[i] == arr[i-1]){
            cout << "true" << endl;
            return 0;
        }
    }
    cout << "false" << endl;
    return 0;
}
