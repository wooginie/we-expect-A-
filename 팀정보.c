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
	printf("���ϴ� ���� ��ȣ�� �Է��ϼ���: ");
	scanf_s("%d", &j);

	switch (j) {
	case 1:
		printf("%s \n", a[j - 1].team_name);
		printf("�� �Ұ�: %s \n", a[j - 1].team_info);
		printf("�������� ����: %s \n", a[j - 1].last_ranking);
		printf("�ٽ� ����: %s \n", a[j - 1].key_player);
		printf("������: %s \n", a[j - 1].team_song);
		printf("\n");
		break;
	case 2:
		printf("%s \n", a[j - 1].team_name);
		printf("�� �Ұ�: %s \n", a[j - 1].team_info);
		printf("�������� ����: %s \n", a[j - 1].last_ranking);
		printf("�ٽ� ����: %s \n", a[j - 1].key_player);
		printf("������: %s \n", a[j - 1].team_song);
		printf("\n");
		break;
	case 3:
		printf("%s \n", a[j - 1].team_name);
		printf("�� �Ұ�: %s \n", a[j - 1].team_info);
		printf("�������� ����: %s \n", a[j - 1].last_ranking);
		printf("�ٽ� ����: %s \n", a[j - 1].key_player);
		printf("������: %s \n", a[j - 1].team_song);
		printf("\n");
		break;
	case 4:
		printf("%s \n", a[j - 1].team_name);
		printf("�� �Ұ�: %s \n", a[j - 1].team_info);
		printf("�������� ����: %s \n", a[j - 1].last_ranking);
		printf("�ٽ� ����: %s \n", a[j - 1].key_player);
		printf("������: %s \n", a[j - 1].team_song);
		printf("\n");
		break;
	case 5:
		printf("%s \n", a[j - 1].team_name);
		printf("�� �Ұ�: %s \n", a[j - 1].team_info);
		printf("�������� ����: %s \n", a[j - 1].last_ranking);
		printf("�ٽ� ����: %s \n", a[j - 1].key_player);
		printf("������: %s \n", a[j - 1].team_song);
		printf("\n");
		break;
	case 6:
		printf("%s \n", a[j - 1].team_name);
		printf("�� �Ұ�: %s \n", a[j - 1].team_info);
		printf("�������� ����: %s \n", a[j - 1].last_ranking);
		printf("�ٽ� ����: %s \n", a[j - 1].key_player);
		printf("������: %s \n", a[j - 1].team_song);
		printf("\n");
		break;
	case 7:
		printf("%s \n", a[j - 1].team_name);
		printf("�� �Ұ�: %s \n", a[j - 1].team_info);
		printf("�������� ����: %s \n", a[j - 1].last_ranking);
		printf("�ٽ� ����: %s \n", a[j - 1].key_player);
		printf("������: %s \n", a[j - 1].team_song);
		printf("\n");
		break;
	case 8:
		printf("%s \n", a[j - 1].team_name);
		printf("�� �Ұ�: %s \n", a[j - 1].team_info);
		printf("�������� ����: %s \n", a[j - 1].last_ranking);
		printf("�ٽ� ����: %s \n", a[j - 1].key_player);
		printf("������: %s \n", a[j - 1].team_song);
		printf("\n");
		break;
	case 9:
		printf("%s \n", a[j - 1].team_name);
		printf("�� �Ұ�: %s \n", a[j - 1].team_info);
		printf("�������� ����: %s \n", a[j - 1].last_ranking);
		printf("�ٽ� ����: %s \n", a[j - 1].key_player);
		printf("������: %s \n", a[j - 1].team_song);
		printf("\n");
		break;
	case 10:
		printf("%s \n", a[j - 1].team_name);
		printf("�� �Ұ�: %s \n", a[j - 1].team_info);
		printf("�������� ����: %s \n", a[j - 1].last_ranking);
		printf("�ٽ� ����: %s \n", a[j - 1].key_player);
		printf("������: %s \n", a[j - 1].team_song);
		printf("\n");
		break;
	case 11:
		printf("%s \n", a[j - 1].team_name);
		printf("�� �Ұ�: %s \n", a[j - 1].team_info);
		printf("�������� ����: %s \n", a[j - 1].last_ranking);
		printf("�ٽ� ����: %s \n", a[j - 1].key_player);
		printf("������: %s \n", a[j - 1].team_song);
		printf("\n");
		break;
	case 12:
		printf("%s \n", a[j - 1].team_name);
		printf("�� �Ұ�: %s \n", a[j - 1].team_info);
		printf("�������� ����: %s \n", a[j - 1].last_ranking);
		printf("�ٽ� ����: %s \n", a[j - 1].key_player);
		printf("������: %s \n", a[j - 1].team_song);
		printf("\n");
		break;
	case 13:
		printf("%s \n", a[j - 1].team_name);
		printf("�� �Ұ�: %s \n", a[j - 1].team_info);
		printf("�������� ����: %s \n", a[j - 1].last_ranking);
		printf("�ٽ� ����: %s \n", a[j - 1].key_player);
		printf("������: %s \n", a[j - 1].team_song);
		printf("\n");
		break;
	}
}

int main() {
	int i;
	char* a;


	INFO list_team[K_leagueTeam];

	FILE* fp = fopen("k����_������.csv", "r");

	if (fp == NULL) {
		printf("���� �б� ����!");
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
		printf("�� �Ұ�: %s \n", list_team[i].team_info);
		printf("�������� ����: %s \n", list_team[i].last_ranking);
		printf("�ٽ� ����: %s \n", list_team[i].key_player);
		printf("������: %s \n", list_team[i].team_song);
		printf("\n");
	}

	select_team(list_team);

	fclose(fp);

	return 0;
}