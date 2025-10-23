Bellman-Ford Algorithm (C++)

This repository contains an implementation of the Bellman-Ford algorithm, which is used to compute the shortest path from a single source node to all other nodes in a weighted directed graph. It supports negative edge weights and can detect negative weight cycles.

How the Code Works

A distance array is initialized with infinity (INT_MAX), and the distance of the source node is set to 0.

The algorithm runs (n - 1) iterations, and in each iteration, every edge (u → v) tries to relax the distance using the formula:
dist[v] = min(dist[v], dist[u] + weight)

After relaxation, a final pass is made to check for further relaxation. If any edge can still be relaxed, a negative weight cycle exists.

If there is no negative cycle, the program prints the shortest distance from the source to every node.

Time Complexity

O(V × E)

Example Graph Used

0 → 1 with weight 2
0 → 2 with weight 2
1 → 2 with weight -1

Sample Output

min dist from source to 0th node is 0
min dist from source to 1th node is 2
min dist from source to 2th node is 1

If a negative cycle exists, the program prints:
Negative cycle detected! shortest paths are not valid.
