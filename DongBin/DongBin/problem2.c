#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define ATTEMPT_LIMIT	9

// Function Prototypes
int generate_target_number(void);
int guess_number(void);
int get_match_result(int target, int guessed);
void receive_match_result(int result, int guessed);

int is_different_digits(int num);
int generate_a_digit(void);

// Implement generate_target_number()

// Implement get_match_result()


int main(void) {
	int n_attempt = 0;
	int target_num, guessed_num, match_result;

	setvbuf(stdout, NULL, _IONBF, 0);

	srand(time(0));
	target_num = generate_target_number();
	do {
		printf("Attempt [%d/%d] ", ++n_attempt, ATTEMPT_LIMIT);
		guessed_num = guess_number();
		match_result = get_match_result(target_num, guessed_num);
		receive_match_result(match_result, guessed_num);
	} while (n_attempt <= ATTEMPT_LIMIT && match_result != 30);

	if (match_result == 30)
		printf("Congratulation!!! You Win\n");
	else
		printf("Nice Try!!! But You Lose, The target number is %d\n", target_num);
	return 0;
}

/**
* @brief : check digit duplication
* @return : return true if all digits of the number are different, false otherwise.
* @param	 : 	num a 3-digits number to be checked for digit duplication.
*/
int is_different_digits(int num) {
	int digits[3];
	int is_different = 1;

	digits[0] = num % 10;
	digits[1] = (num / 10) % 10;
	digits[2] = (num / 100) % 10;
	if ((digits[0] == digits[1]) ||
		(digits[0] == digits[2]) ||
		(digits[1] == digits[2]))
		is_different = 0;

	return is_different;
}

/**
* @brief : generate and return a random digit in 0~9
* @return : a digit in 0~9
* @param	 : none
*/
int generate_a_digit(void) {
	return (rand() % 10);
}

/**
* @brief : get a guessed number from the Attacker
* @return : return an integer with 3 different digits in 0~9
* @param	 : none
*/
int guess_number(void) {
	int num;
	while (1) {
		printf("Enter your guess : ");
		scanf_s("%d", &num);
		if (num < 1000 && is_different_digits(num)) break;
		printf("Input Error !!! Wrong number format\n");
	}
	return num;
}

/**
* @brief : notify the match result of the guessed number to the Attacker
* @return : none
* @param	 : 	result - 2-digits number for the match result, 1st digit stands for the number of strikes and 2nd digit stands for the number of balls.
			guessed - 3-digits guessed integer
*/
void receive_match_result(int result, int guessed) {
	int n_strike = result / 10, n_ball = result % 10;
	switch (result) {
	case 30: printf("Congratulation !!!\n");
		break;
	case 0: printf("Oops !!!\n");
		break;
	default: printf("Nice try !!!\n");
	}
	printf("Your guess %d is [%d] strikes and [%d] balls\n",
		guessed, n_strike, n_ball);
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
			else if (geu_arr[i] == tar_arr[j]) {
				n_ball++;
			}
		}
	}
	return (n_strike * 10 + n_ball);
}

int generate_target_number(void) {
	int arr[10] = { 0 };
	int numarr[3] = { 0 };

	int cnt = 0;
	while (cnt != 3) {
		int num = generate_a_digit();
		if (arr[num] == 0) {
			arr[num] = num;
			numarr[cnt] = num;
			cnt++;
		}
	}
	int sum = 0;
	for (int i = 0; i < 3; i++) {
		sum += numarr[i];
	}
	return sum;
}