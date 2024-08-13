#include <iostream>

using namespace std;

int main(){
    int n, t, i, a;
    cin >> n;
    a = 0;
    for(i=1;i<=n;i++){
        cin >> t;
        if (t < 0){
            a += 1;
        }
    }
    cout << a << "\n";
    return 0;
}
