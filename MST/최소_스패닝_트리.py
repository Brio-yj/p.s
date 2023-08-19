def find(x):
    if parent[x]!=x:
        parent[x]=find(parent[x])
    return parent[x]

def union(a,b):
    a=find(a)
    b=find(b)

    if a==b:
        return 0
    
    if rank[a]<rank[b]:
        parent[a]=b
    else:
        parent[b]=a
        rank[a]+=1

def kruskal(graph):
    graph.sort(key=lambda x : x[2])
    global parent
    parent = list(range(len(graph)+1))
    global rank
    rank = [0] * (len(graph)+1)
    sum = 0
    for edge in graph:
        s,e,w = edge
        if union(s,e)!=0:
            sum+=w
    return sum

n,m=map(int,input().split())

graph=[]
for i in range(m):
    s,e,w=map(int,input().split())
    graph.append((s,e,w))

print(kruskal(graph))


