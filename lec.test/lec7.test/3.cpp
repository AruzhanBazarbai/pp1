#include <iostream>
using namespace std;

void printer(string text, string del){
    cout << text << del << endl;
}

int main(){
    string x;
    cin >> x;
    printer(x, " okiiii");
}