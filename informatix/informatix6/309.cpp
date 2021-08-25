/*
Напишите "функцию голосования" bool Election(bool x, bool y, bool z) (C/C++), function Election (x, y, z:boolean): boolean (Pascal), возвращающую то значение (true или false), которое среди значений ее аргументов x, y, z встречается чаще.

Входные данные
Вводится 3 числа - x, y и z (x, y и z равны 0 или 1, 0 соответствует значению false, 1 соответствует значению true).

Выходные данные
Необходимо вывести  значение функции от x, y и z.
*/

#include <iostream>
using namespace std;

bool electionOfValues(bool x, bool y, bool z){
    
    int ans=0;
    if(x==1){
         ans++;
    }
    if(y==1){
         ans++;
    }
    if(z==1){
         ans++;
    }
    
    if(ans >= 2){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    bool x,y,z;
    cin >> x >> y >> z;
    
    cout << electionOfValues(x,y,z);
     
    return 0;
}
