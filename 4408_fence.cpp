#include <iostream>
#include<iomanip>
using namespace std;

int main() {

	int a;
	cin>>a;
	float b=0;
	while(a!=0){
		b = (a*a)/(2.0*3.1415926);
		cout << setprecision(2)<<fixed << b << endl;
		cin>>a;
	}

	return 0;
}
