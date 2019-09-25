#include <iostream>
using namespace std;

int main(){
	int size,n,temp;
	cin >> size;
	int* array = new int[size];

	//filling array
	for(int i=0 ; i<size ; i++){
		cin >> n;
		array[i] = n;
	}

	//bubble sort
	for(int i=0 ; i<(size-1) ; i++){
		for (int j=0 ; j<(size-i-1) ; j++){
			if (array[j] > array[j+1]){
				temp = array[j];
				array[j] = array[j+1];
				array[j+1] = temp;
			}
		} 
	}
		
	cout << "Min: " << array[0] << endl << "Max: " << array[size-1] << endl;
	delete[] array;
	return 0;
}
