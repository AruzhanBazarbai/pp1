#include <iostream>
#include <algorithm>
using namespace std;

int main(){​​
   
    int r, t, q = 0, w = 0, e = 0;
    string c;
    
    cin >> c >> r >> t;
    char ar[r][t];
   
    for (int i = 0; i < r; i++){​​
        for (int j = 0; j < t; j++){​​
             ar[i][j] = 'X';
        }​​
    }​​
    while (q < c.size()){​​
         ar[w][e] = '';
        if (q >= c.size()){
             break;
        }
        if (c.at(q) == 'D'){
            ar[w + 1][e] = ''; w++;
            }​​
        if (c.at(q) == 'U'){​​
        ar[w - 1][e] = ''; w--;
        }​​
        if (c.at(q) == 'R'){
            ​​ar[w][e + 1] = ''; e++;
        }​​
        if (c.at(q) == 'L')}
        ​​ar[w][e - 1] = '*'; e--;
        }​​

        q++;

    }​​
    for (int i = 0; i < r; i++){​​
        for (int j = 0; j < t; j++){​​
        cout << ar[i][j];
        }​​
        cout << endl;
    }​​



    return 0;

}​​