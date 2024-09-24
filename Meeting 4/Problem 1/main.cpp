#include <bits/stdc++.h>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int n;
	cout<<"Enter a number"<<endl;
	cin>>n;

	int sum=0;

	for(int i=1; i<=n; i++)
	{
		sum+=i;
	}

	cout<<"Sum = "<<sum<<'\n';
	
}
