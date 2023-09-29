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


	//STL library data structures and containers

	//all below functions used with containers have t(n) = O(1) except specifically mentioned ones

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
	v.insert(v.begin() + 1, 2, 10);//inserts values after adding 1 to v.begin() i.e. right after the first value and hence, adds value '10' 2 times 

	vector<int> copy(2, 50);
	v.insert(v.begin(), copy.begin(), copy.end());//copies a portion of vector 'copy'[in this case the whole vector], and inserts it right after the first value in vector 'v'

	cout<<v.size();//outputs the size of vector

	v.pop_back();//deletes last element

	v1.swap(v2);//swaps values in v1 and v2

	v.clear();//removes an entire vector

	cout<<v.empty();//retrun true of vector is empty else false


	//lists in stl

	list<int> ls;

	ls.push_back(1);
	ls.emplace_back(3);
	//inserting at front of list
	ls.push_front(4);
	ls.emplace_front(3);


	//D-queue

	deque<int> dq;
	dq.push_back(1);
	dq.emplace_back(2);
	dq.push_front(7);
	dq.emplace_front(8);
	dq.pop_back();
	dq.pop_front();


	dq.back();
	dq.front();


	//stack in stl

	stack<int> s;
	s.push(1);
	s.push(2);
	s.push(3);
	s.push(4);
	s.emplace(5);

	cout<<s.top();

	s.pop();

	cout<<s.size();

	cout<<s.empty();

	stack<int>s1, s2;
	s1.swap(s2);

	//queue in stl

	queue<int> q;
	q.push(1);
	q.push(3);
	q.emplace(2);
	q.back() += 9;
	cout<<q.back();

	cout<<q.front();

	q.pop();

	cout<<q.front();

	//priority queue in stl :  data not stored linearly but in form of trees so that top() always give highest value if type is int and largest string lexicographically if type is str

	priority_queue<int> pq;
	pq.push(1);
	pq.push(2);// t(n) = log(n)
	pq.emplace(3);

	cout<<pq.top();

	pq.pop();// t(n) = log(n) rest all have time compexity = O(1)

	cout<<pq.top();

	//above is max heap and below is min heap

	//minimum heap i.e. gettig min value not the largest value as in normal pq
	priority_queue<int, vector<int>, greater<int>> pq;
	pq.push(5);
	pq.push(2);
	pq.push(8);
	pq.emplace(10);
	cout<<pq.top(); //prints 2


	//set in stl
	// set = sorted + unique => hence not linear container but tree is maintained
	set<int> st;
	st.insert(1);
	st.insert(2);
	st.insert(2); //wont store
	st.insert(4);
	st.insert(3); //will store between 2 and 4 i.e. sorted






	return 0;

}