#include <iostream>
using namespace std;

void sSort (int a[], int n){
    int i, j;
    int sml, pos;
    int comp=0;
    int swap=0;

    for(i=0;i<n;i++){
        pos=i;
        sml=a[i];
        for(j=i+1;j<n;j++){
            if(a[j]<sml){
                sml=a[j];
                pos=j;
            }
            comp++;
        }
        if(pos!=i){
            a[pos]=a[i];
            a[i]=sml;
            swap++;
        }
    }
    for(i=0;i<n;i++)
            cout<<a[i]<<" ";
    cout<<"\ncomparisions = "<<comp;
    cout<<"\nswaps = "<<swap<<endl;
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

        sSort(a, n);
    }
    return 0;
}
