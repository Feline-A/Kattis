#include <iostream>

using namespace std;

int main(){
    int king, queen, rooks, bishops, knights, pawns;
    cin >> king >> queen >> rooks >> bishops >> knights >> pawns;
    cout << 1-king << " " << 1-queen << " " << 2 - rooks << " " << 2 - bishops << " " << 2 - knights << " " << 8 - pawns << "\n";
    return 0;
}

