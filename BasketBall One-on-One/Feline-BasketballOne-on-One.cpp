#include <iostream>
#include <string>

using namespace std;

int main(){
    int a, b;
    string ln;
    cin >> ln;
    a = b = 0;
    for (int i=0;i<ln.size();i+=2){
        if (ln[i] == 'A'){
            a += ((int)ln[i+1])-48;
        }
        else{
            b += ((int)ln[i+1])-48;
        }
    }
    if (a < b){
        cout << "B\n";
    }
    else{
        cout << "A\n";
    }
    return 0;
}
