#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main(){
    stringstream ss;
    cout << 5 << endl;
    ss << 5;
    int x;
    ss >> x;
    cout << x*x;
    
   
    return 0;
    
    

}