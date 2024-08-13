#include <iostream>
#include <sstream>

using namespace std;

int main(){
    int n, a, b, i;
    string x;
    cin >> n;
    for(i=1;i<=n;i++){
        cin >> x;
        if (x == "P=NP"){
            cout << "skipped\n";
        }
        else{
        istringstream iss(x);
        iss >> a >> b;
        cout << a + b << "\n";
        }
    }
    return 0;
}
