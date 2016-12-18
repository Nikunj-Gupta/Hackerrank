//Question: https://www.hackerrank.com/challenges/find-point


#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int a,b,c,d,ans1=0,ans2=0;
    int T;
    scanf("%d",&T);
    for(int i=0;i<T;i++)
    {
    	scanf("%d%d%d%d",&a,&b,&c,&d);
    	ans1 = 2*c-a;
    	ans2 = 2*d-b;
       
    	printf("%d %d\n",ans1,ans2);
    }
    return 0;
}

