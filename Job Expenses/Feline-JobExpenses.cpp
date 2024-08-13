#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int n, k, e;
    cin >> n;
    e = 0;
    for(int i=1;i<=n;i++){
        cin >> k;
        if (k < 0){
            e = e + k;
        }
    }
    cout << abs(e) << "\n";
    return 0;
}
