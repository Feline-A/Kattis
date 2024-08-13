#include <iostream>

using namespace std;

int main(){
    string a;
    cin >> a;
    string b = "e";
    int c = 0;
    if (a == "Later!"){
        cout << "Alligator!\n";
    }
    else{
        for(int i=0;i<a.size();i++){
            if (a.find(b) != -1){
                a.erase(b, 1);
                c++;
            }
        }
    }
    return 0;
}
