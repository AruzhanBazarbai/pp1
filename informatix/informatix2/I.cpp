/*
Дано трехзначное число. Найдите сумму его цифр.

Входные данные
Вводится трехзначное число.

Выходные данные
Выведите ответ на задачу.
*/
#include <iostream>
#include <algorithm>
using namespace std;
int main(){

    int a;
    cin >> a;
    int a3=a%10;
    int a1=a/100;
    a=a/10;
    int a2=a%10;
    cout << a1+a2+a3;
    return 0;
   
}

 