#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;

        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];


        int key;
        cin>>key;

        int occur1=0,occur2=0,l=0, r=n;

        while(l<=r)
        {
            int mid = l + (r-l)/2;
            if(arr[mid]>key){
                r=mid-1;
            }
            else if(arr[mid]<key)
                l=mid+1;
            else
            {
                occur1=mid;
                occur2=mid;
                while(arr[occur1]==arr[mid])
                    occur1--;
                while(arr[occur2]==arr[mid])
                    occur2++;
                    break;
            }
        }

        cout<<key<<" - "<<((occur2-occur1)-1)<<endl;
    }
}
