#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<iostream>

int main() {
	int n, m;
	scanf("%d %d",&n,&m);
	int i = 2,HCF = 1;
	while (i <= n && i <= m) {
		if (n % i == 0 && m % i == 0) {
			HCF = HCF * i;
			n = n / i; m = m / i;
		}
		else i++;
	}
	printf("%d",HCF);
	system("pause");
	return 0;
}
