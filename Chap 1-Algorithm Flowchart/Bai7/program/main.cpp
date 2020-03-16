#include <iostream>

using namespace std;

int main()
{
    int n;
    float s=0;
    do
    {
        cout<<"nhap so duong n: ";
        cin>>n;
    }
    while(n<=0);
        for (int i=1;i<=n;i++)
    {
        s=s+(i/(i+1.0));
    }
    cout<<"\ns = "<<(float)s;
    return 0;
}
