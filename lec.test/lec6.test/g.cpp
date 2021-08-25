#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main(){
    string str="test";
    int n=str.size();
    char c[n];
    str.copy(c,n,0);
    c[n]='\0';
    cout << c << endl;
    return 0;
    
    

}