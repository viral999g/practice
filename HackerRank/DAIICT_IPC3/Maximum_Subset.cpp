
#include <iostream>
#include <iterator>
#include <set>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.precision(10);
    cout << fixed;

    int n;
    cin >> n;
    while(n--){
        int l, r, g;
        cin >> l >> r >> g;

        while(l < r){
            if(l%g == 0)
                break;
            
            l++;
        }

        while(r > l){
            if(r%g == 0)
                break;
            r--;
        }

        if(l==r)
            cout << 1;
        else if(r - l == g)
            cout << 2;
        else
            cout << (r - l) / g;
        cout << '\n';

    }



    return 0;
}