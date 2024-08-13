#include <iostream>

using namespace std;

int main(){
    long long p, r, f, t, a, b;
    cin >> t;
    for(int i=1;i<=t;i++){
        cin >> p >> r >> f;
        a = p;
        b = 0;
        while(a <= f){
            a = a * r;
            b++;
        }
        cout << b << "\n";
    }
    return 0;
}
