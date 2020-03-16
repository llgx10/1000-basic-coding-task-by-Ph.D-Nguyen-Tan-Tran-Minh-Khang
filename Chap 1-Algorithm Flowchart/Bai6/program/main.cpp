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
        s=s+(1.0/(i*(i+1)));
    }
    cout<<"\ns = "<<s;
    return 0;
}
