#include <iostream>

using namespace std;

int main(){
    int n;
    bool dec, inc;
    string first, second;
    cin >> n;
    dec = inc = true;
    cin >> first;
    for(int i=2;i<=n;i++){
        cin >> second;
        if (first > second){
            inc = false;
        }
        else if (first < second){
            dec = false;
        }
        first = second;
    }
    if (dec == true){
        cout << "DECREASING\n";
    }
    else if (inc == true){
        cout << "INCREASING\n";
    }
    else{
        cout << "NEITHER\n";
    }

    return 0;
}

