#include<iostream>
using namespace std;

int main()
{
    bool flag=0;
    int i, j, k;
    int t;
    cin>>t;

    while(t--){

        int n;
        cin>>n;
        int arr[n];
        for(i=0; i<n; i++)
            cin>>arr[i];

        for(i=0,j=i+1; i<n, j<n; i++,j++){
            for(k=0;k<n;k++){
                if(arr[i]+arr[j]==arr[k]){
                    cout<<arr[i]<<" + "<<arr[j]<<" = "<<arr[k]<<endl;
                    flag=1;
                }
            }
        }

        if(flag==0)
            cout<<"No Sequence found";

    }
    return 0;
}
