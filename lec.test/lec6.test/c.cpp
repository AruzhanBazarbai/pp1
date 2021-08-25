#include <iostream>
#include <sstream>

using namespace std;

int main(){
    string str= "to be question";
    string str2= "the ";
    string str3= "or not to be";
     
    str.insert(6,str2); 
    str.insert(6,str3,3,4);
    str.insert(10,"that is cool",8);
    str.insert(10,"to be ");
    str.insert(15,1,':');
  
    
    cout << str ;

   
    return 0;
    
    

}