#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define K_leagueTeam 13

typedef struct teamInformation {
	char team_name[100];
	char team_info[100];
	char last_ranking[100];
	char key_player[100];
	char team_song[100];
}INFO;

void select_team(INFO a[]) {
	int i, j;

	for (i = 0; i < K_leagueTeam; i++) {
		printf("%d. %s", i + 1, a[i].team_name);
	}

	printf("\n");
	printf("원하는 팀의 번호를 입력하세요: ");
	scanf_s("%d", &j);

	switch (j) {
	case 1:
		printf("%s \n", a[j - 1].team_name);
		printf("팀 소개: %s \n", a[j - 1].team_info);
		printf("저번시즌 순위: %s \n", a[j - 1].last_ranking);
		printf("핵심 선수: %s \n", a[j - 1].key_player);
		printf("응원가: %s \n", a[j - 1].team_song);
		printf("\n");
		break;
	case 2:
		printf("%s \n", a[j - 1].team_name);
		printf("팀 소개: %s \n", a[j - 1].team_info);
		printf("저번시즌 순위: %s \n", a[j - 1].last_ranking);
		printf("핵심 선수: %s \n", a[j - 1].key_player);
		printf("응원가: %s \n", a[j - 1].team_song);
		printf("\n");
		break;
	case 3:
		printf("%s \n", a[j - 1].team_name);
		printf("팀 소개: %s \n", a[j - 1].team_info);
		printf("저번시즌 순위: %s \n", a[j - 1].last_ranking);
		printf("핵심 선수: %s \n", a[j - 1].key_player);
		printf("응원가: %s \n", a[j - 1].team_song);
		printf("\n");
		break;
	case 4:
		printf("%s \n", a[j - 1].team_name);
		printf("팀 소개: %s \n", a[j - 1].team_info);
		printf("저번시즌 순위: %s \n", a[j - 1].last_ranking);
		printf("핵심 선수: %s \n", a[j - 1].key_player);
		printf("응원가: %s \n", a[j - 1].team_song);
		printf("\n");
		break;
	case 5:
		printf("%s \n", a[j - 1].team_name);
		printf("팀 소개: %s \n", a[j - 1].team_info);
		printf("저번시즌 순위: %s \n", a[j - 1].last_ranking);
		printf("핵심 선수: %s \n", a[j - 1].key_player);
		printf("응원가: %s \n", a[j - 1].team_song);
		printf("\n");
		break;
	case 6:
		printf("%s \n", a[j - 1].team_name);
		printf("팀 소개: %s \n", a[j - 1].team_info);
		printf("저번시즌 순위: %s \n", a[j - 1].last_ranking);
		printf("핵심 선수: %s \n", a[j - 1].key_player);
		printf("응원가: %s \n", a[j - 1].team_song);
		printf("\n");
		break;
	case 7:
		printf("%s \n", a[j - 1].team_name);
		printf("팀 소개: %s \n", a[j - 1].team_info);
		printf("저번시즌 순위: %s \n", a[j - 1].last_ranking);
		printf("핵심 선수: %s \n", a[j - 1].key_player);
		printf("응원가: %s \n", a[j - 1].team_song);
		printf("\n");
		break;
	case 8:
		printf("%s \n", a[j - 1].team_name);
		printf("팀 소개: %s \n", a[j - 1].team_info);
		printf("저번시즌 순위: %s \n", a[j - 1].last_ranking);
		printf("핵심 선수: %s \n", a[j - 1].key_player);
		printf("응원가: %s \n", a[j - 1].team_song);
		printf("\n");
		break;
	case 9:
		printf("%s \n", a[j - 1].team_name);
		printf("팀 소개: %s \n", a[j - 1].team_info);
		printf("저번시즌 순위: %s \n", a[j - 1].last_ranking);
		printf("핵심 선수: %s \n", a[j - 1].key_player);
		printf("응원가: %s \n", a[j - 1].team_song);
		printf("\n");
		break;
	case 10:
		printf("%s \n", a[j - 1].team_name);
		printf("팀 소개: %s \n", a[j - 1].team_info);
		printf("저번시즌 순위: %s \n", a[j - 1].last_ranking);
		printf("핵심 선수: %s \n", a[j - 1].key_player);
		printf("응원가: %s \n", a[j - 1].team_song);
		printf("\n");
		break;
	case 11:
		printf("%s \n", a[j - 1].team_name);
		printf("팀 소개: %s \n", a[j - 1].team_info);
		printf("저번시즌 순위: %s \n", a[j - 1].last_ranking);
		printf("핵심 선수: %s \n", a[j - 1].key_player);
		printf("응원가: %s \n", a[j - 1].team_song);
		printf("\n");
		break;
	case 12:
		printf("%s \n", a[j - 1].team_name);
		printf("팀 소개: %s \n", a[j - 1].team_info);
		printf("저번시즌 순위: %s \n", a[j - 1].last_ranking);
		printf("핵심 선수: %s \n", a[j - 1].key_player);
		printf("응원가: %s \n", a[j - 1].team_song);
		printf("\n");
		break;
	case 13:
		printf("%s \n", a[j - 1].team_name);
		printf("팀 소개: %s \n", a[j - 1].team_info);
		printf("저번시즌 순위: %s \n", a[j - 1].last_ranking);
		printf("핵심 선수: %s \n", a[j - 1].key_player);
		printf("응원가: %s \n", a[j - 1].team_song);
		printf("\n");
		break;
	}
}

int main() {
	int i;
	char* a;


	INFO list_team[K_leagueTeam];

	FILE* fp = fopen("k리그_팀정보.csv", "r");

	if (fp == NULL) {
		printf("파일 읽기 실패!");
		return -1;
	}

	char line[1024];
	for (i = 0; i < K_leagueTeam; i++) {
		fgets(line, 1024, fp);
		a = strtok(line, ",");
		while (a != NULL) {
			strcpy(list_team[i].team_name, a);
			a = strtok(NULL, ",");
			strcpy(list_team[i].team_info, a);
			a = strtok(NULL, ",");
			strcpy(list_team[i].last_ranking, a);
			a = strtok(NULL, ",");
			strcpy(list_team[i].key_player, a);
			a = strtok(NULL, ",");
			strcpy(list_team[i].team_song, a);
			a = strtok(NULL, ",");
		}
	}

	for (i = 0; i < K_leagueTeam; i++) {
		printf("%s \n", list_team[i].team_name);
		printf("팀 소개: %s \n", list_team[i].team_info);
		printf("저번시즌 순위: %s \n", list_team[i].last_ranking);
		printf("핵심 선수: %s \n", list_team[i].key_player);
		printf("응원가: %s \n", list_team[i].team_song);
		printf("\n");
	}

	select_team(list_team);

	fclose(fp);

	return 0;
}