#include <stdio.h>

int stage1(){
	int gamestart = 1;
	int answer;
	printf("N�� ���ڷ� ��ȯ�Ͽ� ���� ���� ���� ���ϸ� ���� �ɱ��?\n��Ʈ�� �ʿ��Ͻôٸ�, 0�� �Է� ���ּ���.");
	while (gamestart){
		printf("\n>>>");
		scanf("%d", &answer);
		if (answer == 0){
			printf("��Ʈ: �ϴ뼭�� ���� �ⱸ, a1z26\n");
		}
		else if(answer == 14152251322518){
			printf("����"); 
		}
		else{
			printf("����\n");
		}
	}
}

int stage2(){
	printf("");
}



int main(){
	int puzzle;
	int gamestate = 1; 
	 
	printf("�� Untitled Puzzle Game ��\n");
	printf("�� ������ �����ϰ� ���� ������� �Դϴ�.\n������ Ǯ�� �ణ�� �˻��� �Բ� �Ͻô°� ��õ�帳�ϴ�.\n������ �� 3�� �ֽ��ϴ�. ���° ������ ���� �Ͻǰǰ���?\n>>>");
	
	while(gamestate) {
		scanf("%d", &gamestate);
	}
	
	stage1();
	
	return 0;
}
