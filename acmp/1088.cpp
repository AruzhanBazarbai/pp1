//Шахматные фигуры
#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int y1,y2;
    char x1,x2;
    cin >> x1 >> y1 >> x2 >> y2;
    
    int a=int(x1)-64;
    int b=8-y1+1;
    int c=int(x2)-64;
    int d=8-y2+1;
    
    bool k=true;
    
    if(abs(a-c)==abs(b-d)){
        cout << "Bishop" << endl;
        k=false;
    }
    if(a==c || b==d){
        cout << "Rook" << endl;
        k=false;
    }
    if(abs((a-c)*(b-d))==2){
        cout << "Knight" << endl;
        k=false;
    } 
    if((abs(a-c)==1 && abs(b-d)==1)||(a==c && abs(b-d)==1)||(b==d && abs(a-c)==1)){
        cout << "King" << endl;
        k=false;
    } 
    if((abs(a-c)==abs(b-d))||(a==c || b==d)){
        cout << "Queen" << endl;
        k=false;
    } 
    if(a==c && y1!=1){
        if((y1==2 && d+2==b)||(d+1==b)){
            cout << "Pawn" << endl;
            k=false;
        } 
    }
    
    if(k) cout << "Nobody";
    
  
    return 0;
}