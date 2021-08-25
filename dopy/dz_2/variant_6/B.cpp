/*
Alan has received several calls from a company, that claims that they are located in Astana. He suspects
the company of lying.
It is known that any phone number from Astana has the format 8717*******, whereas any phone
number from Almaty has the format 87272****** or 87273******.
*/
#include <iostream>
#include <algorithm>
using namespace std;

int main(){

    string str;
    cin >> str;

    string as="8717", al1="87272", al2="87273";

    size_t found1=str.find(as);
    size_t found2=str.find(al1);
    size_t found3=str.find(al2);

    if(found1!=string::npos) cout << "Astana";
    else if(found2!=string::npos) cout << "Almaty";
    else if(found3!=string::npos) cout << "Almaty";
    
    return 0;
}