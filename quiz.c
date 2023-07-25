#include <stdio.h>

int main(void)
{
int i;
int ans1, ans2, ans3, ans4, ans5;
int point1, point2, point3, point4, point5;
int point01, point02, point03, point04, point05;
int total1, total2, total3;
    printf(" Welcome to my game\n\n");
    printf("> Press 7 to jam start the game\n\n");
    printf("> Press 0 to quit the game\n");
    scanf("%d", &i);
    if (i == 7)

    {
        printf("The game has started!\n\n");
    }
    else if (i == 0)
    {
        printf("You have quit the game\n\n");
    }
    else
    {
        printf("Invalid choice\n\n");
    }

    if (i == 7)
    {
        printf("1) Which is the fastest car in the Kenyan roads  :?\n\n");
        printf("1) Subaru mambaru\n");
        printf("2) Mitsubishi Lancer\n");
        printf("3) Golf\n");
        printf("4) Toyota double cabin\n\n");
        printf("Enter your Answer : ");
        scanf("%d", &ans1);

        if (ans1 == 3)
        {
            printf("Correct Answer\n");
            point1 = 10;
            printf("You have scored %d points\n", point1);
        }
        else
        {
            printf("Wrong Answer!\n");
            point01 = 0;
            printf("You have scored %d points\n\n", point01);
        }
        printf("2) Which one is the best operating systems for developers :?\n\n");
        printf("1) Macos unix\n");
        printf("2) Linux \n");
        printf("3) Windows \n");
        printf("Enter your Answer : ");
        scanf("%d", &ans2);
        if (ans2 == 4)

        {
            printf("Correct Answer\n");
            point2 = 11;
            printf("You have scored %d points\n", point2);
        }
        else
        {
            printf("Wrong Answer!\n");
            point02 = 0;
            printf("You have scored %d points\n", point02);
        }

        printf("3) Which cloud infrastucture platform are conversant with : ?\n\n");
        printf("1) Microsoft Azure\n");
        printf("2) Amazon\n");
        printf("3) Google \n");
        printf("Enter your answer :");
        scanf("%d", &ans3);

        if (ans3 == 1)
        {
            printf("Correct Answer\n");
            point3 = 12;
            printf("You scored %d points\n\n", point3);
        }
        else
        {
            printf("Wrong Answer");
            point03 = 0;
            printf(" You scored %d points", point03);
        }
        printf("4) How long has it taken you to learn code : ? \n\n");
        printf("1) 2 years\n");
        printf("2) 1 year\n");
        printf("3) less than 1 year\n");
        printf("Enter your answer :");
        scanf("%d",&ans4);

        if(ans4 == 3)
        {
            printf("Correct answer \n");
            point4=13;
            printf("You score %d points",point4);

        }
        else 
        {
            printf("Wrong anwser");
            point04 =0;
            printf("You scored %d points",point04);
        }
        printf("5) How has been your learning  experience at ALXSW :?\n\n");
        printf("1) Very intense,lots of learning and deadline to meet\n");
        printf("2) comfortable \n");
        printf("3) i meet all the task deadlines\n");
        printf("Enter your answer: ");
        scanf("%d",&ans5);

        if (ans5 == 1)
        {
            printf("Correct answer\n");
            point5=14;
            printf("You scored %d",point5);
        }
        else
        {
            printf("Wrong Answer");
            point05=0;
            printf("You scored %d",point05);
        }
    }
    return 0;
}
