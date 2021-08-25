//You’re given name of the user, you need to write program that will greet user by the name. Greeting need
//to be in this pattern "Welcome "+ name.
#include <iostream>
#include <algorithm>
using namespace std;
int main(){
   string user;
   cin >> user;
   user.insert(0,"Welcome ",8);
   cout << user;

    
    return 0;
   
}