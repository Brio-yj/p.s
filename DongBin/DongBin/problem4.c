#include <stdio.h>
#define mx 10000

// �ؿ��� ���� �ø��鼭 �����Ѵ�

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

		// ���� ������ �� �ڸ����� ���ϴ� �κ��� ����
		while (num > 0) {
			sum += num % 10; // �� �ڸ����� ����
			num /= 10; // �� �ڸ��� ����
		}

		sum += i; // �ڱ� �ڽ��� ����
		if (sum <= mx) {
			arr[sum] = 1; // ���� ���� ���ڸ� ���
		}
	}

	for (int i = 1; i < mx; i++) {
		if (arr[i] == 0) {
			printf("%d\n", i); // ��� ���
		}
	}

	return 0;
}