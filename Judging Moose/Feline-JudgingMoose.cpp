#include <iostream>

using namespace std;

int main(){
    int a, b;
    cin >> a >> b;
    if (a == 0 && b == 0){
        cout << "Not a moose\n";
    }
    else if (a == b){
        cout << "Even " << 2*a << "\n";
    }
    else{
        cout << "Odd " << max(a, b) * 2 << "\n";
    }
    return 0;
}
