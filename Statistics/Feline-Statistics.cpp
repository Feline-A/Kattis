#include <iostream>

using namespace std;

int main(){
    int n, i, a, x;
    int minn, maxx, range;
    x = 0;
    while(cin >> n){
        for(i=1;i<=n;i++){
            cin >> a;
            if (i == 1){
                minn = a;
                maxx = a;
            }
            else if (a <= minn){
                minn = a;
            }
            else if(a >= maxx){
                maxx = a;
            }
        }
        x++;
        cout << "Case " << x << ": " << minn << " " << maxx << " " << maxx - minn << "\n";
    }
    return 0;
}
