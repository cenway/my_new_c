#include <stdio.h>

int sol(int m, int n, int c, int result);

int main() {
	int num = 0;
	int m = 0;
	int n = 0;

	scanf("%d", &num);

	for (int j = 0; j < num; j++) {
		scanf("%d %d", &n, &m);
		printf("%d\n", sol(m, n, 0, 1));
	}

	return 0;
}

int sol(int m, int n, int c, int result) {
	if (c == n)
		return result;
	else {
		result *= (m - c);
		result /= (c + 1);
		sol(m, n, ++c, result);
	}
}