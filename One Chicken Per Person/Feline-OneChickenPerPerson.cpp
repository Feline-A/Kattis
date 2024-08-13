#include <iostream>

using namespace std;

int main(){
    int a, b;
    cin >> a >> b;
    if (b >= a && b - a == 1){
        cout << "Dr. Chaz will have " << b - a << " piece of chicken left over!\n";
    }
    else if (b >= a && b - a > 1){
        cout << "Dr. Chaz will have " << b - a << " pieces of chicken left over!\n";
    }
    else if (b < a && b - a == -1){
        cout << "Dr. Chaz needs " << (b - a) * -1 << " more piece of chicken!\n";
    }
    else{
        cout << "Dr. Chaz needs " <<  (b - a) * -1 << " more pieces of chicken!\n";
    }
    return 0;
}
