#include<bits/stdc++.h>
using namespace std;
int main()
{
   /// int arr[100000];
    long long int cnt=0;
    long long int n,d,p,q;
    long double sum=0,sum2=0;
    cin>>n>>d;
    for(int i=0;i<n;i++)
    {
        cin>>p>>q;
        sum=sqrt((p*p)+(q*q));
      //  int k=abs(sum);
        //arr[i]=sum;
        if(sum<=d)cnt++;
    }
  //  sort(arr,arr+n);
 cout<<cnt<<endl;


    return 0;
}
