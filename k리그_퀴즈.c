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

void play_quiz(Quiz* a) {
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
    printf("\n");
    printf("                  <<잠시후 문제가 시작됩니다>>           \n");
    printf("\n");
    printf("==================================================================\n");
    Sleep(2000);
    system("cls");
  
    for (i = 0; i < quizNum; i++) {
        randomIndex = arr[i];
        printf("==================================================================\n");
        printf("문제 %d) %s \n", i + 1, a[randomIndex].question);
        printf("\n");
        printf("     %s \n", a[randomIndex].choice);
        printf("==================================================================\n");
        printf("답: ");
        scanf("%d", &n);
        while(1){
            if (n == a[randomIndex].answer) {
                Sleep(1000);
                printf("==================================================================\n");
                printf("정답입니다! \n");
                score += 20;
                num++; 
                break;
            }
            else if (n != a[randomIndex].answer && n < 5 && n > 0) {
                Sleep(1000);
                printf("==================================================================\n");
                printf("오답입니다! \n");
                printf("\n");
                printf("%s \n", a[randomIndex].explanation);
                break;
            }
            else if (n == 0 || n > 4) {
                printf("\n");
                printf("숫자를 제대로 입력해주세요! \n");
                printf("답: ");
                scanf("%d", &n);
            }
        }
        Sleep(3000);
        system("cls");
    }
    printf("==================================================================\n");
    printf("\n");
    printf("당신의 점수는 %d점입니다! \n", score);
    printf("\n");
    printf("%d문제 중 %d문제를 맞히고 %d문제를 틀렸습니다. \n", quizNum, num, quizNum - num);
    printf("\n");
    printf("==================================================================\n");
    Sleep(2000);
    system("cls");
    printf("==================================================================\n");
    printf("\n");
    printf("                     <<메인 화면으로 나갑니다>>                 \n");
    printf("\n");
    printf("==================================================================\n");
    Sleep(2000);
    system("cls");
}

void read_quizFile(FILE* file, Quiz* list_quiz, int totalQuizNum) {
    char line[1024];
    char* a_quiz;
    int i_quiz, b_quiz;

    for (i_quiz = 0; i_quiz < totalQuizNum; i_quiz++) {
        fgets(line, 1024, file);
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
}

int main() {
    Quiz* list_quiz;
    FILE* p_quiz;
  
    srand(time(NULL));

    p_quiz = fopen("k리그_퀴즈.csv", "r");

    if (p_quiz == NULL) {
        printf("파일 읽기 실패!");
        return -1;
    }
    
    list_quiz = (Quiz*)malloc(totalQuiz * sizeof(Quiz));
    
    read_quizFile(p_quiz, list_quiz, totalQuiz);

    play_quiz(list_quiz);

    fclose(p_quiz);
    
    free(list_quiz);

    return 0;
}
