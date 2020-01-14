#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define md 1000000007
#define pb push_back
void printfile(string filename)
{
	ifstream fout ;
	fout.open(filename);
	string c;
	while(!fout.eof()) getline(fout,c),cout<<c<<"\n";
}


int solve()
{

	int n;cin>>n;
	string s;cin>>s;
	int l=0,r=0;
	for(auto i:s) if(i=='L') l++;else r++;
	cout<<l+r+1<<endl;

   	return 0;
}
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	#ifndef ONLINE_JUDGE
	cout<<"INPUT\n";
	freopen("input.txt","r",stdin);
	printfile("input.txt");
	cout<<"EXPECTED_OUTPUT\n";
	printfile("output.txt");
	cout<<"YOUR OUTPUT\n";
	//freopen("res.txt","w",stdout);
	//printfile("res.txt");

	#endif

	ll t=1;
	//cin>>t;
	while(t--)
		solve();
}
