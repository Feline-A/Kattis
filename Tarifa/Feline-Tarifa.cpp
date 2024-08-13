#include <iostream>

using namespace std;

int main(){
    int x, n, p, i, a;
    cin >> x >> n;
    a = 0;
    for(i=1;i<=n;i++){
        cin >> p;
        a = a + p;
    }
    cout << x * (n+1) - a << "\n";
    return 0;
}
