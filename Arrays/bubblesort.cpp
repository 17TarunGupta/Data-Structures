#include<iostream>
using namespace std;
void bubble_sort(int *arr,int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int t=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=t;
            }
        }
    }
    cout<<"Array after Bubble sort:"<<endl;
    for(int i=0;i<n;i++)
        cout<<arr[i]<<endl;
}
int main()
{
    int a[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(a)/sizeof(a[0]);
    bubble_sort(a, n);
    return 0;
}
