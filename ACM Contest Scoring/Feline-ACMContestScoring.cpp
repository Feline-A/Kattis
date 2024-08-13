#include <iostream>

using namespace std;

int penalty[30]; //1-based index

int main(){
    char letter;
    string verd;
    int pen, n;
    int resPen, resScr;
    resScr = resPen = 0;
    while(cin >> pen && pen != -1){
        cin >> letter >> verd;
        n = ((int)letter)-64;
        if (verd == "right"){
            resPen += (pen + 20*(penalty[n]));
            resScr++;
        }
        else{
            penalty[n]++;
        }
    }
    cout << resScr << " " << resPen << "\n";
    return 0;
}
