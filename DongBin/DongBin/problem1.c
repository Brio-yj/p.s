#include <stdio.h> 
#include <stdlib.h> 
#include <time.h>
int arr[10];
int numarr[3];
/**
* @brief : generate and return a random digit in 0~9
* @return : a digit in 0~9
* @param	 : none
*/
int generate_a_digit(void) {
	return (rand() % 10);
}

/**
* @brief : generate a 3-digits target integer for the puzzle
* @return : return an integer with 3 different digits in 0~9
* @param : none
*/
int generate_target_number_approach2(void) {
	int cnt = 0;
	while (cnt!=3) {
		int num = generate_a_digit();
		if (arr[num] == 0) {
			arr[num] = num;
			numarr[cnt] = num;
			cnt++;
		}
	}
	for (int i = 0; i < 3; i++) printf("%d", numarr[i]);
	return 0;
}

int get_match_result(int target, int guessed) {
	int n_strike = 0, n_ball = 0;

	int tar_arr[3];
	int geu_arr[3];
	int n = 100;
	for (int i = 0; i < 3; i++) {
		tar_arr[i] = target / n;
		target %= n;
		n /= 10;
	}
	n = 100;
	for (int i = 0; i < 3; i++) {
		geu_arr[i] = guessed / n;
		guessed %= n;
		n /= 10;
	}
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			if (geu_arr[i] == tar_arr[j] && i == j) {
				n_strike++;
			}
			else if(geu_arr[i] == tar_arr[j]) {
				n_ball++;
			}
		}
	}
	return (n_strike * 10 + n_ball);
}


int main() {
	srand(time(NULL));
	generate_target_number_approach2();
	int num = get_match_result(123, 145);
	printf("\n%d", num);
}