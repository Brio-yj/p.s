# 정수 자료형

unsigned -> 제일 왼쪽 양수,10000011=131 (2^7+2+1)

signed -> 제일 왼쪽 음수, 10000011=-125 (-2^7+2+1)

# sync_with_stdio(0)
cpp에서 사용하는 cin,cout과 c에서 사용되는 printf, scanf는 동기화 되는데 sync_with_stdio(0)를 사용하면 동기화가 해제 되어서 속도가 빨라진다

# cin.tie(0)

cin,cout은 각각의 버퍼를 가지고 있고 원래는 cin명령 수행하기 전에 cout 버퍼를 비우는데 코테에서는 출력 순서와 관계없이 정답을 비교하기때문에 버퍼를 따로 비울 필요가 없다