#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <Windows.h>
#define K_Teams 15

typedef struct teamInformation {
    char team_name1[100];
    char team_ranking1[100];
    char team_reason1[100];
} INFO;

void bring_teaminfo1(INFO* team) {
    printf("==================================================================\n");
    printf("\n");
    printf("팀 이름: %s \n", team->team_name1);
    printf("다음시즌 예상 순위: %s \n", team->team_ranking1);
    printf("이유: %s \n", team->team_reason1);
    printf("\n");
    printf("==================================================================\n");
}

void bring_allteaminfo1(INFO** teams) {
    printf("모든 팀 보기 \n");
    for (int i = 0; i < K_league1; i++) {
        bring_teaminfo1(teams[i]);
    }
}

void choose_team1(INFO** teams) {
    int n, i;

    while (1) {
        printf("==================================================================\n");
        printf("\n");
        for (i = 0; i < K_league1; i++) {
            printf("%d.%s \n", i + 1, teams[i]->team_name1);
        }
        else {
            printf("팀 번호 재입력: \n",K_Team);
        }

    }
     

	
int main()
{
   int i;
	INFO** list_expect;
	FILE* fp = fopen("file name.csv", "r");
	if (fp == NULL) {
		printf("failed!");
		return -1;
	}
	
  
    char line[1024];
      for (a = 0; a < K_Teams; a++) {
         fgets(line, 1024, fp);
         x = strtok(line, ",");
         while (b != NULL) {
            strcpy(list_team[i].name_of_team, x);
            x = strtok(NULL, ",");
            strcpy(list_team[i].team_24season_ranking, x);
            x = strtok(NULL, ",");
            strcpy(list_team[i].winning_reason, x);
            x = strtok(NULL, ",");
         }

      }
	bring_allteams(list_expect);

	choose_anyteams(list_expect);

	fclose(fp);
	
	for (a = 0; a < K_Teams; a++) {
             free(list_expect[a]);
        }
        free(list_expect);

	return 0;
}
}

