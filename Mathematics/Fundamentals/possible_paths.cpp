// Question: https://www.hackerrank.com/challenges/possible-path


#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int gcd(int n1,int n2)
{
	/*int ans;
	for(int i=1;i<=n1 and i<=n2;i++)
	{
		if(n1%i==0 and n2%i==0)
			ans = i;
	}
	return ans;
	*/
	
	while(n1!=n2)
    {
        if(n1 > n2)
            n1 -= n2;
        else
            n2 -= n1;
    }
	return n1;
}

int main()
{
	//Enter your code here. Read input from STDIN. Print output to STDOUT
    int T;//Number of Test Cases (T)
    int a,b,x,y;
    int n1,n2;
	bool YES;
    scanf("%d",&T);
    for(int i=0;i<T;i++)
    {
    	scanf("%d %d %d %d",&a,&b,&x,&y);
    	if(gcd(a,b) == gcd(x,y))
    		printf("YES\n");
    	else
    		printf("NO\n");
    } 
    return 0;
}

