#include <stdio.h>
int main() {
	printf("적 캐릭터는 hp가 30입니다.\n");
	int ATK_Stat;
	printf("주인공의 공격력을 입력하세요: ");
	scanf("%d", &ATK_Stat);

	if (ATK_Stat < 30) {
		printf("주인공의 공격력이 %d입니다.\n", ATK_Stat);
		printf("주인공이 적을 공격하여 %d의 데미지를 입혔습니다.\n\n", ATK_Stat);
		printf("적의 잔여 HP : %d \n\n", (30-ATK_Stat));
		printf("적이 주인공을 공격하여 주인공이 뒤졌습니다.\n");
		printf("Game Over");
	}
	else {
		printf("주인공의 공격력이 %d입니다.\n", ATK_Stat);
		printf("주인공이 적을 공격하여 %d의 데미지를 입혔습니다.\n\n", ATK_Stat);
		printf("적의 잔여 HP : 0\n\n");
		printf("적을 물리쳤습니다!\n");
		printf("Happy End");		
	}
	return 0;
}
