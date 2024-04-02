//missing number

#include<bits/stdc++.h>
using namespace std;
long long miss_num(long long n, long long *arr){
    sort(arr, arr+n);
    long long mis = -1;
    for(long long i=0; i<n; i++){
        if(arr[i] != i+1){
            mis = i+1;
            return mis;
        }
    }
    return -1;
}
int main (){
    long long n;
    cin >> n;
    long long arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    cout << miss_num(n, arr);
}