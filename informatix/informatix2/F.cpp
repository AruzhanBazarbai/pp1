/*
Дано натуральное число. Выведите его последнюю цифру.

Входные данные
Вводится натуральное число.

Выходные данные
Выведите ответ на задачу.
*/
#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int a;
    cin >> a;

    cout << a%10;

    return 0;
}