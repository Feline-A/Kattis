#include <iostream>

using namespace std;

int reversee(int x){
    int res = 0;
    while (x > 0){
        res = res*10 + x%10;
        x /= 10;
    }
    return res;
}

int main(){
    int a, b, ans1, ans2;
    ans1 = 0;
    ans2 = 0;
    cin >> a >> b;
    ans1 = reversee(a);
    ans2 = reversee(b);

    if (ans1 > ans2){
        cout << ans1 << "\n";
    }
    else{
        cout << ans2 << "\n";
    }
    return 0;
}
