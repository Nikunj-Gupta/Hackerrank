// Question: https://www.hackerrank.com/contests/projecteuler/challenges/euler168


#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int rr(int n)
{
	int temp = n;
	int k = 0;
	for (k=0;temp<10;k++)
	{
		temp = temp / 10;
		//printf("%d\n", temp);
	}

	int temp2 = n;
	int last = temp2 % 10;
	temp2 = temp2/10;
	temp2 = temp2 + (last * pow (10,k+1));
	n = temp2;
	return n;	
}


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    
    int m;//Number of Test Cases (T)
    scanf("%d",&m);
    int digits = pow(10,5);
    //printf("%d\n", digits );
    int sum = 0;
    for(int i=10;i <= pow(10,m) ;i++)
    {
   		//if( rr(i) > i )
   			if( rr(i) % i == 0 ) 
   				sum += i;
    }
    
    printf("%d\n", (sum % digits) );
    
    return 0;
}

