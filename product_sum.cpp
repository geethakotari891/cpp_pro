//product sum using time complexity n

#include <iostream>
using namespace std;

long long product_sum(long long n1, long long *A, long long n2, long long *B){
    long long sum1 = 0;
    long long sum2 = 0;
    for(long long i=0; i<n1; i++){
        sum1 += A[i];
    }
    for(long long j=0; j<n2; j++){
        sum2 += B[j];
    }
    return sum1 * sum2;
}
int main() {
    long long n1;
    cin >> n1;
    long long A[n1];
    for(long long i=0; i<n1; i++){
        cin >> A[i];
    }
    long long n2;
    cin >> n2;
    long long B[n2];
    for(long long j=0; j<n2; j++){
        cin >> B[j];
    }
    cout << product_sum(n1, A, n2, B);
}