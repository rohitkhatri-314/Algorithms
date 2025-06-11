 Logic to Detect Cycle in Directed Graph:
Start DFS from each unvisited node.

Use two arrays:

visited[] — marks if a node was visited.

recStack[] — marks if a node is in the current DFS path.

During DFS:

If you visit an unvisited neighbor, recurse.

If you visit a neighbor that's already in the recursion stack, a cycle is found.

After recursion, remove the node from recStack.

 Intuition:
If during DFS, you return to a node that's still part of your current DFS path, you're going in a loop — hence, a cycle!