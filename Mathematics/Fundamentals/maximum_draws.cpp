// Question: https://www.hackerrank.com/challenges/maximum-draws?h_r=next-challenge&h_v=zen


#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int T;
    int num;
    scanf("%d",&T);
    for(int i=0;i<T;i++)
    {
    scanf("%d",&num);
    int ans = num + 1; 
    printf("%d\n",ans);
    }
    
    return 0;
}

