#include <bits/stdc++.h>

using namespace std;

#define rep(i,n) for(int i = 0; i < n; ++i)

struct point {
    float x,y;
};

void input(point & a)
{
    cin >> a.x >> a.y;
}

point get(point a, point b)
{
    point k;
    k.x = (a.x + b.x) / 2;
    k.y = (a.y + b.y) / 2;
    return k;
}

point getd(point t, point d){
    point k;
    k.x = t.x * 2 - d.x;
    k.y = t.y * 2 - d.y;
    return k;
}

//queue<int> d,r;

int a[1234];

int main(){
    //freopen("in.txt","r",stdin);
    int n;
    int s = 0;
    cin >> n;
    for(int i = 1; i <= n; ++i)
        {
            cin >> a[i];
            s+=a[i];
        }
    if (s!=0)
        {
            cout << "YES" << endl;
            cout << 1 << endl;
            cout << 1 <<" " << n;
            return 0;
        }
    s = 0;
    for(int i = 1; i <= n; ++i)
        {
            s+=a[i];
            if (s != 0)
            {
                cout << "YES\n";
                cout << 2 << endl;
                cout << 1 << " " << i << endl;
                cout << i + 1 << " " << n;
                return 0;
            }
        }
    cout << "NO";
    return false;
}
