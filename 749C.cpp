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

queue<int> d,r;

int main(){
    freopen("in.txt","r",stdin);
    int n;
    cin >> n;
    string s;
    cin >> s;
    rep(i,n)
        if (s[i] == 'R')
            r.push(i);
        else
            d.push(i);
    while (!d.empty() && !r.empty())
    {
        int tr = r.front();
        int td = d.front();
        if (tr < td)
            {
                d.pop();
                r.pop();
                r.push(tr+n);
            }
        else
            {
                r.pop();
                d.pop();
                d.push(td + n);
            }
    }
    if (d.empty())
        cout << "R";
    else
        cout << "D";
    return false;
}
