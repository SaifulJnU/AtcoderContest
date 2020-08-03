#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k;
    cin>>k;
    int rem = 0,m;
    for(int i=1; i<=1e6; i++)
    {
        long long int s = rem*10+7;

        rem = s%k;
        if(rem==0)
        {
            m = i;
            break;
        }

    }
    if(rem!=0)
        cout<<"-1\n";
    else
        cout<<m<<endl;

return 0;
}
