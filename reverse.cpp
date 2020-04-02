#include <iostream>
using namespace std;
void reverse(int num)    {
    int rev=0,rem;
    while(num>0)    {
        rem = num%10;
        rev = 10*rev +rem;
        num=num/10;
    }
    cout<<rev<<endl;
}
int main() {
	// your code goes here
	int t,i,num;
	cin>>t;
	for(i=0;i<t;i++)    {
	    cin>>num;
	    reverse(num);
	}
	return 0;
}

