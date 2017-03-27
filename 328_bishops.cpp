#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<int> bishop;
vector<int> vect(string s){
    int a;
    vector<int> temp;
    for(int i=0;i<s.length();i++)
    {
        temp.push_back(s[i]-'0');
    }
    return temp;
}
vector<int> sum(vector<int> v){

    int temp,carry=0,flag = 0;
    vector<int> sum;
    reverse(v.begin(),v.end());
    for(int i=0;i<v.size();i++){

        temp = v[i] + v[i] + carry;
        carry = temp/10;
        temp = temp%10;
        sum.push_back(temp);

    }
    if(carry){
        sum.push_back(carry);
    }
    if(sum[0]>=2){
        sum[0] = sum[0] - 2;
    }else{
        sum[0]=8;
        for(int i=1;i<sum.size();i++){
            if(sum[i]==0){
                sum[i]=9;
            }else{
                sum[i]--;
                break;
            }
        }
    }
    if(sum[sum.size()]==0){
        sum.pop_back();
    }
    reverse(sum.begin(),sum.end());

    return sum;
}
int main(){

    string s;
    while(cin>>s){
        //cin >> s;
        bishop = vect(s);
        if((bishop[0]==1) && (bishop.size()==1)){
            //cout << bishop.size()<<endl;
            cout << "1";
        }
        else{
            bishop = sum(bishop);
            for(int i=0;i<bishop.size();i++)
                cout << bishop[i];
        }
        cout << endl;
        bishop.clear();
    }
}
