#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;
int main(){
	int q;
	cin>>q;
	while(q--)
	{
		
		int n;
		cin>>n;
		int flag[n];
		int arr[n];
		for(int i = 0;i<n;i++){
			int d;
			cin>>d;
			arr[i] = d;
			
		}
		int count = 0;
		for(int i =0;i<n;i++) flag[i] = 0;
		for(int i = 0;i<n;i++)
		{
			for(int j = 0;j<n;j++)
			{
				
					if((arr[i]%2 == arr[j]%2) || abs(arr[i]-arr[j]) == 1)
					{
						flag[i] = 1;
						count++;
						break;
					}

				
			}

		}

		int x = 1;
		for(int i = 0;i<n;i++)
		{
			if(flag[i] != 1)
			{
				
				x = 0;
				break;
			}

		}
		if(x) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
		// cout<<ans<<endl;

	}
	return 0;
}