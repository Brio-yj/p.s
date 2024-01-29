import sys
N=int(sys.stdin.readline().rstrip())

point=[list(map(int,sys.stdin.readline().split())) for _ in range(N)]
point.sort()

index = 0
sum=0

while index < len(point)-1:
    if point[index][1]>= point[index+1][0]:
        point[index][1]=point[index+1][1]
        del point[index+1]
    else:                               #조건을 불충족할때 인덱스 이동
        line = point[index][1]-point[index][0]
        sum+=line    
        index += 1

        sum += point[len(point)-1][1]-point[len(point)-1][0]

print(sum)

#사용하고 버린다는 마인드가 필요한 문제