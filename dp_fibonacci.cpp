#include <iostream>
using namespace std;

int fibo(int n , int t1 , int t2)
{
	int sum = 0;
    
    int dp[100];

    dp[0] = t1;
    dp[1] = t2;

    for ( int i = 2 ; i < n ; i++ )
    {
      dp[i] = dp[i-2] + dp[i-1]*dp[i-1]; 
    }

    return dp[n-1];

}



int main()
{

	int t1 ; int t2 ;
    
    int n;

    cin>>t1>>t2>>n;

    int fib = fibo(n,t1,t2);
    
    cout<<fib;    

	return 0;
}