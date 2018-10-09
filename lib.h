#ifndef CALC_PRIME_H
#define CALC_PRIME_H

#include <iostream>
#include <iomanip>
#include <cmath>
#include <climits>
using namespace std;

const int DIM = INT_MAX;

//if n is prime, return true
bool isPrime(const long long int,long long int*, int&);

//calculate pirme numbers
void calcPrime(const long long int, const long long int, long long int*, int&);

//print array
void printArray(const long long int*, const int);

//create result array
long long int* createArray();

//delete result array
void deleteArray(long long int*);

#endif
