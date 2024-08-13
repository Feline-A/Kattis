#include <iostream>

using namespace std;

int main(){
    string name;
    char a;
    int b;
    b = 0;
    cin >> name;
    cout << name[0];
    for(int i=1;i<name.size();i++){
        a = name[i];
        int b = (int) a;
        if(b == 45){
            cout << name[i+1];
        }
    }
    cout << "\n";
    return 0;
}
