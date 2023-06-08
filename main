#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include<windows.h>
#include <time.h>
#include <conio.h>
#define teamCount 13 //K리그에 참여하는 팀의 수 (= csv 파일의 행의 수)
#define K_leagueTeam 13

//경근
typedef struct gameData {
	char opName[32]; //opponent name
	int vic;
	int tie;
	int lose;
} DATA;

//승환
typedef struct teamInformation {
	char team_name[100];
	char team_uniform[100];
	char last_ranking[100];
	char team_emblem[1000];
	char team_stadium[100];
	char team_mascot[100];
	char team_coach[100];
	char team_captain[100];
	char team_history[1000];
	char team_fw[300];
	char team_mf[300];
	char team_df[300];
	char team_gk[300];
	char team_song[1000];
}INFO;

//경근
void matchData(char* dataName, DATA list_game[]);
void prediction(DATA list_game[]);
//승환
void show_teaminfo(INFO* team);
void select_team(INFO** teams);
INFO** read_Teaminfo(const char* filename);
void free_Teaminfo(INFO** list_team);





int main()
{
	DATA list_game[teamCount];
	prediction(list_game);
	return 0;
}



void matchData(char* dataName, DATA list_game[]) {
	//구조체에 데이터를 저장하기 위해, 경기 전적 데이터 파일(.csv)를 불러온다.	
	FILE* fp = fopen(dataName, "r"); //file pointer
	if (fp == NULL) {
		printf("파일 읽기 실패!");
		return;
	}

	//파일을 쪼개고, 구조체에 저장한다.
	char line[512];
	int i = 0;
	while (fgets(line, sizeof(line), fp)) {
		sscanf(line, "%[^,],%d,%d,%d,", list_game[i].opName, &list_game[i].vic, &list_game[i].tie, &list_game[i].lose);
		i++;
	}
	fclose(fp);
}

void prediction(DATA list_game[]) {
	// 사용자에게 배팅하고 싶은 팀의 정보를 입력 받는다. (bet:배팅할 팀, opponent: 상대 팀)
	int bet, opponent;
	printf("==============================================================\n");
	printf("\t\t\t1. 강원\n");
	printf("\t\t\t2. 광주\n");
	printf("\t\t\t3. 김천상무\n");
	printf("\t\t\t4. 대구\n");
	printf("\t\t\t5. 서울\n");
	printf("\t\t\t6. 성남\n");
	printf("\t\t\t7. 수원\n");
	printf("\t\t\t8. 수원fc\n");
	printf("\t\t\t9. 울산\n");
	printf("\t\t\t10. 인천\n");
	printf("\t\t\t11. 전북\n");
	printf("\t\t\t12. 제주\n");
	printf("\t\t\t13. 포항\n");
	printf("==============================================================\n\n");
	printf("배팅하고 싶은 팀의 번호를 입력하세요: "); //csv 파일 선택	
	scanf("%d", &bet);
	printf("-\n");
	printf("상대하는 팀의 번호를 입력하세요: "); //구조체 멤버 선택
	scanf("%d", &opponent);
	system("cls");

	//switch case 문으로 배팅하고 싶은 팀의 경기 전적 데이터 파일(.csv) 선택
	char dataFile[20];
	switch (bet) {
	case 1:
		strcpy(dataFile, "강원.csv");
		break;
	case 2:
		strcpy(dataFile, "광주.csv");
		break;
	case 3:
		strcpy(dataFile, "김천상무.csv");
		break;
	case 4:
		strcpy(dataFile, "대구.csv");
		break;
	case 5:
		strcpy(dataFile, "서울.csv");
		break;
	case 6:
		strcpy(dataFile, "성남.csv");
		break;
	case 7:
		strcpy(dataFile, "수원.csv");
		break;
	case 8:
		strcpy(dataFile, "수원FC.csv");
		break;
	case 9:
		strcpy(dataFile, "울산.csv");
		break;
	case 10:
		strcpy(dataFile, "인천.csv");
		break;
	case 11:
		strcpy(dataFile, "전북.csv");
		break;
	case 12:
		strcpy(dataFile, "제주.csv");
		break;
	case 13:
		strcpy(dataFile, "포항.csv");
		break;
	default:
		printf("잘못된 입력입니다.\n");
		return;
	}

	// 데이터 파일에서 경기 전적 가져오기
	matchData(dataFile, list_game);

	// 경기 전적을 기반으로 승무패 확률 계산하고 출력하기
	double vic = list_game[opponent - 1].vic;
	double tie = list_game[opponent - 1].tie;
	double lose = list_game[opponent - 1].lose;
	double games = vic + tie + lose;
	printf("\n==============================================================\n\n");
	printf("\t\t\t%s\n\n\t\t\t VS\n\n \t\t\t%s\n\n", list_game[bet - 1].opName, list_game[opponent - 1].opName);
	printf("\n==============================================================\n\n");
	printf("확률을 계산 중입니다. 잠시만 기다려주세요......");
	Sleep(5000);
	system("cls");
	printf("\n==============================================================\n\n");
	printf("Betting: %s\n", list_game[bet - 1].opName);
	printf("\t\t%s VS %s\n\n", list_game[bet - 1].opName, list_game[opponent - 1].opName);
	printf("\t\t승리 확률: %.2lf%%\n", vic / games * 100);
	printf("\t\t무승부 확률: %.2lf%%\n", tie / games * 100);
	printf("\t\t패배 확률: %.2lf%%\n", lose / games * 100);
	printf("\n==============================================================\n\n");
}

