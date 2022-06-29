#include<bits/stdc++.h>
using namespace std;
void merge(int a[],int l,int m,int h)
{
    int b[h+1];
    int i,j,k;
    i=l,j=m+1,k=l;
    while(i<=m&&j<=h)
    {
        if(a[i]<=a[j])
        {
            b[k]=a[j];
            j++;
        }
        else
        {
            b[k]=a[i];
            i++;
        }
        k++;
    }
    while(i<=m)
    {
        b[k]=a[i];
        k++;
        i++;
    }
    while(j<=h)
    {
        b[k]=a[j];
        k++;
        j++;
    }
    for(int i=l;i<=h;i++)
    {
        a[i]=b[i];
    }
}
void find(int a[],int l,int h,int key)
{
    int x=0;
    while(l<h)
    {
        if(a[l]+a[h]>key)
        {
            h--;
        }
        else if(a[l]+a[h]<key)
        {
            l++;
        }
        else
        {
            cout<<a[l]<<","<<a[h]<<endl;
            l++;
            h--;
            x++;
        }
    }
    if(x==0)
    {
        cout<<"no such pair exist";
    }
}
void msort(int a[],int l,int h)
{
    if(l<h)
    {
        int p=(l+h)/2;
        msort(a,l,p);
        msort(a,p+1,h);
        merge(a,l,p,h);
    }
}
int main()
{
    int x;
    cout<<"enter number of elements : ";
    cin>>x;
    int arr[x];
    for(int i=0;i<x;i++)
    {
        cin>>arr[i];
    }
    msort(arr,0,x-1);
    int y;
    cout<<"enter key : ";
    cin>>y;
    find(arr,0,x-1,y);
    return 0;
}
