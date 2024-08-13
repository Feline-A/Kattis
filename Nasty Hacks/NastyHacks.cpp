#include <iostream>

using namespace std;

int main(){
    int n, r, e, c, i;
    cin >> n;
    for(i=1;i<=n;i++){
        cin >> r >> e >> c;
        if(e - c == r) {
            cout << "does not matter\n";
        }
        else if(e - c > r) {
            cout << "advertise\n";
        }
        else {
            cout << "do not advertise\n";
        }
    }
    return 0;
}
