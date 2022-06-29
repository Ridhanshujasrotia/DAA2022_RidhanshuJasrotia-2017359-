#include <iostream>
using namespace std;

void binSearch(int a[], int n, int key)
{
	int ctr = 0;
	int hd = 0;
	int tl = n-1;
	int mid;
	bool flag = true;

	while(hd<=tl)
	{
		mid = (hd+tl)/2;
		ctr++;

		if(a[mid]==key)
		{
			cout<<"Present "<<ctr<<endl;
			flag=false;
			break;
		}

		else if(a[mid]<key)
			hd=mid+1;

		else
			tl=mid-1;
	}
	if(flag)
		cout<<"Not Present "<<ctr<<endl;
}

int main ()
{
	int i;
	int n;
	int t;
	int key;

	cin>>t;
	
	while(t--)
	{
		cin>>n;
		int a[n];

		for(i=0;i<n;i++)
			cin>>a[i];

		cin>>key;

		binSearch(a, n, key);
	}
	return 0;
}
