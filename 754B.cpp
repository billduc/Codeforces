#include <bits/stdc++.h>

using namespace std;

#define rep(i,n) for(int i = 0; i < n; ++i)

string s[5];

bool check(int x, int y){
    if (x >= 0 && x < 4 && y >= 0 && y < 4 && s[x][y] == 'x')
        return true;
    return false;
}


bool checkPoint(int x, int y){
    if (check(x-2,y) && check(x-1,y))
        return true;
    if (check(x-1,y) && check(x+1,y))
        return true;
    if (check(x+1,y) && check(x+2,y))
        return true;
    if (check(x,y-2) && check(x,y-1))
        return true;
    if (check(x,y-1) && check(x,y+1))
        return true;
    if (check(x,y+1) && check(x,y+2)) return true;

    if (check(x+1,y+1) && check(x+2,y+2)) return true;
    if (check(x-2,y-2) && check(x-1,y-1)) return true;
    if (check(x-1,y-1) && check(x+1,y+1)) return true;

    if (check(x-1,y+1) && check(x-2,y+2)) return true;
    if (check(x-1,y+1) && check(x+1,y-1)) return true;
    if (check(x+1,y-1) && check(x+2,y-2)) return true;
    return false;
}

int main(){
    freopen("in.txt","r",stdin);
    for(int i = 0; i < 4; ++i)
        cin >> s[i];
    for(int i = 0;i < 4; ++i)
        for(int j =0;j < 4; ++j)
            if (s[i][j] == '.')
            {
                if (checkPoint(i,j))
                    {
                        cout << "YES";
                        return 0;
                    }
            }
    cout << "NO";
    return false;
}
