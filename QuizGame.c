#include <stdio.h>
#include <ctype.h>


int main()
{
    char question[][100] = {"1. What programming language do you like?: ",
                            "2. How is this language impacting your life?: ",
                            "3. What languages do you want to learn?: "};

    char options[][100] = {"A. Python", "B. C", "C. C++", "D. JavaScript",
                            "A. Not impacting", "B. Impacting", "C. I see world differently",
                            "A. JavaScript/Python/C#", "B. C/C++, Rust", "C. GO, Java, HTML"};

    char answers[3] = {'C', 'C', 'A'};

    int numberOfQuestions = sizeof(question)/sizeof(question[0]);

    
    char guess;
    int score;


    printf("QUIZZ GAME\n");

    for(int i = 0; i < numberOfQuestions; i++)
    {
        printf("%s\n", question[i]);

        for(int j = (i * 4); j < (i * 4) + 4; j++)
        {
            printf("%s\n", options[j]);
        }
        

        printf("guess...");
        scanf("%c", &guess);
        scanf("%c"); // it will clear \n from input buffer

        guess = toupper(guess);

        if(guess == answers[i])
        {
            score++;
        }
    }

    printf("FINAL SCORE: %d", score);

    return 0;
}