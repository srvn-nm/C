#include <bits/stdc++.h>
#include <unistd.h>

using namespace std;
#define INF 0x3f3f3f3f
 
typedef pair<int, int> iPair;
 
class Graph {
    int V; 
 
    list<pair<int, int> >* adj;
 
public:
    Graph(int V); 
 
    void addEdge(int u, int v, int w);
 
    void shortestPath(int s);
};
 
Graph::Graph(int V)
{
    this->V = V;
    adj = new list<iPair>[V];
}
 
void Graph::addEdge(int u, int v, int w)
{
    adj[u].push_back(make_pair(v, w));
    
}
 
void Graph::shortestPath(int src)
{
    priority_queue<iPair, vector<iPair>, greater<iPair> >
        pq;
 
    vector<int> dist(V, INF);
 
    pq.push(make_pair(0, src));
    dist[src] = 0;
 
    while (!pq.empty()) {

        int u = pq.top().second;
        pq.pop();
 
        list<pair<int, int> >::iterator i;
        for (i = adj[u].begin(); i != adj[u].end(); ++i) {
            
            int v = (*i).first;
            int weight = (*i).second;
 
            if (dist[v] > dist[u] + weight) {
                
                dist[v] = dist[u] + weight;
                pq.push(make_pair(dist[v], v));
            }
        }
    }
 
    printf("Vertex Distance from Source\n");
    for (int i = 0; i < V; ++i)
        printf("%d \t\t %d\n", i, dist[i]);
}
 
int main()
{
    
    int V = 5;
    Graph g(V);
 
    g.addEdge(1, 2, 0);
    g.addEdge(3, 2, 0);
    g.addEdge(1, 3, 9);
    g.addEdge(2, 5, 6);
    g.addEdge(2, 4, 0);
    g.addEdge(4, 3, 0);
    g.addEdge(5, 1, 0);
    g.addEdge(5, 4, 6);
    g.addEdge(4, 1, 6);

    g.shortestPath(1);
 
    sleep(1000);
    return 0;
}