void show_teaminfo(INFO* team) {
	printf("==================================================================\n");
	printf("\n");
	printf("<<팀 이름>>: %s \n", team->team_name);
	printf("\n");
	printf("<<유니폼>>: %s \n", team->team_uniform);
	printf("\n");
	printf("<<저번시즌 순위>>: %s \n", team->last_ranking);
	printf("\n");
	printf("<<엠블럼>>: %s \n", team->team_emblem);
	printf("\n");
	printf("<<홈 구장>>: %s \n", team->team_stadium);
	printf("\n");
	printf("<<마스코트>>: %s \n", team->team_mascot);
	printf("\n");
	printf("<<감독>>: %s \n", team->team_coach);
	printf("\n");
	printf("<<주장>>: %s \n", team->team_captain);
	printf("\n");
	printf("<<기록>>: %s \n", team->team_history);
	printf("\n");
	printf("<<공격수>>: %s \n", team->team_fw);
	printf("\n");
	printf("<<미드필더>>: %s \n", team->team_mf);
	printf("\n");
	printf("<<수비수>>: %s \n", team->team_df);
	printf("\n");
	printf("<<골키퍼>>: %s \n", team->team_gk);
	printf("\n");
	printf("<<응원가>>: %s \n", team->team_song);
	printf("==================================================================\n");
}

void select_team(INFO** teams) {
	int num, i;
	char next;

	while (1) {
		Sleep(2000);
		printf("==================================================================\n");
		printf("\n");
		for (i = 0; i < K_leagueTeam; i++) {
			printf("%d.%s \n", i + 1, teams[i]->team_name);
		}
		printf("\n");
		printf("==================================================================\n");
		printf("\n");
		printf("원하는 팀의 번호를 입력하세요: ");
		scanf("%d", &num);
		system("cls");

		if (num >= 1 && num <= K_leagueTeam) {
			Sleep(1000);
			show_teaminfo(teams[num - 1]);
			printf("\n");
			printf("다른 팀 정보 보기 (Enter) / 종료 (Esc): ");
			next = getch();
			if (next == 13) {
				Sleep(1000);
				system("cls");
			}
			else if (next == 27) {
				break;
			}
		}
		else {
			printf("==================================================================\n");
			printf("\n");
			printf("번호를 다시 입력하세요(1번~%d번) \n", K_leagueTeam);
			printf("\n");
			printf("==================================================================\n");
		}

	}

}

INFO** read_Teaminfo(const char* filename) {
	INFO** list_team = (INFO**)malloc(K_leagueTeam * sizeof(INFO*));
	if (list_team == NULL) {
		printf("메모리 할당 실패!");
		return NULL;
	}

	FILE* fp = fopen(filename, "r");
	if (fp == NULL) {
		printf("파일 읽기 실패!");
		free(list_team);
		return NULL;
	}

	char line[5000];
	for (int i = 0; i < K_leagueTeam; i++) {
		fgets(line, 5000, fp);
		list_team[i] = (INFO*)malloc(sizeof(INFO));

		char* token = strtok(line, ",");
		int field = 0;
		while (token != NULL && field < 14) {
			switch (field) {
			case 0:
				strcpy(list_team[i]->team_name, token);
				break;
			case 1:
				strcpy(list_team[i]->team_uniform, token);
				break;
			case 2:
				strcpy(list_team[i]->last_ranking, token);
				break;
			case 3:
				strcpy(list_team[i]->team_emblem, token);
				break;
			case 4:
				strcpy(list_team[i]->team_stadium, token);
				break;
			case 5:
				strcpy(list_team[i]->team_mascot, token);
				break;
			case 6:
				strcpy(list_team[i]->team_coach, token);
				break;
			case 7:
				strcpy(list_team[i]->team_captain, token);
				break;
			case 8:
				strcpy(list_team[i]->team_history, token);
				break;
			case 9:
				strcpy(list_team[i]->team_fw, token);
				break;
			case 10:
				strcpy(list_team[i]->team_mf, token);
				break;
			case 11:
				strcpy(list_team[i]->team_df, token);
				break;
			case 12:
				strcpy(list_team[i]->team_gk, token);
				break;
			case 13:
				strcpy(list_team[i]->team_song, token);
				break;
			}

			token = strtok(NULL, ",");
			field++;
		}
	}

	fclose(fp);

	return list_team;
}

void free_Teaminfo(INFO** list_team) {
	for (int i = 0; i < K_leagueTeam; i++) {
		free(list_team[i]);
	}
	free(list_team);
}
