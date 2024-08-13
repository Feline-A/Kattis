#include <iostream>

using namespace std;

int main(){
    int n, i, courses;
    string name, studies, date;
    cin >> n;
    for(i=1;i<=n;i++){
        cin >> name >> studies >> date >> courses;
        cout << name << " ";

        if (studies >= "2010/00/00"){
            cout << "eligible\n";
        }
        else if(date >= "1991/00/00"){
            cout << "eligible\n";
        }
        else if (courses >= 41){
            cout << "ineligible\n";
        }
        else{
            cout << "coach petitions\n";
        }
    }
    return 0;
}
