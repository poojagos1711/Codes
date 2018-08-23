#include<bits/stdc++.h>
using namespace std;
void Mod(long a,long b,long c)
{
	int i,j;
	long m=b,rem=1;
    vector<int> a1,a2;
    i=0;
    while (m > 0) {
        a1.push_back(m % 2);
        m = m / 2;
        i++;
    }
 
	a2.push_back(a);
	
    for (int j =1 ; j<i ; j++)
	{
		a2.push_back((a2[j-1]*a2[j-1])%c);
	}
	
 	for (int j =0 ; j <i; j++)
	 {
	 	if(a1[j]==1)
	 	rem=(rem*a2[j])%c;
	 }
	 cout<<"modulo is";
	 cout<<rem<<endl;
}
int main()
{
	long a,b,c;
	cout<<"Enter a,b,c to find a^bmodc"<<endl;
	cin>>a>>b>>c;
	Mod(a,b,c);
	return 0;
}
