//The main diagonal of a matrix consists of those elements that lie on the diagonal that runs from top left
//to bottom right.
//Return the maximum value of the element on this diagonal and its coordinates. If there same maximum
//elements it takes coordinates of the first one.

#include <iostream>
#include <climits>

using namespace std;

int main(){
    int n;
    cin >> n;

    int a[n][n];

    int maxi=INT_MIN;

    int c;
    int r;

   
     
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
          cin >> a[i][j];
        }
    }
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
          if(i==j){
              if(maxi<a[i][j]){
                  maxi=a[i][j];
                  c=i+1;
                  r=j+1;
                }
            }
        }
    }


    cout << "Maximum element is:" << " " << maxi << " " << "with" << " ";
    cout << "coordinates:" << " " << c << ";" << r;

    return 0;     

}