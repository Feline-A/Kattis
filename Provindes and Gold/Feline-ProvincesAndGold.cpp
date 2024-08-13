#include <iostream>

using namespace std;

int main(){
    int g, s, c, hasil;
    string a, b;
    cin >> g >> s >> c;
    g = g * 3;
    s = s * 2;
    hasil = g+s+c;
    a = "";
    b = "";

    if (hasil >= 8){
        a = "Province";
    }
    else if (hasil >= 5){
        a = "Duchy";
    }
    else if (hasil >= 2){
        a = "Estate";
    }

    if (hasil >= 6 ){
        b = "Gold";
    }
    else if (hasil >= 3){
        b = "Silver";
    }
    else{
        b = "Copper";
    }

    if (a.empty() == true){
        cout << b << "\n";
    }
    else{
        cout << a << " or " << b << "\n";
    }
    return 0;
}
