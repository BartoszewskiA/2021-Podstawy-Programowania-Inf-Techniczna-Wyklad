#include <iostream>

using namespace std;

int main()
{
    int n;
    double y, s=0;
    cout<<"n=";
    cin>>n;
    for(int x=0; x<=n; x++)
    {
        if (x==5) continue;
        y = (double)(x*x)/(x-5);
        s=s+y; 
    }
    cout<<"s="<<s;
    return 0;
}
