#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main(){
    int p, a, b, c, d, n, k;
    double price, ct, declineRes;
    cin >> p >> a >> b >> c >> d >> n;
    k = 1; declineRes = 0;
    price = p * (sin(a*k+b) + cos(c*k+d)+2);
    for(k=2;k<=n;k++){
        ct = p * (sin(a*k+b) + cos(c*k+d)+2);
        if (ct < price){
            declineRes = max(declineRes, price-ct);
        }
        else{
            price = ct;
        }
    }
    cout << fixed << setprecision(6) << declineRes << "\n";
    return 0;
}
