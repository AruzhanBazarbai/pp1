/*
Напишите функцию
bool Xor (bool x, bool y) (C/C++),
 function _Xor (x, y:boolean): boolean (Pascal),
def xor(x, y):(Python)
реализующую функцию "Исключающее ИЛИ" двух логических переменных x и y. Функция Xor должна возвращать true, если ровно один из ее аргументов x или y, но не оба одновременно равны true.

Входные данные
Вводится 2 числа - x и y (x и y равны 0 или 1, 0 соответствует значению false, 1 соответствует значению true).

Выходные данные
Необходимо вывести 0 или 1 - значение функции от x и y.
*/
#include <iostream>
using namespace std;

bool Xor(bool x, bool y){

    bool z = (x ^ y);
    return z;

}

int main(){
    bool x, y;

    cin >> x >> y;

    cout << Xor(x,y);

    return 0;
}
