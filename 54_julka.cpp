#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
using namespace std;
                vector<int> vect (string &a)
{
int c=a.length();
vector<int> v;
for(int i=0;i<c;i++)
{
  v.push_back((a[i]-'0'));
}
return(v);
}
                  vector<int> sum(vector<int> a,vector<int> c)
      {
    int carry=0,s;
    vector<int> sum;
    reverse(a.begin(),a.end());
    reverse(c.begin(),c.end());
    int i=0;
    while((i<a.size())&&(i<c.size()))
    {
        s=a[i]+c[i]+carry;
            carry=s/10;
            s=s%10;
        sum.push_back(s);
        i++;
    }
    if(i>=c.size())
    {
        while(i<a.size())
        {
        s=a[i]+carry;
    carry=s/10;
    s=s%10;
        sum.push_back(s);
        i++;
    }
    }
    else
        if(i>=a.size())
    {
        while(i<c.size())
        {
        s=c[i]+carry;
        carry=s/10;
        s=s%10;
        sum.push_back(s);
        i++;
    }
    }
    if(carry!=0)
        sum.push_back(carry);
        reverse(sum.begin(),sum.end());
        return (sum);
}

       vector<int> sub(vector<int> a,vector<int> b)
{
    vector<int> sub;
    int i=0,d;
    vector<int> e=a;
    reverse(a.begin(),a.end());
    reverse(b.begin(),b.end());
    while(i<b.size())
    {
        if((a[i])<b[i])
        {
            d=a[i]+10-b[i];
            int j=1;
            while(a[i+j]==0)
                a[i+j++]=9;
            a[i+j]=a[i+j]-1;
       }
       else
       {
       d=a[i]-b[i];
       }

       sub.push_back(d);
       i++;
       }
       while(i<a.size())
       sub.push_back(a[i++]);
       int k=sub.size()-1;
       while(k>0)
       {
       if(sub[k--]==0)
        sub.pop_back();
        else
            break;
       }
       cout<<"\n";
       reverse(sub.begin(),sub.end());
       return(sub);
}

           vector<int> div(vector<int> a)
        {
        vector<int> b;
        int x=0;
        int carry=0;
        for(int i=0;i<a.size();i++)
              {
              x=carry*10+a[i];
              carry=x%2;
              x=x/2;
              b.push_back(x);
              }
        reverse(b.begin(),b.end());
        int k=b.size()-1;
        while(b[k]==0&&k>0)
        {
            b.pop_back();
            k--;
        }
        reverse(b.begin(),b.end());
        return (b);
        }


int main()
   {
   int n=10;
   string a,b;
   while(n--)
    {
    cin>>a;
    cin>>b;
    vector<int> m=div(sum(vect(a),vect(b)));
    vector<int> n=div(sub(vect(a),vect(b)));
    for(int i=0;i<m.size();i++)
        cout<<m[i];
        cout<<"\n";
     for(int i=0;i<n.size();i++)
        cout<<n[i];
        cout<<"\n";
    }

   }
