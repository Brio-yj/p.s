import sys
import heapq


def prim(graph, start):
    visited = set()
    min_cost = 0
    selected_edge = []
    pq = [(start,0)]

    while pq:
        n,w = heapq.heappop(pq)
        if n in visited:
            continue

        visited.add(n)
        min_cost += w

        graph[n].sort(key=lambda n : n[1])
        for n_2,w in graph[n]:
            if n_2 not in visited:
                heapq.heappush(pq, (n_2,w))
                selected_edge.append((n,n_2,w))
                break
    return min_cost, selected_edge


# Example usage
N = 5  # Number of vertices
M = 7  # Number of edges
graph = {i: [] for i in range(1, N + 1)}

# Add edges to the graph
edges = [
    (1, 2, 2),
    (1, 3, 1),
    (2, 4, 1),
    (2, 5, 4),
    (3, 5, 5),
    (4, 5, 3),
    (3, 4, 2)
]

for s, e, w in edges:
    graph[s].append((e,w))
    graph[e].append((s,w))

start_node = 1  # Starting node
min_cost, selected_edge = prim(graph, start_node)

print(graph)
print("Minimum Cost:", min_cost)
print("Selected Edges:", selected_edge)



