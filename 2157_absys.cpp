#include<iostream>
#include<string>
using namespace std;
int main(){

    int a,i;
    string s1,s2,s3;
    char p ,e;
    long long int n1,n2,n3;
    cin >> a;
    while(a--){
        n1=0;
        n2=0;
        n3=0;
        cin >> s1 >> p >> s2 >> e >> s3;
        for(i=0;i<s1.length();i++){
            n1 = n1*10 + (s1[i]-'0');
            if(s1[i]=='m'){
                n1=0;
                break;
            }
        }
        for(i=0;i<s2.length();i++){
            n2 = n2*10 + (s2[i]-'0');
            if(s2[i]=='m'){
                n2=0;
                break;
            }
        }
        for(i=0;i<s3.length();i++){
            n3 = n3*10 + (s3[i]-'0');
            if(s3[i]=='m'){
                n3=0;
                break;
            }
        }
        if(n1==0){
            n1 = (n3-n2);
        }
        else if(n2==0){
            n2 = (n3 - n1);
        }
        else{
            n3 = (n1 + n2);
        }
        cout << n1 << " + " << n2 << " = " << n3 << endl;
    }
}
