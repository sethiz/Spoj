#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){

    int a,req,i,f,temp,j,l,no;
    vector<int> s;
    cin >> a;
    for(j=1;j<=a;j++){
        l=0;
        no=0;
        cin >> req >> f;
        for(i=0;i<f;i++){
            cin >> temp;
            s.push_back(temp);
        }
        sort(s.begin(),s.end());
        //reverse(s.begin(),s.end());
        for(i=s.size()-1;i>=0;i--){
            if(l<req){
                l+= s[i];
                no++;
            }else break;
        }
        cout << "Scenario #" << j << ":\n";
        if(l>=req){
            cout << no<<endl;
        }else{
            cout << "impossible" << endl;
        }
        s.clear();
    }
}
