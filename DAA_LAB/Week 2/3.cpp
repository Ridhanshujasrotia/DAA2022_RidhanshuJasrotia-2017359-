#include <iostream>
using namespace std;

int main()
{
    int i, j, k;
    int n;
    int count=0;
    int t;
    cin>>t;

    while(t--){
        cin>>n;

        int arr[n];
        for(i=0;i<n;i++)
            cin>>arr[i];

        cin>>k;

        for(i=0;i<n;i++){
            for(j=1; j<n; j++)
                if(arr[j]-arr[i]==k)
                        count++;
        }
        cout<<count<<" pairs found";
    }
    return 0;
}
