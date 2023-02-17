#include <iostream>
using namespace std;


struct Vertex
{
    char ID;
    string vector;
   vector<Vertex*> adjacents;
    void addAdjacent(Vertex *v);
    unsigned int numAdjacent() const { return this->adjacents.size(); }
};

class Graph
{
private:
    std::vector<Vertex*> vertices;
    std::vector< std::pair<Vertex*, Vertex*> > edges;
    //going to use this to sort the list of vertices
    static bool compareVertices(const Vertex *a, const Vertex *b)
    {
        return (a->numAdjacent() < b->numAdjacent());
    }
public:
    //mutators
    void addVertex(Vertex *v);
    void addVertex(char c);
    void addEdge(std::pair<Vertex*, Vertex*> p);
    void addEdge(Vertex* a, Vertex* b);
    void addEdge(char a, char b);
    void sortVertices()    { std::sort(vertices.begin(), vertices.end(), compareVertices); }
    //accessors
    unsigned int numVertices() const { return this->vertices.size(); }
    unsigned int numEdges() const { return this->edges.size(); }
    Vertex* getVertex(unsigned int i) { return vertices[i]; }
};


bool areIsomorphic(Graph &a, Graph &b)
{
    if (a.numVertices() != b.numVertices())
        return false;
    if (a.numEdges() != b.numEdges())
        return false;
    a.sortVertices();
    b.sortVertices();
    for (unsigned int i = 0; i < a.numVertices(); ++i)
    {
        if (a.getVertex(i)->numAdjacent() != b.getVertex(i)->numAdjacent())
            return false;
    }
    return true;
}
