//В метании молота состязается n спортcменов. Каждый из них сделал m бросков.
//Победитель определяется по лучшему результату. Определите количество участников, а так же самих участников состязаний, которые разделили первое место, то есть определите количество строк в массиве, которые содержат значение, равное наибольшему.
#include <iostream>
#include <climits>
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
   int maxi=INT_MIN;
  
   for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
           if(maxi < a[i][j]){
               maxi=a[i][j];
           }
        }
    }
    bool isWinner[n];
    for(int i=0;i<n;i++){
        isWinner[i]=false;
        for(int j=0;j<m;j++){
           if(maxi==a[i][j]){
               isWinner[i]=true;
           }
        }
    }
    int cnt=0;
    for(int i=0;i<n;i++){
        if(isWinner[i]){
            ++cnt;
        }
    }
    cout << cnt << endl;
    for(int i=0;i<n;i++){
        if(isWinner[i]){
            cout << i << " " << endl;
        }
    }


    return 0;
}