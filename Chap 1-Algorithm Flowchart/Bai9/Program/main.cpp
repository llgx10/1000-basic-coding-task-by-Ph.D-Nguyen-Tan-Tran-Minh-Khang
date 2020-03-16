#include <iostream>

using namespace std;

int main()
{
    int n;
    float p=1;
    do
    {
        cout<<"nhap so duong n: ";
        cin>>n;
    }
    while(n<=0);
        for (int i=1;i<=n;i++)
    {
        p=p*i;
    }
    cout<<"\np = "<<p;
    return 0;
}
