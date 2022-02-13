#include<iostream>
#include<cstdio>
using namespace std;
long long ans;
int a,b;
void gcd(int a,int b,int &x,int &y)

{
    if(b==a)
	{x=a;
	y=b;
	return;
	}
    gcd(b,a%b,x,y);
    int t=x;
	x=y;
	y=t-a/b*y;
}

int main()
{
    cin>>a>>b;
    int x,y;
    gcd(a,b,x,y);
    x=(x%b+b)%b;
    cout<<x<<endl;
} 

