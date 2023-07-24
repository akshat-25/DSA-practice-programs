#include <iostream>
#include <unordered_map>
#include <list>
#include <vector>
using namespace std;

int min(int a, int b)
{
    if (a < b)
        return a;

    return b;
}

void dfs(int node, int parent, int &timer, vector<int> &disc, vector<int> &low, vector<int> &ap, unordered_map<int, bool> &vis, unordered_map<int, list<int>> adj)
{

    vis[node] = true;
    disc[node] = low[node] = timer++;
    int child = 0;

    for (auto nbr : adj[node])
    {
        if (nbr == parent)
            continue;

        if (!vis[nbr])
        {
            dfs(nbr, node, timer, disc, low, ap, vis, adj);
            low[node] = min(low[node], low[nbr]);

            // Check AP or not
            if (low[nbr] >= disc[node] && parent != -1)
            {
                ap[node] = true;
            }
            child++;
        }
        else
        {
            // Back Edge
            low[node] = min(low[node], disc[nbr]);
        }
    }

    if (parent == -1 && child > 1)
    {
        ap[node] = 1;
    }
}

int main(int argc, char const *argv[])
{
    int n = 5;
    int e = 5;
    vector<pair<int, int>> edges;
    edges.push_back(make_pair(0, 3));
    edges.push_back(make_pair(3, 4));
    edges.push_back(make_pair(0, 1));
    edges.push_back(make_pair(1, 2));
    edges.push_back(make_pair(0, 4));
    // adjacency list
    unordered_map<int, list<int>> adj;
    for (int i = 0; i < edges.size(); i++)
    {
        int u = edges[i].first;
        int v = edges[i].second;

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    int timer = 0;
    vector<int> disc(n);
    vector<int> low(n);
    unordered_map<int, bool> vis;

    vector<int> ap(n, 0); // size is -> n and start from -> 0

    for (int i = 0; i < n; i++)
    {
        disc[i] = -1;
        low[i] = -1;
    }

    // dfs
    for (int i = 0; i < n; i++)
    {
        if (!vis[i])
        {
            dfs(i, -1, timer, disc, low, ap, vis, adj);
        }
    }

    // print
    cout << "Articulation Points are " << endl;
    for (int i = 0; i < n; i++)
    {
        if (ap[i] != 0)
        {
            cout << i << " ";
        }
    }

    return 0;
}