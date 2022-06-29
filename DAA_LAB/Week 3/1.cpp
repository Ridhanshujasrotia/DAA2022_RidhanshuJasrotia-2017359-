#include <iostream>
using namespace std;

void iSort(int a[], int n)
{
    int i;
    int j;
    int curr;
    int comp=0;
    int shift=0;

    for(i=1;i<n;i++){
        j=i-1;
        curr=a[i];
        while((j>-1)&&(curr<a[j])){
            a[j+1]=a[j];
            j--;
            comp++;
            shift++;
        }
        a[j+1]=curr;
        shift++;
    }

    for(i=0;i<n;i++)
            cout<<a[i]<<" ";
    cout<<"\ncomparisions = "<<comp;
    cout<<"\nshifts = "<<shift<<endl;
}

int main ()
{
    int i, n, t;

    cin>>t;

    while(t--){
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
        cin>>a[i];

    iSort(a, n);
    }
    return 0;
}
