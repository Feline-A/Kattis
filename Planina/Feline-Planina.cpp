#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int n, point;
    cin >> n;
    point = powl(2, n) + 1;
    cout << point*point << "\n";
    return 0;
}
