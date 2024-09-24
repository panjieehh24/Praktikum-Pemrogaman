#include <bits/stdc++.h>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int n;
	cout<<"Enter a number"<<endl;
	cin>>n;

	for(int i=1; i<=10; i++)
	{
		int cnt = n*i;
		cout<<n<<" x "<<i<<" = "<<cnt<<'\n';
	}
	
}
