#include <iostream>

using namespace std;

int main()
{
    int n;
    float s=0;
    cout<<"nhap so duong n: ";
    cin>>n;
    for (int i=1; i<=n;i++)
    {

    s=s+1.0/i;

    }
    cout <<"\ns = "<<s ;
    return 0;
}
