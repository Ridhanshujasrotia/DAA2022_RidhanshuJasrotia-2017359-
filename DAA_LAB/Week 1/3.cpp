#include <iostream>
#include <cmath>
using namespace std;

void jSearch (int a[], int n, int key){
    int i=0;
    int x;
    int comp=0;
    int m=sqrt(n);

    while(a[m]<=key&&m<n){
        i=m;
        m+=sqrt(n);
        comp++;

        if(m>n-1)
            m=n;
    }

    for(x=i;x<m;x++){
        comp++;
        if(a[x]==key){
            cout<<"Present "<<comp<<endl;
            return;
        }

    }

    cout<<"Not Present"<<endl;
}

int main ()
{
    int i, n, t;
    int key;

    cin>>t;

    while(t--){
        cin>>n;
        int a[n];

        for(i=0;i<n;i++)
            cin>>a[i];

        cin>>key;

        jSearch(a, n, key);
    }
}
