//projection area of 3d shapes
/*
On a N * N grid, we place some 1 * 1 * 1 cubes that are axis-aligned with the x, y, and z axes.
Each value v = grid[i][j] represents a tower of v cubes placed on top of grid cell (i, j).
Now we view the projection of these cubes onto the xy, yz, and zx planes.
A projection is like a shadow, that maps our 3 dimensional figure to a 2 dimensional plane.
Here, we are viewing the "shadow"when looking at the cubes from the top, the front, and the side.
Return the total area of all three projections.
Input
In the first input line given N size of the grid;
In the next N lines, each line represents height v of N cubes viewed from the top of xy-plane. 1 <= N <=
500.
0 <= v <= 500.
Output
Output total area of all three projections
*/
#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin >> a[i][j];
        }
    }
    int cnt=0,sum=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(a[i][j]>0) cnt++;
            if(i==n-1) sum+=a[i][j];
            if(j==n-1) sum+=a[i][j];
        }
    }
    cout << cnt+sum;


    return 0;
}