#include<bits/stdc++.h>
using namespace std;

using ll = long long;
using ld = long double;
#define ff first
#define ss second
#define vi vector<int>
#define pii pair<int, int>
#define pis pair<int, string>
#define endl "\n"

unordered_map<int, vector<string>> g = {
    {1967, {"DavidBowie"}},
    {1969, {"SpaceOddity"}},
    {1970, {"TheManWhoSoldTheWorld"}},
    {1971, {"HunkyDory"}},
    {1972, {"TheRiseAndFallOfZiggyStardustAndTheSpidersFromMars"}},
    {1973, {"AladdinSane", "PinUps"}},
    {1974, {"DiamondDogs"}},
    {1975, {"YoungAmericans"}},
    {1976, {"StationToStation"}},
    {1977, {"Low", "Heroes"}},
    {1979, {"Lodger"}},
    {1980, {"ScaryMonstersAndSuperCreeps"}},
    {1983, {"LetsDance"}},
    {1984, {"Tonight"}},
    {1987, {"NeverLetMeDown"}},
    {1993, {"BlackTieWhiteNoise"}},
    {1995, {"1.Outside"}},
    {1997, {"Earthling"}},
    {1999, {"Hours"}},
    {2002, {"Heathen"}},
    {2003, {"Reality"}},
    {2013, {"TheNextDay"}},
    {2016, {"BlackStar"}}
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;
    while (T--) {
        int L, U;
        cin >> L >> U;

        int ans = 0;
        vector<pair<int, vector<string>>> m;
        for (auto &[year, p] : g) {
            if (L <= year && year <= U) {
                ans += p.size();
                m.push_back({year, p});
            }
        }

        sort(m.begin(), m.end());
        cout << ans << endl;
        for (auto &[y, n] : m) {
            for (auto &x : n) {
                cout << y << " " << x << endl;
            }
        }
    }
}
