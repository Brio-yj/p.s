import sys
input = sys.stdin.readline
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
        if rank[a]==rank[b]:
            rank[a]+=1

def kruskal(graph):
    graph.sort(key=lambda x:x[2])
    global parent
    parent=list(range(N+1))
    global rank
    rank = [0]*(N+1)
    sum=0
    cnt=0
    for edge in graph:
        s,e,w=edge
        if union(s,e) != 0:
            cnt+=1
            sum+=w
    return cnt,sum

N,M=map(int,input().split())
graph=[]
sum=0
for i in range(M):
    s,e,w=map(int,input().split())
    graph.append((s,e,w))
    sum+=w

cnt,tree_sum=kruskal(graph)
if cnt!=N-1:
    print(-1)
else:
    print(sum-tree_sum)
