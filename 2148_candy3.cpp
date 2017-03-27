#include<iostream>
using namespace std;
int main(){
    int b,n;
    long long int sum, a[1000000];
    cin >> b;
    while(b--){
        cin >> n;
        sum=0;
        for(int i=0;i<n;i++){
            cin >> a[i];
            sum = (sum + a[i])%n;
        }
        if(sum!=0){
            cout << "NO" << endl;
        }
        else{
            cout << "YES" << endl;
        }
    }
}
