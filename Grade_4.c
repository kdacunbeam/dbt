
#include <stdio.h>
#include<conio.h>
int main() {
    float marks[5];
    float total = 0;


    for (int i = 0; i < 5; i++)
        {
        printf("Enter marks for subject %d: ", i + 1);
        scanf("%f", &marks[i]);
        total += marks[i];
        }
    if(total>=90)
    {
        printf("EX");
    }
    else if (total>=80&&total<90) {
       printf("A");
    } else if (total>=70&&total<=80) {
       printf("B");
    } else if (total>=60&&total<=70) {
        printf("C");
    } else if (total<=60) {
        printf("F");
    }

    return 0; // Exit program successfully
}
