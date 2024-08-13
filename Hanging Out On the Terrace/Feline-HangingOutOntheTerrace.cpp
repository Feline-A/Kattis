#include <iostream>

using namespace std;

int main(){
    int l, x;
    string word;
    int p, total, res;
    total = 0;
    res = 0;

    cin >> l >> x;
    for(int i=1;i<=x;i++){
        cin >> word >> p;
        if (word == "enter"){
            if (total+p <= l){
                total += p;
            }
            else{
                res++;
            }
        }
        else{
            total -= p;
        }
    }

    cout << res << "\n";
    return 0;
}
