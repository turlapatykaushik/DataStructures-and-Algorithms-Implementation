#include<iostream>
using namespace std;
int main()
{
    int t;
    long int xy,n,sums;
    cin>>t;
    while(t)
    {
        cin>>n;
        sums=0;
        while(n)
        {
            xy=n/5;
            n=xy;
            sums+=xy;
        }
        cout<<sums<<'\n';
        t--;
    }
    return 0;
}
