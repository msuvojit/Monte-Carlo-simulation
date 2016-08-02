#include<iostream>
using namespace std;

class Graph;
//To implement a graph we need a vertex class with will describe the attribute for each vertex
class Vertex
{
    private:
        const Graph* graph;
        unsigned vID;
        Vertex(const Graph* g, unsigned ID):graph(g),vID(ID){}
        friend class Graph;
        friend class Edge;
    public:
        Vertex():graph(0),vID(0){}
        
        unsigned id() const
        {
            return vID;
        }
        
        bool operator==(const Vertex& v) const
        {
            return (graph==v.graph)&&(vID==v.vID);
        }
        
        bool operator!=(const Vertex& v) const
        {
            return (graph!=g.graph)&&(vID!=v.vID);
        }
        
}

//We also need edge class which will define the behaviour of the edges
class Edge
{
    private:
        const Graph* graph;
        unsigned eID;
        unsigned eWT;
        unsigned sourceNode;
        unsigned destNode;
        Edge(const Graph* g, unsigned id, unsigned wt, unsigned source, unsigned dest): graph(g), eID(id), eWT(wt), sourceNode(source), destNode(dest){}
    public:
        Edge(): graph(0), eID(0), eWT(0), sourceNode(0), destNode(0){}
}


class Graph
{
    public:
        //Return number of vertices in a graph
        int V(Graph G)
        {
           
        }
        //Return number of edges in a graph
        int E(Graph G)
        {
            
        }
        //Test wheyher there is an edge in graph G from node x to node y
        void adjacent(Graph G, int x, int y)
        {
            
        }
        //List all node y such that there is an edge from node x to node y
        void neighbour(Graph G, int x)
        {
            
        }
        //Adds to G an edge from node x to node y if not already present
        void add(Graph G, int x, int y)
        {
            
        }
        //Delete an edge from node x to node y if an edge is present
        void delete(Graph G, int x, int y)
        {
            
        }
        //return the value associated with node x
        void get_node_value(Graph G, int x)
        {
            
        }
        //Set a node value of node x to value a
        void set_node_value(Graph G, int x, int a)
        {
            
        }
        //Return value of edge(x,y)
        void get_edge_value(Graph G, int x, int y)
        {
            
        }
        //set edge(x,y) the value v
        void set_edge_value(Graph G, int x, int y, int v)
        {
            
        }
        
};

class PriorityQueue
{
  public:
    //Changes the priority(node value) of queue element
    void chgPrioirity(PriorityQueue PQ, int priority)
    {
        
    }
    //Removes the top element of the queue
    void minPrioirty(PriorityQueue PQ)
    {
        
    }
    //Does the queue contain queue element
    void contains(PrioerityQueue PQ, int queue_element)
    {
        
    }
    //Insert queue element into the queue
    void Insert(PriorityQueue PQ, int queue_element)
    {
        
    }
    //Returns top element of the queue
    void top(PriorityQueue PQ)
    {
        
    }
    //Returns the number of queue element
    void size(PriorityQueue PQ)
    {
        
    }
};

class ShortestPathAlgo
{
    public:
    //Returns list of vertices in G(V,E)
    void vertices(List)
    {
        
    }
    //find shortest path between u-w and returns the sequence of vertices representing shorest path u-v1-v2-…-vn-w
    void path(u, w)
    {
        
    }
    //return the path cost associated with the shortest path
    int path_size(u, w)
    {
        
    }
};