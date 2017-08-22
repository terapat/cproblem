#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<iostream>
int main() {
	int i, j, k;
	int gone[1000], c = 0;
	for (j = 1; j <= 998; j++)
		for (k = j; k <= 998; k++) {
			i = 1000 - j - k;
			if (i<1)break;
			int d;
			for (d = 0; d<c; d++)if (j == gone[d] || k == gone[d]) { d = -1; break; }
			if ((i + j + k) == 1000 && d != -1)
				if (i*i + j*j == k*k) { printf("%d %d %d\n", j, i, k); gone[c] = i; c++; }
		}

	system("pause");
	return 0;
}
