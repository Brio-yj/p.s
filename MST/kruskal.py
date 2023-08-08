def find(x):
    if parent[x] != x:
        parent[x] = find(parent[x])
    return parent[x]


def union(a, b):
    a = find(a)
    b = find(b)

    if a == b:
        return 0

    if rank[a] < rank[b]:
        parent[a] = b
    else:
        parent[b] = a
        if rank[a] == rank[b]:
            rank[a] += 1


def kruskal(graph):
    graph.sort(key=lambda x: x[2])
    global parent
    parent = list(range(len(graph)))
    global rank
    rank = [0]*len(graph)
    tree = []

    for edge in graph:
        start, end, weight = edge
        if union(start, end)!=0 :
            tree.append(edge)

    return tree


graph = [
    (0, 1, 4),
    (0, 2, 3),
    (1, 2, 1),
    (1, 3, 2),
    (2, 3, 5),
    (2, 4, 4),
    (3, 4, 7)
]

minimum_spanning_tree = kruskal(graph)
print(minimum_spanning_tree)
