#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int s=0;
    int on=n;
    
    while (n>0)
    {
        int ld=n%10;
        s+=pow(ld,3);
        n=n/10;
    }
    
    if (s==on)
    {
        cout<<"It is a armstrong number";
    }
    else
    {
        cout<<"It is not a armstrong number";
    }
    return 0;
}