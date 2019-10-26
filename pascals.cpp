#include<iostream>
#include<cmath>
using namespace std;
int factorial(int x)
{
	int fact=1;
	if(x==0)
	{
	    int ans=1;
	    return ans;
	}
	else
	{
	    for(int i=1;i<=x;i++)
	    {
		    fact*=i;
	    }
	    return fact;
	}
}
int main()
{
	int n;
	cout<<"Enter a value:"<<endl;
	cin>>n;
	int a=n/2;
	for(int y=n/2;y>=1;y--)
	{
		for(int x=0;x<=n;x++)
		{
			if(y<=x && y<=-x+n)
			{
				int ans=abs(factorial((n/2)-y)/(factorial(x-y)*factorial(((n/2)-y)-(x-y))));
				if(ans==0)
				{
					continue;
				}
				else
				{
					cout<<" "<<ans<<" ";
				}

			}
			else
			{
				cout<<" ";
			}
		}
		cout<<""<<endl;
	}
	system("pause");
	return 0;
}
