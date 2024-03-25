#include<stdio.h>

int main(void) {
	int arr[4];
	char str[4];

	//4바이트 차이(x86으로 설정하면 더욱 좋음)
	printf("%d %d\n", &arr[0], &arr[1]);

	//1바이트 차이
	printf("%d %d\n", &str[0], &str[1]);

	return 0;

}