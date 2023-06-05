#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define totalQuiz 10

typedef struct {
    char question[1000];
    int answer;
} Quiz;

void play_quiz(Quiz a[]) {
    int i, j;
  
    for (i = 0; i < totalQuiz; i++) {
        printf("%d. %s \n", i + 1, a[i].question);
        scanf("%d", &j);
        if (j == a[i].answer) {
            printf("정답입니다! \n");
        }
    }
}

int main() {
    Quiz list_quiz[totalQuiz];
    FILE* p_quiz;
    char* a_quiz;
    int i_quiz, b_quiz;

    //srand(time(NULL));

    p_quiz = fopen("k리그_퀴즈.csv", "r");

    if (p_quiz == NULL) {
        printf("파일 읽기 실패!");
        return -1;
    }
    
    char line[1024];
    for (i_quiz = 0; i_quiz < totalQuiz; i_quiz++) {
        fgets(line, 1024, p_quiz);
        a_quiz = strtok(line, ",");
        while (a_quiz != NULL) {
            strcpy(list_quiz[i_quiz].question, a_quiz);
            a_quiz = strtok(NULL, ",");
            b_quiz = atoi(a_quiz);
            list_quiz[i_quiz].answer = b_quiz;
            a_quiz = strtok(NULL, ",");
        }
    }

    play_quiz(list_quiz);

    fclose(p_quiz);

    return 0;
}
