#include<iostream>
#include<string>
using namespace std;

typedef struct{
	string name;
	double score;
}Person;

int main(int argc , char **argv){
	int a=1;
	int n = (argc - 1)/2;
	Person* p = new Person[n];
	for (int i=0 ; i<n ; i++){
		p[i].name = argv[a++];
		p[i].score = atof(argv[a++]);
		cout <<"Name: " << p[i].name << ", Score: " << p[i].score <<endl;
	}
	delete[] p;
	return 0;
	
}
