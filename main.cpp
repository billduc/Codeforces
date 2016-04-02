#include <bits/stdc++.h>

using namespace std;

#define X first
#define Y second
#define pb push_back
#define mp make_pair
#define sz(a) ((int)(a).size())
#define all(a) (a).begin(),(a).end()
#define DEBUG(x) {cout<< #x <<" = " << x <<endl;}

typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> ii;

string s[1000111];
set<string> myset;

int main(){
    //freopen("in.txt","r",stdin);
    ios::sync_with_stdio(false);
    int n;
    cin >> n;
    for(int i = 0;i < n; ++i)
        cin >> s[i];
    for(int i = n - 1 ;i >= 0; --i){
        if (myset.count( s[i] ))
            continue;
        myset.insert(s[i]);
        cout << s[i] <<endl;
    }

    #ifdef home
        eprintf("time = %d ms\n",(int)(clock() * 1000. / CLOCKS_PER_SEC));
    #endif
    return 0;
}
