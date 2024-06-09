#include<bits/stdc++.h>
using namespace std;
// hibatullah ddaaboul
class Graph {
int V;
vector<int> *adj;
stack<int> S;
vector<bool> visited;
vector<int> ids;
int id;
void dfs(int u) {
visited[u] = true;
for (int v : adj[u]) {
if (!visited[v]) {
dfs(v);
}
}
S.push(u);
}
//joudy habib
void dfs_reverse(int u) {
visited[u] = true;
ids[u] = id;
ids[u] = id;
//nour aldeen qeblawi
for (int v : adj[u]) {
if (!visited[v]) {
dfs_reverse(v);
}
}
}
//rula nattof
public:
Graph(int V) : V(V) {
adj = new vector<int>[V];
}
~Graph() {
delete[] adj;
}
//ahmad haroun
void addEdge(int u, int v) {
adj[u].push_back(v);
}
vector<vector<int>>;
stronglyConnectedComponents() {
visited.assign(V, false);
//fatima yehia
for (int u = 0; u < V; ++u) {
if (!visited[u]) {
dfs(u);
}
}
//mohammad shikh hasan
vector<vector<int>> SCC;
vector<vector<int>> SCC;
visited.assign(V, false);
ids.assign(V, -1);
id = 0;
while (!S.empty()) {
int u = S.top();
S.pop();
//mostafa manzilgi
if (!visited[u]) {
vector<int> component;
dfs_reverse(u);
//rand shiki
for (int v = 0; v < V; ++v) {
if (ids[v] == id) {
component.push_back(v);
}
}
SCC.push_back(component);
id++;
}
}
return SCC;
}
};
//yana adra
bool is2VertexStronglyBiconnected(Graph &graph) {
vector<vector<int>> SCC =
graph.stronglyConnectedComponents();
//aya amqia
if (graph.V < 3) {
return false;
}
for (int u = 0; u < graph.V; ++u) {
graph.adj[u].clear();
Graph subgraph(graph.V); 
//dima younso
for (int i = 0; i < graph.V; ++i) {
for (int v : graph.adj[i]) {
	//rasha ahmad
if (i != u && v != u) {
subgraph.addEdge(i, v);
edges to the subgraph
}
}
}
//kenana ahmad
vector<vector<int>> subgraphSCC =
subgraph.stronglyConnectedComponents();
subgraph.stronglyConnectedComponents();
//nirmeen hmidosh
if (subgraphSCC.size() != 1) {
return false;
}
}
return true;
}

