#include <iostream>
using namespace std;

void sort_num(int* arr,int size){
        for (int i=0 ; i<(size-1) ; i++){
                for (int j=0 ; j<(size-i-1) ; j++){
                        if (arr[j] > arr[j+1] ){
                                int temp = arr[j];
                                arr[j] = arr[j+1];
                                arr[j+1] = temp;
                        }
                }
        }
}

int main(){
        int size;
	cout << "Enter size of array " << endl;
        cin >> size;
        if (size <= 0){
                exit(0);}

        int* arr = new int[size];

        cout << "Enter any " << size << " integers." << endl;
        for (int i=0 ; i<size ; i++){
                cin >> arr[i];
        }

        sort_num(arr,size);
	
	cout << "Increasing order array is:" <<endl;
        for (int i=0 ; i<size ; i++){
                cout << arr[i] << " ";}
        cout << endl;

        delete[] arr;
        return 0;

}

