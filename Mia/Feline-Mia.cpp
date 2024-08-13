#include <iostream>

using namespace std;

int score(int x, int z){
    if (x == 1 && z == 2 || x == 2 && z == 1){
        return 1000;
    }
    else if(x == z){
        if(x == 6){
            return 66*10;
        }
        else{
            return (x * 11) * 10 ;
            //return (66 - (x * 11)) * 10 ;
        }
    }
    else{
        if (x > z){
            return (x*10) + z;
        }
        else{
            return (z*10) + x;
        }
    }
}

int main(){
    int s0, s1, r0, r1;
    int res1, res2;
    res1 = 0;
    res2 = 0;
    while(cin >> s0 >> s1 >> r0 >> r1 && s0 != 0 && s1 != 0 && r0 != 0 && r1 != 0){
        res1 = score(s0, s1);
        res2 = score(r0, r1);
        if(res1 > res2){
            cout << "Player 1 wins.\n";
        }
        else if (res1 < res2){
            cout << "Player 2 wins.\n";
        }
        else{
            cout << "Tie.\n";
        }
    }
    return 0;
}
