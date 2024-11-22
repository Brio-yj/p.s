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

>>1620
==map은 이진트리 구조의 자료구조 -> o(logn)
find = o(n)
map = o(logn)

string -> int
arr = o(n)
map = o(logn)

int -> string
arr = o(1)
amp = o(logn)

==map 사용법
map<int,string> imap;
imap[i+1]=str;

==stringstream 사용법
string input
cin>>input
int num
stringstream ss(num)
if(ss>>num)

>>9375
== using

typedef :옛날거, 이제는 using을 사용하자
using name = ~;

== 멀티맵 사용법

[]를 사용해서 추가하는건 불가, 대신에 pair사용해서 insert해야한다
smap.insert(spair(str1,str2));

== const,&

const는 혹시 모를 데이터 변경방지 위해서
&는 참조를 사용, 그냥 쓰면 복사를 사용
참조가 훨씬 빠르다

>>1213
== map 정렬하는법

기본적으로 map은 오름차순이다
만약 내림차순으로 정렬하고 싶으면
map<char, int, greater<char>> mmap;
이런식으로 선언할때부터 내림차순으로 정렬하도록 선언해야한다

== map 사용법
map<char, int, greater<char>> mmap;
for(auto &entry : mmap)

맵의key가 char이기 때문에 iterator를 사용해서 반복문 돌아야 한다

== string 사용법
result =  entry.first+result;
result += entry.first;
이런식으로 기존 문자열 양옆에 붙일 수 있다

== string.insert()
result.insert(result.begin()+result.size()/2,mid)
str.insert(위치,매개변수)