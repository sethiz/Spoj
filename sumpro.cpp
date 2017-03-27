#include<iostream>
using namespace std;
int main(){

    long long int t,n,i,sum=0;
    cin >> t;
    while(t--){

        cin >> n;
        for(i=1;i<=n;i++){

            sum = sum + i*(n/i);
        }
        cout << sum << endl;
    }
}
