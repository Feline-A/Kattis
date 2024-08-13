#include <iostream>

using namespace std;

int main(){
    int a, b, c;
    int small, medium, big;
    string order;
    cin >> a >> b >> c;
    cin >> order;

    small = min(a, min(b, c));
    big = max(a, max(b, c));
    medium = (a+b+c) - big - small;

    if (order == "ABC"){
        cout << small << " " << medium << " " << big << "\n";
    }
    else if (order == "ACB"){
        cout << small << " " << big << " " << medium << "\n";
    }
    else if (order == "BAC"){
        cout << medium << " " << small << " " << big << "\n";
    }
    else if (order == "BCA"){
        cout << medium << " " << big << " " << small << "\n";
    }
    else if (order == "CAB"){
        cout << big << " " << small << " " << medium << "\n";
    }
    else{
        cout << big << " " << medium << " " << small << "\n";
    }
    return 0;
}
