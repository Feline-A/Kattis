#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main(){
    double x, a, ans;
    cin >> x;
    a = (1000 * 5280.0) / 4854;
    ans = a * x;
    cout <<  setprecision(0) << fixed << ans << "\n";
    return 0;
}
