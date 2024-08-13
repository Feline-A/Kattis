#include <iostream>

using namespace std;

int main(){
    string a;
    bool ans = false;

    cin >> a ;

    for(int i=1;i<=a.size()-1;i++){
        for(int j=a.size()-1;j=0;j--){
            cout << "2 = " << a[i] << " = " << a[j]<< "\n";
            if (a[i] == a[j]){
                ans = true;
            }
        }
    }

    if (ans == true){
        cout << 0 << "\n";
    }
    else{
        cout << 1 << "\n";
    }
    return 0;
}
