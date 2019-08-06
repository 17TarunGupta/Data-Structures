#include<iostream>
using namespace std;
int main()
{
    int m[10] , i;
    cout<<"Enter Ten Numbers "<<endl;
    for(i=0;i<10;i++)
    {
        cout<<i+1<<" Number is: ";
        cin>>m[i];
    }
    int *adr[10];
    for(i=0;i<10;i++)
    {
        adr[i]= &m[i];
        cout<<"Address of "<<m[i]<<" is = "<<adr[i]<<endl;
    }
    int p,n,yes;
    do
    {
    cout<<"Enter the Place of that location where you want to Enter Data:";
    cin>>p;
    cout<<"Now Enter your new data number:";
    cin>>n;
    m[p-1]=n;
    cout<<"Do you want to change another place's data(y/n): ";
    cin>>yes;
    }
    while(yes=='y');
    cout<<"New Array"<<endl;
    for(i=0;i<10;i++)
    {
    cout<<m[i]<<endl;
    }
    return 0;
}
