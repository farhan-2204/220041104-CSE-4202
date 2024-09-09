#include <bits/stdc++.h>

using namespace std;
//#define int long long
#define mod 1000000007

int main()
{
    int a, b, c, d;
    char temp;

    cout<<"Enter First Fraction: ";
    cin>>a>>temp>>b;
    cout<<"Enter Second Fraction: ";
    cin>>c>>temp>>d;

    cout<<"Sum = "<<(a*d + b*c)<<"/"<<(b*d)<<"\n";

    return 0;
}
