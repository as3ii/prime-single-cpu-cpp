#include <iostream>
#include <iomanip>
#include <cmath>
#include "lib.h"
using namespace std;

long long int* createArray() {
    long long int* array;
    array = new long long int[DIM];
    return(array);
}

void deleteArray(long long int* array) {
    delete [] array;
}

bool isPrime(const long long int n, long long int array[], int& dim){
    bool res = true;
    long double sqrtn = sqrt(n);
    if(n<2)
        res = false;
    else if(n<4)
        res = true;
    else if(n%2==0)
        res = false;
    else{
        for(int i=0; (i<dim)&&(i<=sqrtn)&&(res==true); i++)
            if(array[i]!=0 && array[i]!=1 && n%array[i]==0)
                res = false;
    }
    return(res);
}

void calcPrime(const long long int start, const long long int stop, long long int array[], int& dim) {
    long long int var = start;
    int i = 0;
    bool brk=true;
    while((var<stop) && (brk==true)){
        if(isPrime(var,array,i)) {
            array[i] = var;
            i++;
        }
        var++;
        if(i >= (DIM-1)) brk=false;
    } 
    dim = i;
}

void printArray(const long long int array[], const int dim) {
    cout << "\n";
    for(int i=0; i<dim; i++) {
        cout << setw(12) << array[i];
    }
    cout << endl;
}
