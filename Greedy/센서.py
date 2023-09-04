import sys
N=int(sys.stdin.readline().strip())
K=int(sys.stdin.readline().strip())

list=sorted(map(int,sys.stdin.readline().split()))

if K >= N:
    print(0)
    sys.exit()

distance=[]
for i in range (N-1):
    num=list[i]-list[i+1]
    if num<0:
        num=num*(-1)
    distance.append(num)
distance.sort(reverse=True)

for i in range(K-1):
    distance.pop(0)


sum=0
for i in range(len(distance)):
    sum+=distance[i]

print(sum)