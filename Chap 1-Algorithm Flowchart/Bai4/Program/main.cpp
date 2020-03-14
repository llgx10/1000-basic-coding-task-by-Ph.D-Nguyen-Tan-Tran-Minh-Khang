#include <iostream>

using namespace std;

int main()
{
    float s=0;
    int n;
     do
        {
            cout <<" nhap so duong n: ";
            cin>>n;
         }
         while (n<=0);
    for(int i=1;i<=n;i++)
    {
        s=s+(1.0/(2*i));
    }
    cout<<"\ns= " <<s;
    return 0;
}
