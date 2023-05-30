#include<stdio.h>

void main() {
	int i=0, j=0;
	printf ("Nhap chieu dai va chieu rong hinh chu nhat theo thu tu: ");
	scanf ("%d%d", &i, &j);
	printf("Chu vi hinh chu nhat: %d\n", chu_vi(i,j));
	printf("Dien tich hinh chu nhat: %d\n", dien_tich(i,j));
	return;
}

int chu_vi(int, int);
int dien_tich(int, int);

int chu_vi(int i, int j) {
	int chuvi = (i + j)*2;
	return chuvi;
}

int dien_tich(int i, int j) {
	int dientich = i*j;
	return dientich;
}
