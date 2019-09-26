#include <iostream>
using namespace std;

struct Person{
       	string name;
      	int age;
};

int main(){
	int size,age;
	string name;
	cout << "Enter number of poeple"<<endl;
	cin >> size;
	Person* p = new Person[size];
	
	cout<<"Enter name and age:"<<endl;
	for (int i=0 ; i<size ; i++){
		cin >> p[i].name; 
		cin >> p[i].age;
	}

	for (int i=0 ; i<size ; i++){
		cout << "Name: " << p[i].name << " Age: " << p[i].age << endl;
	}

	delete[] p;
	return 0;

}
