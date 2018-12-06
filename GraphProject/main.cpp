#include <iostream>
#include "GraphType.cpp"
using namespace std;


int main()
{
    GraphType<char> V;
    V.AddVertex('A');
    V.AddVertex('B');
    V.AddVertex('C');
    V.AddVertex('D');
    V.AddVertex('E');
    V.AddVertex('F');
    V.AddVertex('G');
    V.AddVertex('H');

    V.AddEdge('A','B',1);
    V.AddEdge('B','A',1);
    V.AddEdge('A','C',1);
    V.AddEdge('A','D',1);
    V.AddEdge('D','A',1);
    V.AddEdge('D','G',1);
    V.AddEdge('D','E',1);
    V.AddEdge('G','F',1);
    V.AddEdge('F','H',1);
    V.AddEdge('H','E',1);
    cout << V.OutDegree('A')<<endl;

}
