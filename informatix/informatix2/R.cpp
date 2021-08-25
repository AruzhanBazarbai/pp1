/*
n школьников делят k яблок “поровну”, 
то есть так, чтобы количество яблок, доставшихся любым двум школьникам, 
отличалось бы не более, чем на 1.

Входные данные
Программа получает на вход числа n и k.

Выходные данные
Программа должна вывести количество школьников, которым достанется яблок меньше, 
чем некоторым из их товарищей.

Примечание
При решении этой задачи нельзя пользоваться условной инструкцией if и циклами.
*/
#include <iostream>
#include <algorithm>
using namespace std;
int main(){

    int a,b;
    cin >> a >> b ;
    int c,d;
    if(b%a==0){
        cout << "0";
    }else{
        c = b % a;
        d=a-c;
        cout << d;
    }

    return 0;
   
}