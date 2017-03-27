#include<iostream>
#include<math.h>
using namespace std;

int main(){

    int a,sum,no,b;
    cin >> a;
    while(a--){
        cin>>no;
        b=sqrt(no)+1;
        sum=0;
        for(int i=1;i<b;i++){
            if(no%i==0){
               if(i*i!=no)
                {
                    sum = sum+i+no/i;
                }
                else{
                    sum = sum+i;
                }
            }}
        cout << sum-no << endl;
    }
    return 0;
}
