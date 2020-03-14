#include <iostream>

using namespace std;

int main()
{
    int s=0,n;
     do
        {
            cout <<" nhap so duong n: ";
            cin>>n;
         }
         while (n<=0);
    for(int i=0;i<=n;i++)
    {
        s=s+i*i;
    }
    cout<<"\ns= " <<s;
    return 0;
}
