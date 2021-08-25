#include <iostream>
using namespace std;

void printer(string text){
    cout << text << "!" << endl;
}

int main(){
    string x;
    getline(cin,x);
    printer(x);
}