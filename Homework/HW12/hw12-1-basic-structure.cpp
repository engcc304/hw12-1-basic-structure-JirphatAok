/*
    สร้าง Struct เพื่อเก็บข้อมูลของคน 2 คน โดยเก็บข้อมูล ชื่อ , อายุ , เพศ และคะแนนสะสม และแสดงผลออกมาบนหน้าจอ
    
    struct Person {
	    char  Name[20] ;
	    int   Age ;
	    int   Sex ;
	    float Score ;
	} ;
    
    Test case:
        Person A
        Name : 
            Mai
        Age : 
            24
        Sex : 
            M
        Score : 
            99.99

        Person B
        Name : 
            Mon
        Age : 
            21
        Sex : 
            F
        Score : 
            87.60

    Output:
        --| Person A Information |--
        Name : Mai (M)
        Age : 24 years old
        Score : 99.99 points
        --| Person B Information |--
        Name : Mon (F)
        Age : 21 years old
        Score : 87.60 points

*/
#include <stdio.h>
#include <string.h>

struct Person {
    char Name[20];
    int Age;
    char Sex;
    float Score;
};

int main() {
    struct Person P[2];

    for (int i = 0; i < 2; i++) {
        printf("Person %c \n", i == 0 ? 'A' : 'B');
        printf("Name : ");
        scanf("%s", P[i].Name);

        printf("Age : ");
        scanf("%d", &P[i].Age);

        printf("Sex : ");
        scanf(" %c", &P[i].Sex);

        printf("Score : ");
        scanf("%f", &P[i].Score);
    }

    for (int i = 0; i < 2; i++) {
        printf("\n--| Person %c Information |--\n", i == 0 ? 'A' : 'B');
        printf("Name : %s (%c)\n", P[i].Name, P[i].Sex);
        printf("Age : %d years old\n", P[i].Age);
        printf("Score : %.2f points", P[i].Score);
    }

    return 0;
}

