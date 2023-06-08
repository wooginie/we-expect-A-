#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define K_leagueTeam 13

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

void show_teaminfo(INFO* team) {
	printf("\n");
	printf("팀 이름: %s \n", team->team_name);
	printf("유니폼: %s \n", team->team_uniform);
	printf("저번시즌 순위: %s \n", team->last_ranking);
	printf("엠블럼: %s \n", team->team_emblem);
	printf("홈 구장: %s \n", team->team_stadium);
        printf("마스코트: %s \n", team->team_mascot);
        printf("감독: %s \n", team->team_coach);
	printf("주장: %s \n", team->team_captain);
        printf("기록: %s \n", team->team_history);
  	printf("공격수: %s \n", team->team_fw);
        printf("미드필더: %s \n", team->team_mf);
	printf("수비수: %s \n", team->team_df);
        printf("골키퍼: %s \n", team->team_gk);
	printf("응원가: %s \n", team->team_song);
	printf("\n");
}

void show_allteaminfo(INFO** teams) {
	printf("<<<<<<<<<< K리그1 모든 팀 보기 >>>>>>>>>> \n");
	printf("\n");
        for (int i = 0; i < K_leagueTeam; i++) {
            show_teaminfo(teams[i]);
	    printf("\n");
        }
}

void select_team(INFO** teams) {
	int n, i;
	
	for (i = 0; i < K_leagueTeam; i++) {
             printf("%d.%s \n", i + 1, teams[i]->team_name);
        }
	
	while (1) {
        printf("원하는 팀의 번호를 입력하세요: ");
        scanf("%d", &n);

        if (n >= 1 && n <= K_leagueTeam) {
            show_teaminfo(teams[n - 1]);
            break;
        }
        else {
            printf("번호를 다시 입력하세요(1번~%d번) \n",K_leagueTeam);
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

int main() {
	INFO** list_team;
	
	list_team = read_Teaminfo("k리그_팀정보.csv");
        if (list_team == NULL) {
            return -1;
        }
	
	
	show_allteaminfo(list_team);

	select_team(list_team);
	
	free_Teaminfo(list_team);

	return 0;
}
