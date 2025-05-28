

**Breadth-First Search (BFS) in C++ – Code Explanation**

This code demonstrates the implementation of the Breadth-First Search (BFS) algorithm on an undirected graph using C++. The graph is represented as an adjacency list using a `vector of vectors`, where each index represents a node and contains a list of its neighboring nodes.

The `bfs` function takes the adjacency list and a starting node as input. It uses a queue to explore nodes in a level-wise manner and a set to keep track of visited nodes to avoid processing the same node multiple times. It begins by pushing the starting node into the queue and marking it as visited. Then, in a loop, it pops the front node from the queue, prints it, and adds all its unvisited neighbors to the queue, marking them as visited.

The `main` function defines a sample graph and calls the `bfs` function starting from node 0. The output shows the order in which nodes are visited using the BFS traversal.

This code is ideal for beginners looking to understand how BFS works in a simple and structured way.
