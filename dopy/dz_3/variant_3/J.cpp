//Validol League
/*
There is a football tournament that is held every year in Berland. This year the final stage is going to be
played between the two strongest teams of Berland — Barsenal and Arselona. To make the results of the
finals fair, the organizers decided to break up the finals into two separate games: first game is held at the
home stadium of Barsenal and the second game is held at the home stadium of Arselona.
The winner of the finals is defined in the following way. For each team, organizers count the number of
total goals in two games. The team, who has more total goals than another is recognized as a winner.
If the total goals are equal, for each team, the organizers consider the number of away goals: goals that
were scored on the pitch of an opponent. In that case, the team with more away goals than another is
recognized as a winner of the tournament.
Sometimes, in Berland miracles take place. The teams can give up and announce that there is no winner
in case of the equal total number of goals and the equal number of away goals.
Given the results of the two games, can you help the organizers with identifying the winner of the
tournament?
Input
The first line of input contains two space-separated non-negative integers, the result of the game at the
home stadium of Barsenal, a and b — goals of the Barsenal and Arselona respectively (0 ≤ a, b ≤ 100).
The second line of input contains two space-separated non-negative integers, the result of the game at the
home stadium of Arselona, c and d — goals of the Arselona and Barsenal respectively (0 ≤ c, d ≤ 100).
Output
If the winner is Barsenal, print in the first line «Barsenal».
If the winner is Arselona, print in the first line «Arselona».
Otherwise, print in the first line «Friendship».
In the second line, output two-space separated integers — total goals scored by Barsenal and Arselona
*/
#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int a1,a2,b1,b2;
    cin >> b1 >> a1 >> a2 >> b2;
    
    int b=b1+b2;
    int a=a1+a2;

    if(a>b) cout << "Arselona" << endl << b << " " << a;
    else if(a<b) cout << "Barsenal" <<  endl << b << " " << a;
    else if(a==b){
        if(a1>b2) cout << "Arselona" << endl << b << " " << a;
        else if(a1<b2) cout << "Barsenal" <<  endl << b << " " << a;
        else if(a1==b2) cout << "Friendship" << endl << b << " " << a;
    }

    return 0;
}