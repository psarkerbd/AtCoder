#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    int n , a , b , x , i;

    while(cin >> n >> a >> b)
    {
        int cnt=0;

        for(i=0; i<n; i++)
        {
            cin >> x;

            if(x<a)cnt++;
            if(x>=b)cnt++;
        }

        cout << cnt << "\n";
    }

    return 0;
}
