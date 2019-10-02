#include<iostream>
#include "minmax.h"
using namespace std;

int main(int argc, char** args){
	int n = argc-1;
	int* arr = new int[n];
	for (int i=0 ; i<n ; i++)
		arr[i] = atoi(args[i+1]);
	
	getMinMax(arr,n,arr[0],arr[n-1]);

	cout << "min: " << arr[0] << endl << "max: " << arr[n-1] << endl;

	delete[] arr;
	return 0;
}


