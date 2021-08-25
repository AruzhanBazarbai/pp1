#include <iostream>
using namespace std;

void readArray(int * a, int n){ // int *a - мы вызыываем адрес ячейки
   for(int i=0; i<n; i++){
       cin >> a[i];
   }
}

void printArray(int * a, int n){
   for(int i=0; i<n; i++){
       cout << a[i] << " ";
   }
}


int main (){
    int n;
    cin >> n;
    int a[n];
    
    readArray(a,n);
    printArray(a,n);
    
    
    return 0;
}