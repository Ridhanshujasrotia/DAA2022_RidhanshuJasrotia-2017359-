#include <iostream>
using namespace std;

void merge(int arr[], int l, int m, int r)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;
  
    int L[n1], R[n2];
    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];
    i = 0; 
    j = 0; 
    k = l; 
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        }
        else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

int mergeSort(int arr[], int l, int r)
{
    int flag=0;
    if (l < r) {
        
        int m = l + (r - l) / 2;
  
        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);
       
        merge(arr, l, m, r);
        
        for(int i = 0 ; i < r-1 ; i++){
            if(arr[i] == arr[i+1])
            {
                flag = 1 ;
                return flag ;
            }
            
        }
    }
}

int main()
{
    int i, t ,n ,k, c ;
    cin>>t;
    
    while(t--){
        cin>>n;
        int arr[n];
        
        for(i=0;i<n;i++)
            cin>>arr[i];
        
        c = mergeSort(arr, 0 , n-1) ;       
        if(c == 1)
            cout<<"YES"<<endl;
                
    else 
       cout<<"NO"<<endl;
    }
    return 0;
}
