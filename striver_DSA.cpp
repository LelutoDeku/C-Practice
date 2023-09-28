#include <bits/stdc++.h>
using namespace std;
int main()	{

	// a pattern
	// for(int i=1; i<5; i++)	{
	// 	for(int j=1; j<=i; j++)
	// 		cout<<j;
		
	// 	for(int j=1; j<2*(5-i)-1;j++)
	// 		cout<<" ";

	// 	for(int j=i; j>=1; j--)
	// 		cout<<j;

	// 	cout<<endl;
	// }

	//another pattern
	// for(int i=0; i<2*4-1;i++)	{
	// 	for(int j=0;j<2*4-1;j++)	{
	// 		int top = i;
	// 		int left = j;
	// 		int right = 2*4 - 2 -j;
	// 		int bottom = 2*4 - 2 -i;

	// 		cout<<(4 - min(min(top,bottom), min(left,right)));
	// 	}

	// 	cout<<endl;
	// }

//pairs in containers
pair<int, int> p1 = {1, 3};
cout<<p1.first<<" "<<p1.second;

//nested pairing
pair<int, pair<int, int>> p = {1, {2, 3}};
cout<<"\n"<<p.first<<" "<<p.second.first<<" "<<p.second.second;

//array pairs
pair<int, int> arr[] = { {1, 2},{1, 3},{1, 4},{1, 5}};
cout<<"\n"<<arr[1].second;

	return 0;

}