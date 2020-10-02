/*
 * CountPrimes.h (Easy)
 *
 *  Created on: Jul 4, 2020
 *      Author: Usseif
 */

#ifndef OTHERS_COUNTPRIMES_H_
#define OTHERS_COUNTPRIMES_H_
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <bits/stdc++.h>
using namespace std;

class CountPrimes {
public:
	CountPrimes();
	virtual ~CountPrimes();
	int countPriimes(int );
	int sieveOfEratosthenes(int );
};

#endif /* OTHERS_COUNTPRIMES_H_ */
