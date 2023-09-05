#참고 : https://tooo1.tistory.com/415
import sys
A=sys.stdin.readline().rstrip()
B=sys.stdin.readline().rstrip()

alist=[]
blist=[]
for i in A:
    alist.append(i)

for i in B:
    blist.append(i)

flag = False
while len(blist)>len(alist):
    if blist[-1]=="A":
        blist.pop()
    else:
        blist.pop()
        blist=blist[::-1]
if blist==alist:
    print(1)
else:
    print(0)


'''                                 제일 중요한거 : 안풀리면 문제를 반대로 풀 수 있다고 생각해야한다
S = input()                         A->B찾기가 아니라 B->A찾기
T = input()

flag = False

while len(S) <= len(T):
    if S != T:                 
        # 뒤에 A 삭제
        if T[-1] == 'A':            신기한건 문자열인데 따로 리스트에 안넣어도 된다
            T = T[:-1]                  
        # B 삭제 후 뒤집기
        else:                       슬라이싱 사용하기
            T = T[:-1]              맨뒤의 원소 제거 하고 반환
            T = T[::-1]             문자열 뒤집기
    else:
        flag = True
        break

if flag:
    print(1)
else:
    print(0)
'''