
#include <stdio.h>
int main()
{
    int student_marks[3][3] = {{50, 60, 70}, {80, 90, 100}, {30, 40, 50}};
    char students_name[3][1] = {"Ali", "Bob", "Cat"};
    int i, j, sum_marks;
    float average;
    for (i = 0; i < 3; i++)
    {
        sum_marks = 0;
        for (j = 0; j < 3; j++)
        {
            sum_marks += student_marks[i][j];
        }
        average = sum_marks / 3.0;
        if (average >= 80)
            printf("%s Grade A avg=%.2f\n", students_name[i], average);
        else if (average >= 60)
           printf("%s Grade B avg=%.2f\n",students_name[i],average);
        else if(average>=40)
           printf("%s Grade C avg=%.2f\n",students_name[i],average);
        else 
           printf("%s Fail avg=%.2f\n",students_name[i],average);
        }
        int maximam=0,position=0;for(i=0;i<3;i++){
                sum_marks = 0;
                for (j = 0; j < 3; j++)
                {
                    sum_marks += student_marks[i][j];
                }
                if (sum_marks > maximam)
                {
                    maximam = sum_marks;
                    position = i;
                }
        }
        printf("Topper: %s with total %d\n",students_name[position],maximam);
        return 0;
    }