#include <iostream>

using namespace std;

int main(){
    int t, a, b, c;
    cin >> t;
    for(int i=1;i<=t;i++){
        cin >> a;
        b = 1;
        c = 0;
        while(b != 0){
            cin >> b;
            if (a*2 < b){
                c = c + (b - (a*2));
            }
            a = b;
        }
        cout << c << "\n";
    }
    return 0;
}
