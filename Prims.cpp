//
//
//#include <iostream>
//#include <vector>
//#include <queue>
//#include <iomanip>
//using namespace std;
//
//// Function to construct and print the MST
//void primMST(vector<vector<int>>& graph, int v) {
//    // vector to store the parent of vertex
//    vector<int> parent(v);
//
//    // vector holds the weight/ cost of the MST
//    vector<int> key(v);
//
//    // vector to represent the set of vertices included in MST
//    vector<bool> vis(v);
//
//    priority_queue<pair<int, int>,
//        vector<pair<int, int>>,
//        greater<pair<int, int>>> pq;
//
//    // Initialize all key vector as INFINITE and vis vector as false
//    for (int i = 0; i < v; i++) {
//        key[i] = INT_MAX;
//        vis[i] = false;
//    }
//
//   
//    key[0] = 0;
//    parent[0] = -1;  // First node is always the root of MST
//
//    // Push the source vertex to the min-heap
//    pq.push({ 0, 0 });
//
//    while (!pq.empty()) {
//        int node = pq.top().second;
//        pq.pop();
//        vis[node] = true;
//
//        for (int i = 0; i < v; i++) {
//            // If the vertex is not visited and the edge weight is less than key value
//            if (!vis[i] && graph[node][i] != 0 && graph[node][i] < key[i]) {
//                pq.push({ graph[node][i], i });
//                key[i] = graph[node][i];
//                parent[i] = node;
//            }
//        }
//    }
//
//    int Total = 0;
//    cout << "Edge" << setw(10) << "Weight\n";
//    for (int i = 1; i < v; i++) {
//        cout << parent[i] << " - " << i << " \t" << graph[i][parent[i]] << " \n";
//        Total += graph[i][parent[i]];
//    }
//    cout << "Minimum Cost Using Prims Algorithm: " << Total << endl;
//}
//
//int main() {
// 
//      //Define the adjacency matrix
//    vector<vector<int>> graph = { {0, 4, 4, 0, 0, 0},
//                                {4, 0, 2, 0, 0, 0},
//                                {4, 2, 0, 3, 4, 2},
//                                {0, 0, 3, 0, 3, 0},
//                                {0, 0, 4, 3, 0, 3},
//                                {0, 0, 2, 0, 3, 0} };     
//
//    // Find and print the Minimum Spanning
//    // Tree using Prim's algorithm
//    cout << endl << "PRIMS MST:\n";
//    primMST(graph,6);
////
//    return 0;
//}
//
//
//
