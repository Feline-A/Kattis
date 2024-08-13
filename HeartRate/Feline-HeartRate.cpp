#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int n;
    double b, p;
    cin >> n;
    for(int i=1;i<=n;i++){
        cin >> b >> p;
        double a = 60 * (b/p);
        double b = 60 / p;
        cout << fixed << setprecision(4) << a - b << " " << a << " " << a+b << " \n";
    }
    return 0;
}
