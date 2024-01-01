#pragma GCC optimize ("O3")
#pragma GCC optimize ("Ofast")
#pragma GCC optimize ("unroll-loops")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,avx,avx2")

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef __int128 lll;
typedef long double ld;
typedef pair<ll, ll> pll;
#define MAX 9223372036854775807LL
#define MIN -9223372036854775807LL
#define INF 0x3f3f3f3f3f3f3f3f
#define fi first
#define se second
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL); cout << fixed; cout.precision(10);
#define sp << " "
#define en << "\n"
#define compress(v) sort(v.begin(), v.end()), v.erase(unique(v.begin(), v.end()), v.end())

ll n, m;
ll p[1000010], all;
vector<ll> leaf;
vector<pll> vec[1000010];
ll bll;
ll w[1000010];
ll deg[1000010];
ll is_leaf[1000010], leafnum[1000010];
ll q;
pll Q[1000010];
ll R[1000010];
ll siz[1000010];
ll chk[1000010];
ll cc;
vector<ll> grp;
ll dist[1000010];
ll ans[1000010];
ll semi_chk[1000010];
vector<ll> haha;
ll ccc;
pll dista[1000010];
ll chldcou[1000010];
ll chldLR[1000010][3];
vector<pll> LF;
ll gapgp;

void dfs(ll here, ll pa)
{
    siz[here] = 1;
    chk[here] = cc;
    grp.push_back(here);

    for (auto &i : vec[here])
    {
        if (i.fi == pa || R[i.fi])
            continue;

        dfs(i.fi, here);
        siz[here] += siz[i.fi];
    }
}

void dfs3(ll here, ll pa)
{
    semi_chk[here] = ccc;

    for (auto &i : vec[here])
    {
        if (i.fi == pa || R[i.fi])
            continue;

        dfs3(i.fi, here);
    }
}

ll get_cent(ll here, ll pa, ll Tsiz)
{
    for (auto &i : vec[here])
    {
        if (i.fi == pa || R[i.fi])
            continue;

        if (siz[i.fi] * 2 > Tsiz)
            return get_cent(i.fi, here, Tsiz);
    }

    return here;
}

ll mini, maxi;

void dfs2(ll here, ll pa)
{
    if (is_leaf[here])
        LF.push_back({here, gapgp});

    for (auto &i : vec[here])
    {
        if (i.fi == pa || chk[i.fi] != cc || R[i.fi])
            continue;

        dfs2(i.fi, here);
    }
}

void dijkstra(ll ST)
{
    for (auto &i : grp)
        dist[i] = INF;

    priority_queue<pll> pq;

    dist[ST] = 0;
    pq.push({0, ST});

    while (!pq.empty())
    {
        pll qq = pq.top();
        pq.pop();

        for (auto &i : vec[qq.se])
        {
            if (R[i.fi] || chk[i.fi] != cc)
                continue;

            if (dist[i.fi] > dist[qq.se] + i.se)
            {
                dist[i.fi] = dist[qq.se] + i.se;
                pq.push({-dist[i.fi], i.fi});
            }
        }
    }
}

void f(ll here, vector<ll> qry)
{
    grp.clear();
    cc++;
    dfs(here, 0);
    ll rt = get_cent(here, 0, siz[here]);
    vector<ll> LF2;

    LF.clear();

    for (auto &i : vec[rt])
    {
        if (R[i.fi] || chk[i.fi] != cc)
            continue;

        mini = MAX;
        maxi = MIN;
        gapgp = i.fi;
        dfs2(i.fi, rt);
    }

    for (auto &i : grp)
    {
        if (is_leaf[i])
            LF2.push_back(i);
    }

    sort(LF.begin(), LF.end());
    sort(LF2.begin(), LF2.end());

    ll sizz = (ll)LF2.size();

    if (sizz)
    {
        LF2.push_back(LF2[0]);

        for (ll i = 0; i < sizz; i++)
        {
            if ((leafnum[LF2[i]] + 1) % m == leafnum[LF2[i + 1]])
            {
                vec[LF2[i]].push_back({LF2[i + 1], w[leafnum[LF2[i]]]});
                vec[LF2[i + 1]].push_back({LF2[i], w[leafnum[LF2[i]]]});
            }
        }
    }

    dist[rt] = 0;
    dijkstra(rt);

    for (auto &i : qry)
    {
        if (chk[Q[i].fi] != cc || chk[Q[i].se] != cc)
            assert(0);

        ans[i] = min(ans[i], dist[Q[i].fi] + dist[Q[i].se]);
    }

    ll sizzz = (ll)LF.size();

    if (sizzz)
    {
        LF.push_back(LF[0]);

        for (ll i = 0; i < sizzz; i++)
        {
            if (LF[i].se != LF[i + 1].se)
            {
                if ((leafnum[LF[i].fi] + 1) % m == leafnum[LF[i + 1].fi])
                {
                    dijkstra(LF[i].fi);

                    for (auto &j : qry)
                    {
                        if (chk[Q[j].fi] != cc || chk[Q[j].se] != cc)
                            assert(0);

                        ans[j] = min(ans[j], dist[Q[j].fi] + dist[Q[j].se]);
                    }
                }
            }
        }
    }

    if (sizz)
    {
        for (ll i = 0; i < sizz; i++)
        {
            if ((leafnum[LF2[i]] + 1) % m == leafnum[LF2[i + 1]])
            {
                vec[LF2[i]].pop_back();
                vec[LF2[i + 1]].pop_back();
            }
        }
    }

    R[rt] = 1;

    for (auto &i : vec[rt])
    {
        if (R[i.fi])
            continue;

        ccc++;
        dfs3(i.fi, rt);
        vector<ll> tmpp;

        for (auto &j : qry)
        {
            if (semi_chk[Q[j].fi] == ccc && semi_chk[Q[j].se] == ccc)
                tmpp.push_back(j);
        }

        f(i.fi, tmpp);
    }
}

int main(void)
{
    fastio

    cin >> n;

    ll vnum = n;

    for (ll i = 2; i <= n; i++)
    {
        cin >> p[i] >> all;

        if (chldcou[p[i]] < 2)
        {
            chldLR[p[i]][chldcou[p[i]]] = i;
            chldcou[p[i]]++;
            dista[i] = {p[i], all};
        }

        else
        {
            ll helpme = chldLR[p[i]][1];
            vnum++;
            chldLR[p[i]][1] = vnum;
            dista[vnum] = {p[i], 0};

            chldcou[vnum] = 2;
            chldLR[vnum][0] = helpme;
            chldLR[vnum][1] = vnum;
            dista[helpme].fi = vnum;
            dista[i] = {vnum, all};
        }
    }

    n = vnum;

    for (ll i = 2; i <= n; i++)
    {
        p[i] = dista[i].fi;
        vec[i].push_back(dista[i]);
        vec[p[i]].push_back({i, dista[i].se});
        deg[i]++;
        deg[p[i]]++;
    }

    for (ll i = 1; i <= n; i++)
    {
        if (deg[i] == 1)
        {
            is_leaf[i] = 1;
            leafnum[i] = (ll)leaf.size();
            leaf.push_back(i);
        }
    }

    m = (ll)leaf.size();

    for (ll i = 0; i < m; i++)
        cin >> w[i];

    cin >> q;

    for (ll i = 1; i <= q; i++)
    {
        cin >> Q[i].fi >> Q[i].se;

        ans[i] = INF;
        haha.push_back(i);
    }

    f(1, haha);

    for (ll i = 1; i <= q; i++)
        cout << ans[i] en;

    return 0;
}
