#include <iostream>

using namespace std;

int solve(string s){
    string res1, res2;
    int res;
    res1 = s;
    res2 = to_string(res1.size());
    res = 1;
    while (res1 != res2){
        res++;
        res1 = res2;
        res2 = to_string(res1.size());
    }
    return res;
}

int main(){
    string s;

    while(cin >> s && s != "END"){
        cout << solve(s) << "\n";
    }

    return 0;
}
