#include <iostream>
using namespace std;

int add(int a, int b){
	return a+b;
}

string add(string a , string b){
	return a + "-" + b;
}

int main(){
	int a,b,sum;
	string s1,s2,s3;
	
	cin >> a >> b >> s1 >> s2;
	sum = add(a,b);
	s3 = add(s1,s2);

	cout << sum << endl << s3 << endl;
	return 0;
}
