/*
	This piece of code is for learning the coding standard in 
	competitive programming
	Typically we compile contest code with:
	g++ -std=c++11 -O2 -Wall [file.cpp] -o [outcome]
*/
#include <bits/stdc++.h>
using namespace std;
int main(int argc,char * argv[])
{
	//solution goes here
	//input stream
	int a,b;
	string x;
	cin >> a >> b >> x;

	//output stream
	//using \n here since \n is faster than endl;
	//endl always flush the stream
	a = 123, b = 456;
	x = "monkey";
	cout << a << " " << b << x <<"\n";

	//c style input
	//remember the address
	scanf("%d %d",&a,&b);

	//c style output
	printf("%d %d\n",a,b);

	//io can be bottleneck of speed, thus use following to make 
	//cin cout faster
	ios::sync_with_stdio(0);
	cin.tie(0);

	//if want to get the whole line, including spaces
	string s;
	getline(cin,s);

	//if the amount of data is unknow
	while(cin >> x)
	{
		//code
	}

	//in some situation, we use files
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);


	//part 2, working with numbers
	//typically, long long should be enough
	int a = 123456789;
	//b will be overflowed since a * a is still INT
	long long b =(long long)a * a;

	//by taking mod 10^9 + 7 can shrink the number down
	//(a+b)mod m = (a mod m + b mod m) mod m
	//(a-b)mod m = (a mod m - b mod m) mod m
	//(a*b)mod m = (a mod m * b mod m) mod m
	long long ex = 1;
	long long m = 1332412000000000;
	for(int i = 2; i <= 133241232141; ++i)
		x = (x*i)%m;
	cout << x%m;

	//if x is negative
	//make it positive
	long long x = -4000;
	x = x % m;
	if(x < 0)
		x += m;

	//floating numbers
	//to output a floating point number 9 digit after .
	printf("%.9f\n\n", 0.7777);

	//typically it is risky to compare floating number
	//so we use following code:

	if(abs(a-b) < 1e-9)
	{
		//a == b;
		a = b;
	}

	//shortening code
	typedef long long ll;
	ll test1 = 0;
	ll test2 = 0;

	typedef vector<int> vi;
	typedef pair<int,int> pi;

	//macros, no ; after code
	#define F first
	#define S second
	#define PB push_back
	#define MP make_pair

	//so we could write following code
	v.PB(MP(y1,x1));
	v.PB(MP(y2,x2));
	int d = v[i].F + V[i].S;

	#define REP(i,a,b) for(int i = a; i < b; ++i)

	//for a int x, we need floor(logk(x) + 1) bits to represent x in k-cimal
	return 1;
}
//end of coding template
