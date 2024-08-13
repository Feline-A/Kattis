#include <iostream>

using namespace std;

int main(){
    int l, x, p, total, res;
    total = 0;
    res = 0;
    string el;
    cin >> l >> x;
    for(int i=1;i<=x;i++){
        cin >> el >> p;
        total += p;
        if (el == "enter" && total > l && total <= l){
            total -= p;
            res++;
        }
        else if(el == "leave"){
            total -=p;
        }
    }

    cout << res << "\n";
    return 0;
}
