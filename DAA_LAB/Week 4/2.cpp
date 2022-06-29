#include <iostream>
using namespace std;

int comp=0,swaps=0;

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

void quick_sort(int arr[],int lb,int ub)
{
    int pivot=arr[lb];
    int i=lb,j=ub;

    if (lb>=ub)
       return ;
    else{
        while (i<j)
        {
            comp++;
            while (pivot>=arr[i] && i<j)
                  i++;
            while (pivot<arr[j])
                  j--;
            if (i<j)
             swap(&arr[i],&arr[j]);
        }
        swaps++;
        swap(&arr[lb],&arr[j]);
        quick_sort(arr,lb,j-1);
        quick_sort(arr,j+1,ub);
    }
}


int main()
{
    int i, n, t;
    cin>>t;
    while (t--){
        cin>>n;
        int arr[n];
        for (i=0;i<n;i++)
           cin>>arr[i];
        quick_sort(arr,0,n-1);

        for (i=0;i<n;i++)
            cout<<arr[i]<<" ";

        cout<<"\nSwaps: "<<swaps<<endl;
        cout<<"Comparision: "<<comp<<endl;
    }
    return 0;
}
