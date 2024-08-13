#include <iostream>

using namespace std;

int main(){
    int n, x, i;
    cin >> n;
    for(i=1;i<=n;i++){
        cin >> x;
        if (x % 2 == 0){
            cout << x << " is even\n";
        }
        else{
            cout << x << " is odd\n";
        }
    }
    return 0;
}
