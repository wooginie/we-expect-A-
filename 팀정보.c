#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define K_leagueTeam 13

typedef struct teamInformation {
	char team_name[100];
	char team_uniform[10];
	char team_emblem[50];
	char last_ranking[100];
	char team_fw[300];
        char team_mf[300];
	char team_song[100];
}INFO;

void show_teaminfo(INFO a[], int i) {
	printf("\n");
	printf("팀 이름: %s \n", a[i].team_name);
	printf("유니폼: %s \n", team->team_uniform);
	printf("저번시즌 순위: %s \n", a[i].last_ranking);
	printf("엠블럼: %s \n", team->team_emblem);
	printf("공격수: %s \n", team->team_fw);
        printf("미드필더: %s \n", team->team_mf);
	printf("응원가: %s \n", a[i].team_song);
	printf("\n");
}

void show_allteaminfo(INFO a[]) {
	int i;

	for (i = 0; i < K_leagueTeam; i++) {
		printf("%s \n", a[i].team_name);
		printf("팀 소개: %s \n", a[i].team_info);
		printf("저번시즌 순위: %s \n", a[i].last_ranking);
		printf("공격수: %s \n", team->team_fw);
                printf("미드필더: %s \n", team->team_mf);
		printf("응원가: %s \n", a[i].team_song);
		printf("\n");
	}
}

void select_team(INFO a[]) {
	int i, j;

	for (i = 0; i < K_leagueTeam; i++) {
		printf("%d.%s \n", i + 1, a[i].team_name);
	}

	printf("\n");
	printf("원하는 팀의 번호를 입력하세요: ");
	scanf_s("%d", &j);

	switch (j) {
	case 1:
		show_teaminfo(a, j - 1);
		break;
	case 2:
		show_teaminfo(a, j - 1);
		break;
	case 3:
		show_teaminfo(a, j - 1);
		break;
	case 4:
		show_teaminfo(a, j - 1);
		break;
	case 5:
		show_teaminfo(a, j - 1);
		break;
	case 6:
		show_teaminfo(a, j - 1);
		break;
	case 7:
		show_teaminfo(a, j - 1);
		break;
	case 8:
		show_teaminfo(a, j - 1);
		break;
	case 9:
		show_teaminfo(a, j - 1);
		break;
	case 10:
		show_teaminfo(a, j - 1);
		break;
	case 11:
		show_teaminfo(a, j - 1);
		break;
	case 12:
		show_teaminfo(a, j - 1);
		break;
	case 13:
		show_teaminfo(a, j - 1);
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

	show_allteaminfo(list_team);

	select_team(list_team);

	fclose(fp);

	return 0;
}
