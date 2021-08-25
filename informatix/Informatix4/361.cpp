//Даны два числа n и m. Создайте двумерный массив A[n][m], заполните его таблицей умножения A[i][j]=i*j и выведите на экран. 
//При этом нельзя использовать вложенные циклы, все заполнение массива должно производиться одним циклом.
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
           a[i][j]=i*j;
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
           cout << a[i][j] << " ";
        }
        cout << endl;
    }
  


    return 0;
}