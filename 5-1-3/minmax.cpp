#include<iostream>
using namespace std;

void getMinMax(int* arr, int len, int& min, int& max){
	for(int i=0 ; i<(len-1) ; i++){
		for(int j=0 ; j<(len-i-1) ; j++){
			if(arr[j] > arr[j+1]){
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
	min = arr[0];
	max = arr[len-1];
}
