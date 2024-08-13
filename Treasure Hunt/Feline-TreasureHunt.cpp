#include <iostream>

using namespace std;

int step, r, c;
string mapp[250];

int solve(int x, int y){
    step = 0;
    while (step <= r*c && (x >= 0 && x < r && y >= 0 && y < c)
           && (mapp[x][y] != 'T')){
        if (mapp[x][y] == 'E'){ //Go Right
            y=y+1;
        }
        else if (mapp[x][y] == 'W'){ //Go Left
            y=y-1;
        }
        else if (mapp[x][y] == 'S'){ //Go Down
            x=x+1;
        }
        else if (mapp[x][y] == 'N'){ //Go Up
            x=x-1;
        }
        step++;
    }
    //cout << "DEBUG " << x << " | " << y << "\n";
    if (x >= 0 && x < r && y >= 0 && y < c){ //Still in Area
        if (mapp[x][y] == 'T'){
            return step;
        }
        return -1;
    }
    else{ //Out of Area
        return -2;
    }
}

int main(){
    int res;
    cin >> r >> c;
    //Input Mapp
    for (int i=0;i<r;i++){
        cin >> mapp[i];
    }
    res = solve(0, 0);
    if (res >= 0){
        cout << res << "\n";
    }
    else if (res == -1){
        cout << "Lost\n";
    }
    else{
        cout << "Out\n";
    }
    return 0;
}
