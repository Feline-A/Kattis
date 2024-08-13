#include <iostream>

using namespace std;

int ans[12] = {1, 1, 2, 6, 4, 0, 0, 0, 0, 0, 0};

int main(){
    int a, n;
    cin >> a;
    for(int i=1;i<=a;i++){
        cin >> n;
        cout << ans[n] << "\n";
    }
    return 0;
}
