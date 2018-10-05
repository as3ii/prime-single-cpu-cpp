#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <cmath>
#include <thread>
#include <ctime>
#include "lib.h"
using namespace std;

int main(){
	time_t timeStart;
	long long int max;
	char show_res;
	cout << "Max number of results: " << DIM << endl;
	
	//max number
	cout << "Type the max number: ";
	cin >> max;
	if(max > DIM) {
		cout << "Max number too high ( > " << DIM << " ),\n"
			 << "Max number set to " << DIM << endl;
		max = DIM;
	}
	
	time(&timeStart);
	
	//allocate variables
	cout << "Creating dynamic variables... ";
	int dim;
	
	long long int* array;
	array = new long long int[DIM];
	cout << "Done" << endl;

    calcPrime(0,max,array,dim);
	
	//print result
	cout << "Do you want to see the result? [y/n] ";
	cin >> show_res;
	if(show_res=='y' || show_res=='Y') {
	    printArray(array, dim);
	}
	cout << " --- End! --- " << endl;
    
    //deallocate variables
    cout << "Deleting dynamic variables... ";
    deleteArray(array);
    cout << "Done!" << endl;
    cout << " --- Exit! --- " << endl;
	return(0);
}
