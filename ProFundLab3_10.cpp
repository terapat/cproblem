#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<iostream>
int main() {
	int n = 3, m;
	int maxm = 3, maxn = 4, maxHCF = 1;
	for (;n < 200;n++) {
		for (m = n+1;m < 200;m++) {
			int i = 2, HCF = 1,tempn = n,tempm =m;
			while (i <= tempn && i <= tempm) {
				if (tempn % i == 0 && tempm % i == 0) {
					HCF = HCF * i;
					tempn = tempn / i; tempm = tempm / i;
				}
				else i++;
			}
			//printf("%d", i);
			if (maxHCF < HCF) {
				maxHCF = HCF;
				maxn = n;
				maxm = m;
			}
		}
	}
	printf("%d %d", maxn, maxm);
	system("pause");
	return 0;
}
