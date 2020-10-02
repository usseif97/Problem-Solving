#include "CountPrimes.h"
#include <bits/stdc++.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;

CountPrimes::CountPrimes() {
	// TODO Auto-generated constructor stub

}

CountPrimes::~CountPrimes() {
	// TODO Auto-generated destructor stub
}

// Sieve of Eratosthenes Algorithm

int CountPrimes::countPriimes(int n) {
    return sieveOfEratosthenes(n);
}

int CountPrimes::sieveOfEratosthenes(int number){

    vector<int> prime(number + 1, 0);
    int count = 0;

    for(int p = 2; p * p <= number; p++){
        if(prime[p] == 0){
            for(int i = p * p; i <= number; i += p)
                prime[i] = 1;

        }
    }

    for(int i = 2; i <= number; i++){
        if(prime[i] == 0 && i != number)
            count++;
    }
    return count;
}

