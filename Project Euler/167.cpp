// Question: https://www.hackerrank.com/contests/projecteuler/challenges/euler167


#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int T,k,n;//Number of Test Cases (T)
    scanf("%d %d",&n, &k);
    vector<int> v;
    int a=n;
    int b = 2*n+1;
    v.push_back(a);
    v.push_back(b);
    v.push_back(a+b);
    T=0; 
    int count = 0;
    for(int i=(a+b+1);v.size()<k;i++)
    {
    	count = 0;
    	for (int j=0;j<v.size();j++)
    	{
    	    for (int z=j+1;z<v.size();z++)
    		{
    			if (v[j]+v[z] == i)
    				count++;
    		}
       	}
    	
    	if(count == 1)
    		v.push_back(i);
    }

    
    printf("%d\n", v[v.size() - 1]);
    return 0;
}

