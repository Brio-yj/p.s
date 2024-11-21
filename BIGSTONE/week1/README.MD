counting str -> 맵 또는 배열
string ->map  : 조용진 갯수
int -> arr : 3 갯수
단 숫자 갯수가 연속적인게 아니라 1만, 10만, 100만 이런식으로 올때는 map

시각 문제는 무조건 이상 미만으로 가자

11655
개행문자까지 입력 받기 -> getline 사용해야 한다

9996
str.find('') -> 리턴값을 배열에서 인덱스로 사용가능하다
substr -> 함수로 사용해야 하니 변수명으로 사용하지 말자
str.substr(str.begin(),str.end()) -> begin은 포함, end는 포함 x
str.substr(str.begin()) -> begin부터 끝까지 전부 복사

2559
구간합 문제 -> 배열로 선언하면 좋은게 전역 배열은 0으로 초기화 되니까 
for(int i=1;i<=n;i++)
arr[i]= arr[i-1]+num 
가능하다

최대값을 구해라 -> 최솟값부터 구하고 최댓값 구하기
최솟값을 구해라 -> 최댓값부터 구하고 최솟값 구하기

ret = max(ret,value)
ret = min(ret,value)

ret = -10000004  -> 문제의 조건에서 만들 수 있는 가장 작은 수

