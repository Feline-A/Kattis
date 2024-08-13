#include <iostream>

using namespace std;

long long a[200100];

int main(){
    int n, t;
    long long ans = 0;
    cin >> n >> t;
    for(int i=0;i<n;i++){
        cin >> a[i];
    }

    if (t == 1){
        cout << "7\n";
    }
    else if (t == 2){
        if (a[0] > a[1]){
            cout << "Bigger\n";
        }
        else if (a[0] == a[1]){
            cout << "Equal\n";
        }
        else{
            cout << "Smaller\n";
        }
    }
    else if (t == 3){
        long long maxx = max(a[0], max(a[1], a[2]));
        long long minn = min(a[0], min(a[1], a[2]));
		cout << a[0]+a[1]+a[2]-maxx-minn << "\n";
    }
    else if (t == 4){
        for(int i=0;i<n;i++){
            ans += a[i];
        }
        cout << ans << "\n";
    }
    else if (t == 5){
        for(int i=0;i<n;i++){
            if (a[i] % 2 == 0){
                ans += a[i];
            }
        }
        cout << ans << "\n";
    }
    else if (t == 6){
        for(int i=0;i<n;i++){
            char z = (a[i] % 26)+97;
            cout << z;
        }
        cout << "\n";
    }
    else if (t == 7){
		int rept = 0;
		int idx = 0;
		bool stop = false;
		while (rept <= n && !stop){
			idx = a[idx]; rept++;
			if (idx >= n){
				cout << "Out\n"; stop = true;
			}
			else if (idx == n-1){
				cout << "Done\n"; stop = true;
			}

		}
		if (!stop){
			cout << "Cyclic\n";
		}
    }
    return 0;
}
