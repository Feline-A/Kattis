#include <iostream>

using namespace std;

int main(){
    int a, b, c;
    int maxx , minn, middle;
    cin >> a >> b >> c;
    maxx = max(a, max(b, c));
    minn = min(a, min(b, c));
    middle = (a+b+c) - maxx - minn;

    if (maxx - middle == middle - minn){
        cout << (maxx-middle)+maxx << "\n";
    }
    else if (maxx - middle > middle - minn){
        cout << (middle-minn)+middle << "\n";
    }
    else{
        cout << (maxx-middle)+minn << "\n";
    }

    return 0;
}
