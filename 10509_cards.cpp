#include<iostream>
using namespace std;
int main(){

    int a;
    long long int n,card;
    cin >> a;
    while(a--){

        cin >> n;
        card = (3*(n*(n+1))/2)-n;
        card = card%1000007;
        cout << card << endl;
    }
}
