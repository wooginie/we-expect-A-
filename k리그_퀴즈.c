#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <Windows.h>

#define totalQuiz 10
#define quizNum 5

typedef struct {
    char question[300];
    char choice[300];
    int answer;
    char explanation[500];
} Quiz;

void play_quiz(Quiz a[]) {
    int i, j, n;
    int randomIndex;
    int arr[quizNum];
    int score = 0;
    int num = 0;
    
    for (i = 0; i < quizNum; i++) {
        arr[i] = rand() % totalQuiz;
        for (j = 0; j < i; j++) {
            if (arr[i] == arr[j]) {
                i--;
                break;
            }
        }
    }
    printf("==================================================================\n");
    printf("잠시후 문제가 시작됩니다!");
    Sleep(2000);
    system("cls");
  
    for (i = 0; i < quizNum; i++) {
        randomIndex = arr[i];
        printf("문제 %d) %s \n", i + 1, a[randomIndex].question);
        printf("%s \n", a[randomIndex].choice);
        printf("답: ");
        scanf("%d", &n);
        printf("\n");
        if (n == a[randomIndex].answer) {
            printf("정답입니다! \n");
            printf("\n");
            score += 20;
            num++;
        }
        
        else {
            printf("오답입니다! \n");
            printf("%s \n", a[randomIndex].explanation);
            printf("\n");
        }
    }
    
    printf("당신의 점수는 %d점입니다! \n", score);
    printf("%d문제 중 %d문제를 맞히고 %d문제를 틀렸습니다. \n", quizNum, num, quizNum - num);
}

int main() {
    Quiz list_quiz[totalQuiz];
    FILE* p_quiz;
    char* a_quiz;
    int i_quiz, b_quiz;

    srand(time(NULL));

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
            strcpy(list_quiz[i_quiz].choice, a_quiz);
            a_quiz = strtok(NULL, ",");
            b_quiz = atoi(a_quiz);
            list_quiz[i_quiz].answer = b_quiz;
            a_quiz = strtok(NULL, ",");
            strcpy(list_quiz[i_quiz].explanation, a_quiz);
            a_quiz = strtok(NULL, ",");
        }
    }

    play_quiz(list_quiz);

    fclose(p_quiz);

    return 0;
}
