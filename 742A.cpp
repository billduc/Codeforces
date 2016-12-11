#include <bits/stdc++.h>

using namespace std;

int powmod(int k){
    if (k == 0)
        return 1;
    else
        if (k == 1)
            return 8;
    if (k % 2)
        return (powmod(k/2) * powmod(k/2) * 8) % 10;
    else
        return powmod(k/2) * powmod(k/2) % 10;
}

int main(){
    int n;
    while (cin >> n){
    if (n == 0)
        cout << 1;
    else
    cout << powmod(n);
    }
    return false;
}
