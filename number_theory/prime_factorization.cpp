#include <bits/stdc++.h>
using namespace std;

vector<int> primeFactors;

void primeFactorization(int n) {    // finds all the prime factors of the integer n
    while(n % 2 == 0) {
        primeFactors.push_back(2);
        n /= 2;
    }

    for(int i=3; i<= sqrt(n); i+=2) {
        while(n % i == 0) {
            primeFactors.push_back(i);
            n /= i;
        }
    }

    if(n > 2) {                     // checks if n was originally a prime number greater than 2
        primeFactors.push_back(n);
    }
}
