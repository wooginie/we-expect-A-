#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define K_Teams 13

typedef struct teamInformation {
   char name_of_team[100];
   char team_24season_ranking[100];
   char winning_reason[100];
}INFO;

int main()
{
   int i;
   char* x;

   INFO list_team[K_Teams];

   FILE* fp = fopen("file name ", "r");

    if(fp==NULL){
        printf("failed");
        return -1;
    }
    char line[1024];
      for (i = 0; i < K_Teams; i++) {
         fgets(line, 1024, fp);
         x = strtok(line, ",");
         while (x != NULL) {
            strcpy(list_team[i].name_of_team, x);
            x = strtok(NULL, ",");
            strcpy(list_team[i].team_24season_ranking, x);
            x = strtok(NULL, ",");
            strcpy(list_team[i].winning_reason, x);
            x = strtok(NULL, ",");
         }

      }
}

