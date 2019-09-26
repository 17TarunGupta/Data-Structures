#include<iostream>
using namespace std;
int n;
void insert_item(int *la,int size,int k,int data)
{
    int i=0,j=size;
    cout<<"\nThe original Array Elements are\t";
    for(i;i<size;i++)
        cout<<la[i]<<" ";
    size=size+1;
    while(j>=k)
    {
        la[j+1]=la[j];
        j=j-1;
    }
    la[k-1]=data;
    cout<<"\nArray elements after insertion:\t";
        for(i=0;i<size;i++)
        cout<<la[i]<<" ";
}
void delete_item(int *la, int size, int k)
{
    int i,j;
    cout<<"\nThe original array Elements are:\t";
    for(i=0;i<size;i++)
        cout<<la[i]<<" ";
    for(j=k;j<size;j++)
        la[j]=la[j+1];
    size=size-1;
    cout<<"\nThe array elements after deletion:\t";
    for(i=0;i<size;i++)
        cout<<la[i]<<" ";
}
int binary_search(int arr[],int l,int r,int x)
{
    if(r<l)
        return -1;
    int mid=(l+r)/2;
    if(x==arr[mid])
        return mid+1;
    if(x>arr[mid])
        return binary_search(arr,mid+1,r,x);
    return binary_search(arr,l,mid-1,x);
}
int linear_search(int arr[],int data)
{
    int index = -1;
    for(int i = 0;i<n;i++)
   {
       if(data == arr[i])
        {
         index = i+1;
         break;
        }
   }
   if (index==-1)
    {cout<<"Item not found.";
    return index;}
   else
	return index;
}
void bubble_sort(int *arr,int size)
{
    for(int i=0;i<size-1;i++)
    {
        for(int j=0;j<size-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int t=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=t;
            }
        }
    }
    cout<<"\nArray after bubble sort:\t";
    for(int i=0;i<size;i++)
    cout<<arr[i]<<" ";
}

int main()
{
    cout<<"Enter size of Array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter elements of Array: ";
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cout<<"Enter the operation code to be applied on this Array: "<<endl
    <<"Insertion(a), Deletion(b), Binary search(c), Linear search(d), Bubble sort(e).";
    char code; cin>>code;
    switch(code)
    {
    case'a':
        cout<<"Enter the data to be inserted and its place:";
        int data,k; cin>>data>>k;
        insert_item(arr,n,k,data);

    case'b':
        cout<<"Enter that item's place which you want to delete:";
        cin>>k;
        delete_item(arr,n,k);

    case'c':
        cout<<"Enter the item for search:";
        int x; cin>>x;
        cout<<"index: "<<binary_search(arr,arr[0],n,x);

    case'd':
        cout<<"Enter the item for search:";
        cin>>x;
        cout<<"Index: "<<linear_search(arr,x);


    case'e':
        bubble_sort(arr,n);
    }
}
