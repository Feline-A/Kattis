#include <iostream>

using namespace std;

int main(){
    int a, b, c, d, e, f;
    int king, queen, rooks, bishops, knights, pawns;
    king = 1;
    queen = 1;
    rooks = 2;
    bishops = 2;
    knights = 2;
    pawns = 8;
    cin >> a >> b >> c >> d >> e >> f;
    if (a == king){
        cout << "0 ";
    }else{
        cout << king - a << " ";
    }
    if (b == queen){
        cout << "0 ";
    }else{
        cout << queen - b << " ";
    }
    if (c == rooks){
        cout << "0 ";
    }else{
        cout << rooks - c << " ";
    }
    if (d == bishops){
        cout << "0 ";
    }else{
        cout << bishops - d << " ";
    }
    if (e == knights){
        cout << "0 ";
    }else{
        cout << knights - e << " ";
    }
    if (f == pawns){
        cout << "0 ";
    }else{
        cout << pawns - f << " ";
    }
    cout << "\n";
    return 0;
}
