//#include <iostream>
//#include <vector>
//#include <climits>  // Include this for INT_MAX
//#include <algorithm>  // Include this for sorting
//#include <iomanip>
//using namespace std;
//
//
//typedef pair<int, int> iPair;
//
//
//struct Graph
//{
//    int V, E;
//    vector< pair<int, iPair> > edges;
//
//    // Constructor 
//    Graph(int V, int E)
//    {
//        this->V = V;
//        this->E = E;
//    }
//
//    // Utility function to add an edge 
//    void addEdge(int u, int v, int w)
//    {
//        edges.push_back({ w, {u, v} });
//    }
//
//    // Function to find MST using Kruskal's 
//    // MST algorithm 
//    int kruskalMST();
//};
//
//
//struct DisjointSets
//{
//    int* parent, * rnk;
//    int n;
//
//    
//    DisjointSets(int n)
//    {
//     
//        this->n = n;
//        parent = new int[n + 1];
//        rnk = new int[n + 1];
//
//        // Initialize
//        for (int i = 0; i <= n; i++)
//        {
//            rnk[i] = 0;
//
//            // Every element is parent of itself 
//            parent[i] = i;
//        }
//    }
//
//    // Find the parent of a node 'u' 
//    
//    int find(int u)
//    {
//        /* Make the parent of the nodes in the path
//        from u-> parent[u] point to parent[u] */
//        if (u != parent[u])
//            parent[u] = find(parent[u]);
//        return parent[u];
//    }
//
//    // Union by rank 
//    void merge(int x, int y)
//    {
//        x = find(x), y = find(y);
//
//       
//        if (rnk[x] > rnk[y])
//            parent[y] = x;
//        else // If rnk[x] <= rnk[y] 
//            parent[x] = y;
//
//        if (rnk[x] == rnk[y])
//            rnk[y]++;
//    }
//};
//
//
//
//int Graph::kruskalMST()
//{
//    int mst_wt = 0; // Initialize result 
//
//    // Sort edges in increasing order on the basis of cost 
//    sort(edges.begin(), edges.end());
//
//    // Create disjoint sets 
//    DisjointSets ds(V);
//
//    // Iterate through all sorted edges 
//    vector< pair<int, iPair> >::iterator it;
//    for (it = edges.begin(); it != edges.end(); it++)
//    {
//        int u = it->second.first;
//        int v = it->second.second;
//
//        int set_u = ds.find(u);
//        int set_v = ds.find(v);
//
//        // Check if the selected edge is creating 
//        // a cycle or not (Cycle is created if u 
//        // and v belong to the same set) 
//        if (set_u != set_v)
//        {
//            // Current edge will be in the MST 
//            // so print it 
//
//            cout << "Edge" << setw(10) << "Weight\n";
//            cout << u << " - " << v << "\t" << it->first << endl;
//
//
//
//
//            
//            mst_wt += it->first;
//
//           
//            ds.merge(set_u, set_v);
//        }
//    }
//
//    return mst_wt;
//}
//
//int main()
//{
//    int V;
//    cout << "Enter the number of vertices: ";
//    cin >> V;
//
//    // Create a graph with V vertices and the number of edges (initially 0)
//    Graph g(V, 0);
//
//    // Read the adjacency matrix from the user (row by row)
//    cout << "Enter the adjacency matrix (each row of " << V << " space-separated integers for each vertex):\n";
//    vector<vector<int>> adjMatrix(V, vector<int>(V));
//
//    // Input the adjacency matrix row by row
//    for (int i = 0; i < V; i++) {
//        cout << "Enter row " << i + 1 << " values: ";
//        for (int j = 0; j < V; j++) {
//            cin >> adjMatrix[i][j];
//        }
//    }
//
//    // Add edges to the graph based on the adjacency matrix
//    for (int i = 0; i < V; i++) {
//        for (int j = i + 1; j < V; j++) {
//            if (adjMatrix[i][j] != 0) {
//                g.addEdge(i, j, adjMatrix[i][j]);
//            }
//        }
//    }
//
//    // Find and print the Minimum Spanning Tree using Kruskal's algorithm
//    cout << "Edges of MST are: \n";
//    int mst_wt = g.kruskalMST();
//
//    cout << "\nWeight of MST is " << mst_wt;
//
//    return 0;
//}