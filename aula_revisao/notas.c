#include <stdio.h>
#include <stdlib.h>

struct grades{
    int ra;
    float grade;
};

void read_grades(struct grades grades[12]);
void show_grades(struct grades grade[12]);

int main(){
    struct grades grades[12];
    read_grades(grades);
    show_grades(grades);
    return 0;
}

void read_grades(struct grades grades[12]){
    int ra, i;
    float grade;
    for (i=0; i<3; i++){
        printf("Type the student RA:");
        scanf("%i", &ra);
        grades[i].ra = ra;
        printf("Type the student grade: ");
        scanf("%f", &grade);
        while (grade<0 || grade>10){
            printf("Bro, you typed a grade higher than 10 or louer than 0, put the right grade please: ");
            scanf("%f", &grade);
        }
        grades[i].grade = grade;
    }
}

void show_grades(struct grades grades[12]){
    int i=0;
    for (i; i<3; i++){
        printf("--------------------------------------------------\n");
        printf("STUDENT %i\n", i+1);
        printf("RA: %i\n", grades[i].ra);
        printf("RA: %.2f\n", grades[i].grade);
        printf("--------------------------------------------------\n");
    }
}