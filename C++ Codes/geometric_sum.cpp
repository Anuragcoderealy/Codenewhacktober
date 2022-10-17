#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;
double geometricSum(int k)
{
	if(k==0)
	{
		return 1;
	}
	double store=geometricSum(k-1);
	store+=1/pow(2,k);
	return store; 
	
}
int main() {
    int k;
    cin >> k;
    cout << fixed << setprecision(5);
    cout << geometricSum(k) << endl;   
}

