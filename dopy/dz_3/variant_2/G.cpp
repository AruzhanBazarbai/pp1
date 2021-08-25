/*
Darkhan has moved to a new apartment this month. Today he decided to cover the floor of his living
room with linoleum. The room has a form of a rectangle with sides a and b meters.
That’s why he had asked his friend Nurbek to bring one piece of linoleum. Nurbek has brought a
rectangular piece of linoleum with sides x and y meters. Now Darkhan wonders if it is possible to cover his
living room entirely by doing at most two cuts (two or less) on the piece of linoleum that was brought
by Nurbek. Darkhan can freely rotate the piece of linoleum and wants to make cut(s) that are parallel to
the sides of the linoleum.
Note that in order to cover his living room, Darkhan needs exactly one piece of linoleum that has same
sizes as his room.
Can Darkhan complete his task? If your solution is not through the function then 0 points
Input
The first line of input contains four space-separated numbers a, b, x, y — the sides of his living room, and
the sides of the piece of linoleum respectively (1 ≤ a, b, x, y ≤ 1000).
Output
If Artur can take the piece of linoleum (and probably rotates) and cover his living room by the piece of
linoleum by doing at most two cuts, print «Thanks, Nurbek» (without quotes).
Otherwise, print «Impossible» (without quotes).
*/
#include <iostream>
using namespace std;

void f(){
    int a,b,x,y;
    cin >> a >> b >> x >> y;
    if(a*b<=x*y) cout << "Thanks, Nurbek";
    else cout << "Impossible";
}

int main(){
    f();
    return 0;
}