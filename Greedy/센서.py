import sys
input =sys.stdin.readline

N,K = map(int,input().split())
list=[]
for i in range(N):
    num = map(int,input().split())
    list.append(num)

list.sort()
