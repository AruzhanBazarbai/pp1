/*
Дано двузначное число. Найдите число десятков в нем.

Входные данные
Вводится двухзначное число.

Выходные данные
Выведите ответ на задачу.
*/
#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int a;
    cin >> a;

    cout << a/10;

    return 0;
}