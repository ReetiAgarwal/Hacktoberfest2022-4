#include <iostream>
#include<cstring>
using namespace std;
int main()
{
string s;
cin>>s;
string w="hello",s2;
int l=5;
int l2=s.length();
int i=0,j=0;
for(int i=0;i<l;i++)
{
while(w[i]!=s[j]&&j<l2)
	j++;
s2=s2+s[j];
j++;
}
if(s2==w)
	cout<<"YES";
else
	cout<<"NO";
}
