#include <iostream>

using namespace std;

int main()
{
    int s=0,n;
    cout<<"Nhap so duong n: ";
    cin>>n;
    for(int i=0;i<=n;i++)
    {
        s=s+i*i;
    }
    cout<<"\ns= " <<s;
    return 0;
}
