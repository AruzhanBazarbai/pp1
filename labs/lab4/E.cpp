// write a program that generates triangle made of [*]
#include <iostream>
using namespace std;


int main()
{
    int n ;
    cin >> n;
string m="[*]";
string l="[*]" ;
for (int i=1; i <= 1  ; i++)
{
cout<<m;
cout<<endl;
m="[*]";
}
for (int i=2; i<=n; i++)
{
cout << l << m;
cout << endl;
l+="[*]"; 
m="[*]";
}
return 0 ;
}

