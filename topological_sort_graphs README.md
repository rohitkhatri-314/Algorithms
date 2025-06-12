Topological sort is used to order the nodes of a Directed Acyclic Graph (DAG) such that each node appears before the nodes it points to.

It is commonly used for task scheduling, dependency resolution, and course prerequisite ordering.

This implementation uses Depth-First Search (DFS) to explore all nodes.

Each node is pushed onto a stack after visiting all of its dependencies.

A visited array is used to mark completed nodes.

A recursion stack is used to track nodes in the current DFS path to detect cycles.

If a node is found again in the same DFS path, it indicates a cycle, and topological sort is not possible.

After all DFS calls are done, the topological order is obtained by popping nodes from the stack.

The time complexity is O(V + E) where V is the number of vertices and E is the number of edges.

The graph must not contain a cycle for a valid topological sort to exist.

refer this video for detailed explaination 
https://www.youtube.com/watch?v=qe_pQCh09yU