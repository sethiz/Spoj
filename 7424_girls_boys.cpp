#include<iostream>
using namespace std;
int main(){

    int a,b,res=0;
    while(1){

        cin >> a >> b;
        if((a==-1)&&(b==-1)){
            break;
        }
        else if(a==b){
            if(a==0)
                cout << 0;
            else
                cout << 1;
        }
        else if(a==0){
            cout << b;
        }
        else if(b==0){
            cout << a;
        }
        else if(a>b){
            if(a%(b+1)==0){
                res = a/(b+1);
            }
            else{
                res = a/(b+1) + 1;
            }
            cout << res;
        }
        else if(b>a){
            if(b%(a+1)==0){
                res = b/(a+1);
            }
            else{
                res = b/(a+1) + 1;
            }
            cout << res;
        }
        cout << endl;
    }
}
