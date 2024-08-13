#include <iostream>

using namespace std;

int main(){
    int a, b;
    cin >> a >> b;
    if (a > 1 && b > 1){
        cout << "1\n";
    }
    else if (a < 1 && b > 1){
        cout << "2\n";
    }
    else if (a < 1 && b < 1){
        cout << "3\n";
    }
    else{
        cout << "4\n";
    }
    return 0;
}
