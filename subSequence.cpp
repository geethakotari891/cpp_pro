#include<bits/stdc++.h>
using namespace std;
int main (){
    int n;
    cin >> n;
    vector <int> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    for(int i=0; i<(1<<n); i++){
        for(int j=0; j<n; j++){
            int mask = (1<<j);
            if((i & mask) > 0){
                cout << arr[j] << " ";
            }
        }
        cout << endl;
    }
}