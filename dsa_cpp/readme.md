# Data Structures and Algorithms with Golang

## 1. Data Structures

### 1.1 Arrays and Slices

- **Dynamic Arrays**: Resizable arrays that can grow or shrink in size.
- **Multi-dimensional Arrays**: Arrays of arrays, useful for matrix representations.

### 1.2 Linked Lists

- **Singly Linked List**: Each node points to the next node.
- **Doubly Linked List**: Nodes have pointers to both the next and previous nodes.
- **Circular Linked List**: The last node points back to the first node, forming a circle.

### 1.3 Stacks

- **Implementation using Arrays/Slices**: LIFO structure using slices.
- **Implementation using Linked Lists**: Nodes are added and removed from the head.

### 1.4 Queues

- **Simple Queue**: FIFO structure using slices or linked lists.
- **Circular Queue**: Fixed-size queue that wraps around.
- **Priority Queue (Heap)**: Elements are dequeued based on priority.

### 1.5 Trees

- **Binary Trees**: Each node has at most two children.
  - **Tree Traversal**: Pre-order, In-order, Post-order.
- **Binary Search Trees (BSTs)**: Left child < parent < right child.
- **AVL Trees**: Self-balancing binary search trees.
- **B-Trees**: Balanced tree data structure for databases.
- **Tries (Prefix Trees)**: Efficient for prefix-based searches.

### 1.6 Graphs

- **Representation**:
  - **Adjacency Matrix**: 2D array representation.
  - **Adjacency List**: Array of lists representation.
- **Graph Traversal**:
  - **Depth-First Search (DFS)**: Explores as far as possible along each branch.
  - **Breadth-First Search (BFS)**: Explores neighbors before going deeper.
- **Weighted Graphs and Unweighted Graphs**: Graphs with or without weights on edges.

### 1.7 Heaps

- **Min-Heap**: Parent nodes are less than or equal to child nodes.
- **Max-Heap**: Parent nodes are greater than or equal to child nodes.

### 1.8 Hash Tables (Maps)

- **Implementing a Hash Table**: Key-value pairs for fast lookups.
- **Collision Resolution Strategies**: Chaining and open addressing.

### 1.9 Sets

- **Implementation using Maps**: Unique elements stored as keys in a map.
- **Operations**: Union, Intersection, Difference.

### 1.10 Advanced Data Structures

- **Disjoint Set (Union-Find)**: Keeps track of elements partitioned into disjoint sets.
- **Segment Trees**: Efficient for range queries.
- **Fenwick Tree (Binary Indexed Tree)**: Efficient for cumulative frequency tables.

---

## 2. Algorithms

### 2.1 Sorting Algorithms

- **Bubble Sort**
- **Insertion Sort**
- **Selection Sort**
- **Merge Sort**
- **Quick Sort**
- **Heap Sort**
- **Counting Sort**
- **Radix Sort**
- **Bucket Sort**

### 2.2 Searching Algorithms

- **Linear Search**
- **Binary Search**
- **Interpolation Search**
- **Exponential Search**

### 2.3 String Algorithms

- **Pattern Matching**: Naive, KMP, Rabin-Karp.
- **Longest Common Subsequence (LCS)**
- **Longest Palindromic Substring**
- **String Hashing**

### 2.4 Graph Algorithms

- **Shortest Path Algorithms**:
  - **Dijkstra's Algorithm**
  - **Bellman-Ford Algorithm**
  - **Floyd-Warshall Algorithm**
- **Minimum Spanning Tree (MST)**:
  - **Prim's Algorithm**
  - **Kruskal's Algorithm**
- **Topological Sorting**
- **Strongly Connected Components**: Kosaraju's, Tarjan's.

### 2.5 Dynamic Programming

- **Fibonacci Sequence**
- **Knapsack Problem**
- **Longest Increasing Subsequence**
- **Coin Change Problem**
- **Matrix Chain Multiplication**

### 2.6 Greedy Algorithms

- **Activity Selection Problem**
- **Huffman Coding**
- **Job Sequencing with Deadlines**

### 2.7 Backtracking

- **N-Queens Problem**
- **Sudoku Solver**
- **Hamiltonian Cycle**
- **Subset Sum Problem**

### 2.8 Divide and Conquer

- **Merge Sort**
- **Quick Sort**
- **Binary Search**
- **Closest Pair of Points**

### 2.9 Bit Manipulation

- **Basic Bit Operations**: AND, OR, XOR, NOT.
- **Counting Set Bits**
- **Bit Masking and Dynamic Programming**

### 2.10 Concurrency and Parallelism

- **Goroutines and Channels**: Lightweight threads for concurrent programming.
- **Mutexes and Locks**: Synchronization primitives.
- **Implementing Parallel Algorithms**: Strategies for parallel execution.

---

## 3. Additional Resources

- **Golang Standard Library Documentation**
- **Golang Concurrency Patterns**
- **GitHub Repositories and Community Projects**

---

## Core Data Structures in Golang

### 3.1 Core Data Structures

- **Arrays**: Fixed-size collections of elements.
- **Slices**: Dynamic arrays with flexible size.
- **Maps**: Key-value pairs for efficient lookups.
- **Channels**: For communication between goroutines.

### 3.2 Actions on Core Data Structures

- **Arrays/Slices**:
  - Access: `arr[index]`
  - Append: `append(slice, element)`
- **Maps**:
  - Insert: `m[key] = value`
  - Delete: `delete(m, key)`
  - Access: `value := m[key]`
- **Channels**:
  - Send: `ch <- value`
  - Receive: `value := <-ch`

## Additional Data Structures in Golang

### 3.3 Additional Data Structures

- **Linked Lists**: Custom implementations for dynamic collections.
- **Heaps**: For priority queue implementations.
- **Trees**: Custom binary trees, AVL trees, etc.
- **Graphs**: Adjacency list or matrix representations.

### 3.4 Actions on Additional Data Structures

- **Linked Lists**:
  - Insert: Add node at head/tail.
  - Delete: Remove node.
- **Heaps**:
  - Insert: Add element while maintaining heap property.
  - Extract: Remove the root element.
- **Trees**:
  - Insert: Add node while maintaining tree properties.
  - Traverse: Implement various traversal methods.
- **Graphs**:
  - Add Vertex: Insert a new vertex.
  - Add Edge: Connect two vertices.
