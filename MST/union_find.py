def find(x):
    if parent[x] != x:
        parent[x] = find(parent[x])
    return parent[x]


def union(a, b):
    a = find(a)
    b = find(b)

    if a == b:
        return

    if rank[a] > rank[b]:
        parent[b] = a
    elif rank[b] > rank[a]:
        parent[a] = b
    else:
        parent[b] = a
        rank[a] += 1

    '''
    if a<b:
        parent[b]=a
    else:
        parent[a]=b
    '''


n = 5
parent = list(range(n+1))
rank = [0] * (n+1)
union(3, 5)
union(1, 5)
print(parent)
