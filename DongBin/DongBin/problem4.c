#include <stdio.h>
#define mx 10000

// 밑에서 부터 올리면서 가야한다

int arr[mx+1];
int main(void) {
	for (int i = 1; i < mx; i++) {
		int num = i;
		
		int  j = 0;
		int devide = 0;
		if ((i / 1000) > 0) {
			devide = 1000;
			j = 4;
		}
		else if ((i / 100) > 0) {
			devide = 100;
			j = 3;
		}
		else if ((i / 10) > 0) {
			devide = 10;
			j = 2;
		}
		else {
			devide = 1;
			j = 1;
		}
		
		int sum = 0;
		for (int k = 0; k < j; k++) {
			sum += i/devide;
			i %= devide;
			devide /= 10;
		}
		sum += num;
		arr[sum] = 1;
	}

	for (int i = 1; i < mx; i++) {
		if (arr[i] == 0) printf("%d \n", i);
	}



	return 0;
}

#include <stdio.h>
#define mx 10000

int arr[mx + 1];

int main(void) {
	for (int i = 1; i < mx; i++) {
		int num = i;
		int sum = 0;

		// 원래 숫자의 각 자리수를 더하는 부분을 수정
		while (num > 0) {
			sum += num % 10; // 각 자리수를 더함
			num /= 10; // 한 자리씩 제거
		}

		sum += i; // 자기 자신을 더함
		if (sum <= mx) {
			arr[sum] = 1; // 합이 같은 숫자를 기록
		}
	}

	for (int i = 1; i < mx; i++) {
		if (arr[i] == 0) {
			printf("%d\n", i); // 결과 출력
		}
	}

	return 0;
}