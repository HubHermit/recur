#include <iostream>

using namespace std;

int digitSum(int num)
{
	if (num==0)
	{
			return num;
	} else 
	{
			return num%10 + digitSum(num/10);
	}
}

int main()
{
	int n = 4567;
	cout<<"Sum of digitSum("<<n<<") = "<<	digitSum(n)<<endl;
	
	return 0;
		
}
