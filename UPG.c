#include <stdio.h>

int stage1(){
	int gamestart = 1;
	int answer;
	printf("N을 숫자로 변환하여 나온 수를 전부 합하면 몇이 될까요?\n힌트가 필요하시다면, 0을 입력 해주세요.");
	while (gamestart){
		printf("\n>>>");
		scanf("%d", &answer);
		if (answer == 0){
			printf("힌트: 북대서양 조약 기구, a1z26\n");
		}
		else if(answer == 14152251322518){
			printf("정답"); 
		}
		else{
			printf("오답\n");
		}
	}
}

int stage2(){
	printf("");
}



int main(){
	int puzzle;
	int gamestate = 1; 
	 
	printf("■ Untitled Puzzle Game ■\n");
	printf("이 게임은 간단하고 쉬운 퍼즐게임 입니다.\n퍼즐을 풀때 약간의 검색을 함께 하시는걸 추천드립니다.\n퍼즐은 총 3개 있습니다. 몇번째 퍼즐을 도전 하실건가요?\n>>>");
	
	while(gamestate) {
		scanf("%d", &gamestate);
	}
	
	stage1();
	
	return 0;
}
