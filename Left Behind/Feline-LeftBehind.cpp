#include <iostream>

using namespace std;

int main(){
    int x, y;
    while (cin >> x >> y){
        if (x + y == 13){
            cout << "Never speak again.\n";
        }
        else if(x < y){
            cout << "Left beehind.\n";
        }
        else if (x > y && x + y != 13){
            cout << "To the convention.\n";
        }
        else if (x == y && x != 0 && y != 0){
            cout << "Undecided.\n";
        }
    }
    return 0;
}
