#include<iostream>
using namespace std;
int main(){
    int a[10010],n,cnt;
    long long int sum,mean;
    while(1){
        cin >> n;
        sum=0;
        cnt=0;
        if(n == -1) break;
        for(int i=0;i<n;i++){
            cin >> a[i];
            sum = sum + a[i];
        }
        if((sum%n)!=0){
            cout << "-1" << endl;
            continue;
        }else{
            mean = sum / n;
        }
        for(int i=0;i<n;i++){
            if(a[i]>mean) cnt += a[i]-mean;
            else continue;
        }
        cout << cnt << endl;
    }

}
