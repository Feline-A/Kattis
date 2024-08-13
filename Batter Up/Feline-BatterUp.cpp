#include <iostream>

using namespace std;

int main(){
    int n, a;
    double total, denominator;
    double res;
    cin >> n;
    total = 0;
    denominator = 0;
    res = 0;
    for(int i=1;i<=n;i++){
        cin >> a;
        if (a > -1){
            total += a;
            denominator++;
        }
    }
    res = total/denominator;
    cout << fixed << res << "\n";
    return 0;
}
