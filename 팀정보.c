#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define K_leagueTeam 13

typedef struct teamInformation {
	char team_name[100];
	char team_uniform[100];
	char last_ranking[100];
	char team_emblem[1000];
	char team_stadium[10];
        char team_mascot[5];
	char team_coach[5];
	char team_captain[5];
	char team_history[100];
	char team_fw[300];
        char team_mf[300];
	char team_df[100];
	char team_gk[100];
	char team_song[1000];
}INFO;

void show_teaminfo(INFO* team) {
	printf("\n");
	printf("팀 이름: %s \n", team->team_name);
	printf("유니폼: %s \n", team->team_uniform);
	printf("저번시즌 순위: %s \n", team->last_ranking);
	printf("엠블럼: %s \n", team->team_emblem);
	printf("홈 구장: %s \n", team->team_stadium);
        printf("마스코트: %s \n", team->team_mascot);
        printf("감독: %s \n", team->team_coach);
  	printf("공격수: %s \n", team->team_fw);
        printf("미드필더: %s \n", team->team_mf);
	printf("응원가: %s \n", team->team_song);
	printf("\n");
}

void show_allteaminfo(INFO** teams, int num_teams) {
    for (int i = 0; i < num_teams; i++) {
        show_teaminfo(teams[i]);
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
