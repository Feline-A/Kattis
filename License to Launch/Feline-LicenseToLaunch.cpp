#include <iostream>

using namespace std;

int main(){
    int n, i, a;
    int kecil, ind;
    cin >> n;

    cin >> a;
    kecil = a;
    ind = 0;
    for(i=1;i<n;i++){
        cin >> a;
        if(a < kecil){
            kecil = a;
            ind = i;
        }
    }
    cout << ind << "\n";
    return 0;
}
