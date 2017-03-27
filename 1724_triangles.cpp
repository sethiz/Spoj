#include <iostream>
using namespace std;

int main() {

	int a;
	long long int t,no;
	cin>>a;
    while(a--){
        cin >> no;
        t = (no*(no+2)*(2*no+1))/8;
        cout << t << endl;
    }
	return 0;
}
