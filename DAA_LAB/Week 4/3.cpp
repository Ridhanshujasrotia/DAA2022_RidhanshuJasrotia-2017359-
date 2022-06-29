#include <iostream>
using namespace std;

void merge(int arr[],int l,int mid,int h)
{
    int count=0;
    int i=l,j=mid+1;
    int temp[h-l+1];
    int k=0;
    
    while (i<=mid && j<=h){
        if (arr[i]<arr[j])
            temp[k++]=arr[i++];
        else
        {
            temp[k++]=arr[j++];
            count+=mid-i+1;
        }
    }
    for (;i<=mid;)
         temp[k++]=arr[i++];
         
    for (;j<=h;)
         temp[k++]=arr[j++];
         
    for (int f=0;f<k;f++)
        arr[f+l]=temp[f];
}

void merge_sort(int arr[],int l,int h)
{
    int mid;
    if (l<h){
        mid=l+(h-l)/2;
        merge_sort(arr,l,mid);
        merge_sort(arr,mid+1,h);
        merge(arr,l,mid,h);
    }
}

int main()
{
    bool flag;
    int i, n, t, k;
    cin>>t;
    while (t--)
    {
        cin>>n;
        int a[n];
        for (i=0;i<n;i++)
           cin>>a[i];
        
        cin>>k;

        merge_sort(a,0,n-1);
        flag=0;
        cout<<a[k]<<endl; 
    }
}
