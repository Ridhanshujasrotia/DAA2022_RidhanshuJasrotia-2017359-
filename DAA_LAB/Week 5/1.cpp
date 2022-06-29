#include <bits/stdc++.h>
#include <string>
using namespace std;

void csort(string s)
{
    int n=s.length();
    char arr[n];
    int x=0;
    int count[26];

    memset(arr,0,sizeof(arr));
    for(auto i:s)
    {
        arr[x++]=i;
    }
    memset(count,0,sizeof(count));
    for(int i=0;i<n;i++)
        count[arr[i]-'a']++;

    char l='a';
    int num=0;
    for(int i=0;i<26;i++)
    {
        if(num<count[i])
        {
            num=count[i];
            l=l+i;
        }
    }
    if(num<=1)
        cout<<"No Duplicates Present"<<endl;
    else
        cout<<l<<" - "<<num<<endl;
}
int main()
{
    string s;
    cin>>s;
    csort(s);
    return 0;
}
