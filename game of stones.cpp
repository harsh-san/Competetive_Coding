#include <iostream>
using namespace std;

void sol(int n)
{
	bool dp[101];
	dp[1] = false ;
	dp[2] = true ;
	dp[3] = true ;
	dp[4] = true ;
	dp[5] = true ;

	for (int i = 6 ; i <= n ; i++)
	{
		if( dp[i-2] == false || dp[i-3] == false || dp[i-5]==false)
		{
			dp[i] = true;
		} 
		else
		{
			dp[i] = false;
		}
	}

	if (dp[n] == true)
	{
		cout<<"First"<<endl;
	}
	else
	{
		cout<<"Second"<<endl;
	}
}

int main()
{
   int t;
   cin>>t;

   for ( int i = 0 ; i < t ; i++ )
   {
     int n;
     cin>>n;

     sol(n);

   }

	return 0;
}