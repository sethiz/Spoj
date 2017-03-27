#include<iostream>
using namespace std;
int main(){

    int a,g,m,god=0,mech=0,temp=0;
    cin >> a;
    while(a--){
        god=0;
        mech=0;
        cin >> g >> m;
        for(int i=0;i<g;i++){
            cin >> temp;
            if(temp>god)
                god=temp;
        }
        for(int i=0;i<m;i++){
            cin >> temp;
            if(temp>mech)
                mech=temp;
        }
        if(god>=mech){
            cout << "Godzilla\n";
        }
        else{
            cout << "MechaGodzilla\n";
        }
    }
}
