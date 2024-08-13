#include <iostream>
using namespace std;

int main(){
    string name;
    cin >> name;
    char last = ' ';
    for (int i = 0; i < name.size(); i++){
        if (name[i] != last){
            cout << name[i];
        }
        last = name[i];
    }
    return 0;
}
