

**Depth-First Search (DFS) in C++ – Code Explanation**

This code demonstrates the implementation of the **Depth-First Search (DFS)** algorithm using an iterative approach with a stack. The graph is represented as an **adjacency list**, where each index in the 2D vector represents a node and its list contains its neighbors.

### Key Components:

* **Graph Representation**:
  The graph is stored as a `vector<vector<int>>`, which efficiently represents connections between nodes.

* **DFS Function**:
  The `dfs` function performs the traversal. Instead of using recursion, it uses an explicit `stack` to mimic the recursive call stack. A `set` named `visited` keeps track of already visited nodes to avoid processing the same node multiple times.

* **Traversal Logic**:

  * The starting node is pushed onto the stack.
  * While the stack is not empty:

    * The top node is popped and checked. If it's already visited, it's skipped.
    * Otherwise, it is marked as visited and printed.
    * Its unvisited neighbors are pushed onto the stack.
  * The neighbors are added in **reverse order** using `rbegin()` so that they are visited in the correct DFS order when popped from the stack.

* **Main Function**:
  The graph is initialized with hardcoded connections (an undirected graph). The `dfs` function is called with node 0 as the starting point.

### Output:

The traversal prints each node as it is visited, following the depth-first manner—going as deep as possible along each branch before backtracking.

### Use Case:

This is a foundational example for learning how iterative DFS works. It’s helpful for:

* Understanding graph traversal
* Preparing for coding interviews
* Solving problems like connected components, path finding, and cycle detection in graphs

This iterative version also avoids the risk of stack overflow that may occur in recursive implementations for large graphs.


