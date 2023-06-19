#include <stdio.h>
#include <windows.h> 

int stage1(){
	int gamestart = 1;
	int answer;
	int pityhint = 0;
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\nD를 숫자로 변환하면 몇이 될까요?\n힌트가 필요하시다면, 0을 입력 해주세요.\n만약 중도포기를 원하신다면, Ctrl C를 하시길 바랍니다.");
	while (gamestart){
		printf("\n>>>");
		scanf("%d", &answer);
		if (answer == 0){
			printf("힌트: 북대서양 조약 기구(North Atlantic Treaty Organization, NATO)와 a1z26 을 참고하세요.\n");
		}
		else if(answer == 4512201){
			printf("\n정답!\n잠시 후 메뉴로 돌아갑니다.");
			sleep(2);
			printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
			gamestart = 0;
		}
		else{
			printf("오답\n");
			pityhint += 1;
		}
		if (pityhint >= 10){
			printf("\n너무 많은 오답으로 인해 정답과 가까운 힌트를 드리겠습니다.\n");
			printf("NATO끼리 사용할수 있는 NATO표준 음성 기호를 참고하세요.\n");
			printf("a1z26은 a를 시작으로 1, b를 2, c를 3... z를 26으로 순서대로 숫자를 부여한 간단한 암호방법 입니다.\n\n");
		}
	}
}

int stage2(){
	int gamestart = 1;
	int answer;
	int pityhint = 0;
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n*를 기준으로 DDRLRU 대로 따라간다면, 어떤 숫자가 나올까요?\n힌트가 필요하시다면, 0을 입력 해주세요.\n만약 중도포기를 원하신다면, Ctrl C를 하시길 바랍니다.");
	while (gamestart){
		printf("\n>>>");
		scanf("%d", &answer);
		if (answer == 0){
			printf("힌트: D R L U는 영어로 방향을 나타낸 것입니다.\n그리고 정답은 방금 전에 사용하신 도구에 써야합니다.\n");
		}
		else if(answer == 856569){
			printf("\n정답!\n잠시 후 메뉴로 돌아갑니다.");
			sleep(2);
			printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
			gamestart = 0;
		}
		else{
			printf("오답\n");
			pityhint += 1;
		}
		if (pityhint >= 10){
			printf("\n너무 많은 오답으로 인해 정답과 가까운 힌트를 드리겠습니다.\n");
			printf("시작점이 되는 *은 키보드 오른쪽에 붙어있는 넘패드 키보드가 기준으로 되어있습니다.\n");
		}
	}
}

int stage3(){
	int gamestart = 1;
	int answer;
	int pityhint = 0;
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
	printf("4d6a41794d7a41324d6a453d");
	printf("\n힌트가 필요하시다면, 0을 입력 해주세요.\n만약 중도포기를 원하신다면, Ctrl C를 하시길 바랍니다.");
	while (gamestart){
		printf("\n>>>");
		scanf("%d", &answer);
		if (answer == 0){
			printf("힌트: 16과 64. 둘 다 컴퓨터와 관련이 되어 있습니다.\n");
		}
		else if(answer == 20230621){
			printf("\n정답!\n잠시 후 메뉴로 돌아갑니다.");
			sleep(2);
			printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
			gamestart = 0;
		}
		else{
			printf("오답\n");
			pityhint += 1;
		}
		if (pityhint >= 10){
			printf("\n너무 많은 오답으로 인해 정답과 가까운 힌트를 드리겠습니다.\n");
			printf("16진수, Base64\n");
		}
	}
}



int main(){
	int puzzle;
	int puzzlestate = 0;
	int gamestate = 1;
	
	while(gamestate) {
		printf("■ Untitled Puzzle Game ■\n");
		printf("이 게임은 간단하고 쉬운 퍼즐게임 입니다.\n퍼즐은 총 3개가 있습니다. 몇번째 퍼즐을 도전 하실건가요? (0으로 종료, 1~3)\n>>>");
		scanf("%d", &puzzle);
		if (puzzle == 1){
			puzzlestate = 1;
			while (puzzlestate){
				printf("\n첫번째 퍼즐을 도전 하시겠습니까?");
				printf("\nY로 도전, N으로 취소\n>>>");
				char accept;
				scanf(" %c", &accept);
				if (accept == 'Y' || accept == 'y'){
					printf("\n\n잠시 후 문제가 나옵니다.");
					sleep(1);
					stage1();
					puzzlestate = 0; 
				}
				else if (accept == 'N' || accept == 'n'){
					printf("\n취소 하셨습니다. 잠시 후 선택 메뉴로 돌아갑니다.");
					sleep(1);
					printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
					puzzlestate = 0;
				}
				else{
					printf("잘못된 글자 입니다.\n");
				}
			}
		}
		else if (puzzle == 2){
			puzzlestate = 1;
			while (puzzlestate){
				printf("\n두번째 퍼즐을 도전 하시겠습니까?");
				printf("\nY로 도전, N으로 취소\n>>>");
				char accept;
				scanf(" %c", &accept);
				if (accept == 'Y' || accept == 'y'){
					printf("\n\n잠시 후 문제가 나옵니다.");
					sleep(1);
					stage2();
					puzzlestate = 0; 
				}
				else if (accept == 'N' || accept == 'n'){
					printf("\n취소 하셨습니다. 잠시 후 선택 메뉴로 돌아갑니다.");
					sleep(1);
					printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
					puzzlestate = 0;
				}
				else{
					printf("잘못된 글자 입니다.\n");
				}
			}
		}
		else if (puzzle == 3){
			puzzlestate = 1;
			while (puzzlestate){
				printf("\n세번째 퍼즐을 도전 하시겠습니까?");
				printf("\nY로 도전, N으로 취소\n>>>");
				char accept;
				scanf(" %c", &accept);
				if (accept == 'Y' || accept == 'y'){
					printf("\n\n잠시 후 문제가 나옵니다.");
					sleep(1);
					stage3();
					puzzlestate = 0; 
				}
				else if (accept == 'N' || accept == 'n'){
					printf("\n취소 하셨습니다. 잠시 후 선택 메뉴로 돌아갑니다.");
					sleep(1);
					printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
					puzzlestate = 0;
				}
				else{
					printf("잘못된 글자 입니다.\n");
				}
			}
		}
		else if (puzzle == 0){
			puzzlestate = 1;
			while (puzzlestate){
				printf("\n정말 게임을 종료하시겠습니까?\nY(예), N(아니오)\n>>>");
				char accept;
				scanf(" %c", &accept);
				if (accept == 'Y' || accept == 'y'){
					printf("\n\n잠시 후 종료됩니다.");
					sleep(1);
					gamestate = 0;
				}
				else if (accept == 'N' || accept == 'n'){
					printf("\n취소 하셨습니다. 잠시 후 선택 메뉴로 돌아갑니다.");
					sleep(1);
					printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
				}
				else{
					printf("잘못된 글자 입니다.\n");
				}
			}
		}
		else{
			printf("존재하지 않는 퍼즐 입니다.\n\n잠시 후 다시 메뉴로 돌아갑니다.");
			sleep(2);
			printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
		} 
	}
	return 0;
}
