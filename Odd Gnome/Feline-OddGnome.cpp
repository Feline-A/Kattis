#include <iostream>

using namespace std;

int main(){
    bool found;
    int n, g, inp, bef, ind;
    cin >> n;
    while (n--){
        found = false;
        ind = -1;

        cin >> g;
        cin >> inp;
        bef = inp;

        for (int i=2;i<=g;i++){
            cin >> inp;
            if (!found && inp - bef != 1){
                ind = i;
                found = true;
            }
            bef = inp;
        }
        cout << ind << "\n";
    }
    return 0;
}
