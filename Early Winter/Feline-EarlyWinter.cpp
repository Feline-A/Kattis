#include <iostream>

using namespace std;

int main(){
    int n, d, k, a;
    a = -1;
    cin >> n >> d;
    for(int i=1;i<=n;i++){
        cin >> k;
        if (k <= d && a == -1){
            a = i-1;
        }
    }
    if (a == -1){
        cout << "It had never snowed this early!\n";
    }
    else{
        cout << "It hadn't snowed this early in " << a << " years!\n";
    }
    return 0;
}

