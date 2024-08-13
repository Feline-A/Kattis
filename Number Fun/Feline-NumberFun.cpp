#include <iostream>

using namespace std;

int main(){
    int n, a, b, c, i;
    cin >> n;
    for(i=1;i<=n;i++){
        cin >> a >> b >> c;
        if(a + b == c){
            cout << "Possible\n";
        }
        else if(a - b == c){
            cout << "Possible\n";
        }
        else if(b - a == c){
            cout << "Possible\n";
        }
        else if(a * b == c){
            cout << "Possible\n";
        }
        else if(a / b == c && a % b == 0){
            cout << "Possible\n";
        }
        else if(b / a == c && b % a == 0){
            cout << "Possible\n";
        }
        else{
            cout << "Impossible\n";
        }
    }
    return 0;
}
