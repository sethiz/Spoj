#include<iostream>
using namespace std;
int main(){

    int i,n=0,d;
    long long int series=0,a,l,s;
    cin >> i;
    while(i--){

        cin >> a >> l >> s;
        n = (s*2)/(a+l);
        d = (l-a)/(n-5);
        cout << n << endl;
        series = a - (2*d);
        for(int j=0;j<n;j++){

            cout << series << " ";
            series = series + d;

        }
    }
}
