#include <stdio.h>
int main()
{
	int confession;
	scanf("%d", &confession);

	if (confession == 0) {
		printf("0을 입력하셨습니다.");
	}
	else {
		printf("0이 아니라, %d 을(를) 입력하셨습니다.", confession);	
	}
	
	printf("코드가 종료되었습니다.");

	return 0;
}
