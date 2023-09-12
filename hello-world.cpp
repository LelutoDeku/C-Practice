#include <iostream>
using namespace std;
int main()    {
    int i=0;
    while(i<20) {
        cout<<&i<<endl;
        i++;
    }
	double d=2.56;
	float f=1.2;
	char c='a';
	int a=10;
	cout<<sizeof(d)<<sizeof(f)<<sizeof(c)<<sizeof(a)<<endl;
	
    return 0;
}