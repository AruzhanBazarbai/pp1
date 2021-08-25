//В метании молота состязается n спортcменов. Каждый из них сделал m бросков. 
//Победителем считается тот спортсмен, у которого сумма результатов по всем броскам максимальна.
//Если перенумеровать спортсменов числами от 0 до n-1, а попытки каждого из них – от 0 до m-1, 
//то на вход программа получает массив A[n][m], состоящий из неотрицательных целых чисел.
// Программа должна определить максимальную сумму чисел в одной строке и вывести на экран эту сумму и номер строки, для которой достигается эта сумма.
//Входные данные
//Программа получает на вход два числа n и m, являющиеся числом строк и столбцов в массиве.
// Далее во входном потоке идет n строк по m чисел, являющихся элементами массива.
//Выходные данные
//Программа должна вывести  2 числа: сумму и номер строки, для которой эта сумма достигается.
//Если таких строк несколько, то выводится номер наименьшей из них. Не забудьте, что нумерация строк (спортсменов) начинается с 0.
#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int m;
    cin >> m;
    int a[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
           cin >> a[i][j];
        }
    }
    int maxi=-1e9;
    int c;
    int r;
    int cnt=0;
    for(int i=0;i<n;i++){
         for(int j=0;j<m;j++){
           cnt+=a[i][j];
          }
            if(cnt > maxi){
               maxi=cnt;
               c=i;
           
        }
        cnt=0;
    }
    cout << maxi << endl << c << endl;
    return 0;
}