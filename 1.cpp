#include <iostream>
#include <list>
#include <memory>
   
class Graph
{
private:
    int _V;    
    bool _directed;
    std:: unique_ptr< std::list<int> > adj;  
    void DFSUtil(int v, bool visited[]);
      
public:
    Graph(int V, bool directed);
    void AddEdge(int v, int w); 
    void DepthFirstSearch(int s); 
};
#include <iostream>
#include <list>
#include <memory>
   
class Graph
{
private:
    int _V;    
    bool _directed;
    std:: unique_ptr< std::list<int> > adj;  
    void DFSUtil(int v, bool visited[]);
      
public:
    Graph(int V, bool directed);
    void AddEdge(int v, int w); 
    void DepthFirstSearch(int s); 
};
   
Graph::Graph(int V, bool directed) : (new std::list<int>[V])
{
    _V = V;
    _directed = directed;       
} 
void Graph::DepthFirstSearch(int v)
{
    // Mark all the vertices as not visited
    std::unique_ptr<bool[]> visited(new bool[_V]);
     
    for (int i = 0; i < _V; i++)
        visited[i] = false;
  
    // Call the recursive helper function to print DFS traversal
    DFSUtil(v, visited.get());
}
Graph::Graph(int V, bool directed) : (new std::list<int>[V])
{
    _V = V;
    _directed = directed;       
} 
void Graph::DepthFirstSearch(int v)
{
    // Mark all the vertices as not visited
    std::unique_ptr<bool[]> visited(new bool[_V]);
     
    for (int i = 0; i < _V; i++)
        visited[i] = false;
  
    // Call the recursive helper function to print DFS traversal
    DFSUtil(v, visited.get());
}  

   

  
void Graph::DFSUtil(int v, bool visited[])
{
    // Mark the current node as visited and print it
    visited[v] = true;
    std::cout << v << " ";
  
    // Recur for all the vertices adjacent to this vertex
    std::list<int>::iterator i;
    for (i = (adj.get())[v].begin(); i != (adj.get())[v].end(); ++i)
        if (!visited[*i])
            DFSUtil(*i, visited);
}
void Graph::AddEdge(int v, int w)
{
    std::list<int>* adjacency = adj.get();
    adjacency[v].push_back(w);
   
    if (!_directed)
    {
        adjacency[w].push_back(v);
    }
}
  

  
int main()
{
    Graph g(7, true);
    g.AddEdge(0, 1);
    g.AddEdge(0, 2);
    g.AddEdge(0, 3);
    g.AddEdge(1, 0);
    g.AddEdge(1, 5);
    g.AddEdge(2, 5);
    g.AddEdge(3, 0);
    g.AddEdge(3, 4);
    g.AddEdge(4, 6);
    g.AddEdge(5, 1);
    g.AddEdge(6, 5);
  
    std::cout << "Depth First Traversal starting from vertex 2:\n";
    g.DepthFirstSearch(2);
  
    return 0;
}
class Graph
{
private:
    int _V;    
    bool _directed;
    std:: unique_ptr< std::list<int> > adj;  
    void DFSUtil(int v, bool visited[]);
      
public:
    Graph(int V, bool directed);
    void AddEdge(int v, int w); 
    void DepthFirstSearch(int s); 
};
