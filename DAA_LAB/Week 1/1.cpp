#include <iostream>
using namespace std;

void linSearch (int a[], int n, int key)
{
	int i;
	bool flag = true;

	for(i=0;i<n;i++)
	{
		if(a[i]==key)
		{
			cout<<"Present "<<i+1<<endl;
			flag=false;
			break;
		}
	}

	if(flag)
		cout<<"Not Present "<<n<<endl;
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

		linSearch(a, n ,key);	
	}
	return 0;
}
