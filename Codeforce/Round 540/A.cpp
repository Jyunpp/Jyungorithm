// 20190303 16:40 ~ 16:45
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <memory.h>
#include <algorithm>
#include <vector>
#include <queue>
#include <stack>
#include <math.h>
using namespace std;

#define sd(x) scanf(" %d", &x);
#define slld(x) scanf(" %lld", &x);
#define pb push_back
#define xx first
#define yy second
#define rep(i, l, r) for(int i=l; i<r; i++)
#define sortV(v, lambda) sort(v.begin(), v.end(), lambda)
#define powll(a, b) (ll) pow(a, b)

typedef long long ll;
typedef pair<int, int> P;
typedef pair<ll, ll> Pll;

int q;
ll n, a, b, ans;

int main() {
    cin>>q;
    while(q--) {
        ans = 0;
        cin>>n>>a>>b;
        if(a*2<=b) {
            ans = n*a;
        } else {
            ans = (n/2) * b + (n%2) * a;
        }
        cout <<ans<<endl;
    }
}