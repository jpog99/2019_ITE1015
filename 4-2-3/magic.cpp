#include <iostream>
using namespace std;

void magicSquare(int** arr,int n){
        //setting all element to 0
	for (int i=0 ; i<n ; i++){
                for (int j=0 ; j<n ; j++){
                        arr[i][j] = 0;
                }
        }
	//adding first number at top middle
        int i = 0;
        int j = n/2;
        for (int num=1 ; num<=n*n;){
                if ((i<0 && j>= n)){
                  i+=2;
                  j--;}
                else if (i<0)
                  i += n;
                else if (j>n-1)
                  j = 0;
                else if (arr[i][j] != 0){
                  i+=2;
                  j-=1;}
                //adding number to position  
                arr[i][j] = num++;
                i--,j++;
        }
}

int main(){
        int n;
        cout << "Enter odd integer >2" << endl;
        cin >> n;
	//terminate program if n is even number or <3
	if (n%2 == 0 || n==1)
		exit(0);
	//creating dynamic 2d array
        int** arr = new int*[n];
        for (int i=0 ; i<n ; i++)
                arr[i] = new int[n];
	//passing 2Darray to function
        magicSquare(arr,n);
	//print result
        for (int i=0 ; i<n ; i++){
          for(int j=0 ; j<n ; j++)
            cout << arr[i][j] << " ";
          cout << endl;
        }
        //deleting dynamic array
        for (int i=0 ; i<n ; i++)
                delete[] arr[i];
        delete[] arr;
        return 0;
}
