#include <iostream>

using namespace std;

int main(){
    int n, s, t, miles, a;
    while(true){
        miles = 0;
        a = 0;
        cin >> n;
        if (n == -1){
            break;
        }
        for(int i=1;i<=n;i++){
            cin >> s >> t;
            miles = miles + s * (t - a);
            a = t;
        }
        cout << miles << " miles\n";
    }
    return 0;
}
