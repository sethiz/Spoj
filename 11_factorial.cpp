#include <iostream>
using namespace std;

int main()
{
    int n, x, c;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> x;
        c = 0;
        for(int j = 5; j <= x; j *= 5)
            c +=  x / j;
        cout << c << endl;
    }
}
