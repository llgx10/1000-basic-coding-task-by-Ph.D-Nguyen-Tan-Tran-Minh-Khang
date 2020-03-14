#include <iostream>

using namespace std;

int main()
{
    int S=0, n;
         do
        {
            cout <<" nhap so duong n: ";
            cin>>n;
         }
         while (n<=0);
    for (int i=0; i<=n; i++)
        {
            S+=i;
         }
    cout <<"\nS= "<< S;
    return 0;
}
