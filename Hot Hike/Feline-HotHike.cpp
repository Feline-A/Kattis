#include <iostream>

using namespace std;

int t[55];

int main(){
    int n, res, minT, temp;
    cin >> n;
    for(int i=1;i<=n;i++){
        cin >> t[i];
    }
    res = 1;
    minT = max(t[1], t[3]);
    for(int i=3;i<n;i++){
        temp = max(t[i-1], t[i+1]);
        if (temp < minT ){
            res = i-1;
            minT = temp;
        }
    }
    cout << res << " " << minT << "\n";
    return 0;
}
