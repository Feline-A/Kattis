#include <iostream>
#include <string>

using namespace std;

int main(){
    bool countt = true;
    string inp;
    int n;
    cin >> n;

    for (int i=1;i<=n;i++){
        cin >> inp;
        if (inp == "mumble"){
            continue;
        }
        else if (stoi(inp) != i){
            countt = false;
        }
    }

    if (countt == true){
        cout << "makes sense\n";
    }
    else{
        cout << "something is fishy\n";
    }
    return 0;
}
