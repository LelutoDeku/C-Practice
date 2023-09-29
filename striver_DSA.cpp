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
	// pair<int, int> p1 = {1, 3};
	// cout<<p1.first<<" "<<p1.second;

	// //nested pairing
	// pair<int, pair<int, int>> p = {1, {2, 3}};
	// cout<<"\n"<<p.first<<" "<<p.second.first<<" "<<p.second.second;

	// //array pairs
	// pair<int, int> arr[] = { {1, 2},{1, 3},{1, 4},{1, 5}};
	// cout<<"\n"<<arr[1].second;

	//about vectors
	vector<int> v;
	v.push_back(1);
	v.emplace_back(2);//faster than push back

	vector<int, int> v1;
	v1.push_back({1, 2});
	v1.emplace_back(1,2);//auto assumes args as pairs and inserts

	vector<int> v2(5, 100); //a vector with size = 5 and all values = 100
	// vector<int> v2(5);//same as above but only size

	vector<int> v3(5,20);
	vector<int> v2(v3); //v2 is copy of v3

	//accessing vector elements
	vector<int>::iterator it = v.begin();//'it' points to memory location where first value of vector is stored
	it++; //increment can be by +1 or by +2 or by -1 or by -2 i.e. +x or -x
	cout<<*(it)<<" ";//'it' points to memeory address => it is an address => '*' is used to access data at that memeory location

	vector<int>::iterator i = v.end(); //points to the location just ahead of the memeory location of last value in the vector i.e. i-- will actually point to the memory location of last value

	cout<<v[0]<<" ";//accessing specific values

	cout<<v.back()<<" ";//last value of the vector

	//printing vector

	//declaring iterator
	for(vector<int>::iterator it = v.begin(); it!=v.end(); it++)	{
		cout<<*(it)<<" ";
	}

	//declaring iterator using 'auto' that literally does what it does
	for(auto it = v.begin(); it!=v.end(); it++)	{
		cout<<*it<<" ";
	}

	//using for-each loop
	for(auto it: v)	{
		cout<<it<<" ";
	}

	//operations in vector
	v.erase(v.begin() + 1); //erase second value
	v.erase(v.begin() + 2, v.begin() + 4);//erase values that lie between [2, 4) i.e. in general [start, end)

	v.insert(v.begin(), 300);//inserts 300 as the first value of vector pushing others back i.e. size also increases i.e. it does not replace the first value but gets added before the initial first value
	v.insert(v.begin() + 1, 2, 10);//



	return 0;

}