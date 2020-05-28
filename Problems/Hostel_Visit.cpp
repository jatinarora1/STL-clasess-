//Que. Dean of MAIT is going to visit Hostels of MAIT. As you know that he is a very busy person so he decided to visit only first "K" nearest Hostels. Hostels are situated in 2D plane. You are given the coordinates of hostels and you have to answer the Rocket distance of Kth nearest hostel from origin ( Dean's place ) 

#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main()
{
	int n,k,o,x,y;
	cin>>n>>k;
	priority_queue<long long> q;
	for(int i = 0;i<n;i++)
	{
		cin>>o;
		if(o ==2)
		{
			if(q.size()>k)
			{
				while(q.size()!=k)
				{
					q.pop();
				}
			}
			
			cout<<q.top()<<endl;
			
		}
		else if(o == 1){
			cin>>x>>y;
			long long dist = x*x + y*y;
			q.push(dist);
		}
		

	}
	return 0;
}