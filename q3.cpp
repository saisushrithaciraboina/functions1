#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool isPrime(int n)
{
    for(int i=2;i<n;i++)
    if(n%i==0)
    return 0;
    else
    return 1;
}
int main(){
	int a;
	cin>>a;
	cout<<isPrime(a);
	return 0;
}


