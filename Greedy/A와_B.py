import sys
A=sys.stdin.readline().rstrip()
B=sys.stdin.readline().rstrip()

alist=[]
for i in A:
    alist.append(i)

blist=[]
for i in B:
    blist.append(i)

cnt=len(blist)-len(alist)
newcnt=2**cnt #8
newlist=alist.copy()
j=0
for i in range(newcnt-1):
    for j in range(cnt):
        newlist.append("A")
        if newlist==blist:
            print(newlist)
            print(1)
            quit()
        for k in range(cnt-j-1):
            newlist.reverse()
            newlist.append("B")
            if newlist==blist:
                print(newlist)
                print(1)
                quit()
        newlist=alist.copy()

print(newlist)
print(0)
