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
