#include<iostream>
using namespace std;
long long int n;
long long int func(long long int n){

    if(n==0 || n%2!=0)
        return 0;
    else if(n==1)
        return 1;
    else if(n==2)
        return 2;
    else
        return (2+func(n/2));
}
int main(){

    cin >> n;
    cout << func(n);

}
