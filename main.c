void main() {
	int number1, number2;
	string operator;
	int result;

	printf("숫자와 연상자를 입력하세요(예> 1 + 2): ");
	scanf("%d %s %d", &number1, &operator, &number2);

	switch (operator) {
		case "+":
			result = add(number1, number2);
			break;

		case "-":
			result = minus(number1, number2);
			break;
	}

	printf("result is %d", result);
}

int add(int a, int b) {
	return a + b;
}

int minus(int a, int b) {
	return a - b;
}
