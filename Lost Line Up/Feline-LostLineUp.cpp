#include <iostream>

using namespace std;

int pos[110];

int main(){
    int n, d;
    cin >> n;
    pos[1] = 1;
    for (int i=2;i<=n;i++){
        cin >> d;
        pos[d+2] = i;
    }
    for (int i=1;i<=n;i++){
        cout << pos[i];
        if (i < n){
            cout << " ";
        }
    }
    cout << "\n";
    return 0;
}
