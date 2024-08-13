#include <iostream>

using namespace std;

int main(){
    int n;
    n = 0;
    cin >> n;
    if (n % 2 == 0){
        cout << "Bob\n";
    }
    else{
        cout << "Alice\n";
    }
    return 0;
}
