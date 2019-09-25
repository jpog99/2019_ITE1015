#include <iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	int* array = new int[n]; 

	for(int i=0 ; i<n ; i++){
		array[i] = i;
		cout << array[i] << " ";
	}	
	cout << endl;
	
	delete[] array;
	return 0;
}
