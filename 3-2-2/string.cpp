#include <iostream>
using namespace std;

int main(){
	string str1,str2,contstr;
	cin >> str1 >> str2;
	contstr = str1 + str2;
	int a = contstr.length() - 1;

	cout << contstr << endl << contstr[0] << endl << contstr[a] << endl;

	return 0;
}

