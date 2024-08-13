#include <iostream>

using namespace std;

char letter[40];

int main(){
    string s;
    cin >> s;
    int total;
    total = 0;
    for(int i=0;i<s.size();i++){
        letter[i] = s[i];
    }

    for(int i=0;i< s.size();i++){
        if (letter[i] == letter[i+1] && letter[i] == 's' && letter[i+1] == 's'){
            total++;
        }
    }

    if (total > 0){
        cout << "hiss\n";
    }
    else{
        cout << "no hiss\n";
    }
    return 0;
}
