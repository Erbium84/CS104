#include <stdio.h>
#include <stdlib.h>
struct student{
    int rollnum;
    int marks;
    char name[30];
};

int compareMarks(const void*a, const void* b){
    return (((struct student*)a)->marks-((struct student*)b)->marks);
}

int compareName(const void*a, const void* b){
    return (((struct student*)a)->name-((struct student*)b)->name);
}

int main(){
    int N=100;
    struct student s[10];
    for(int i=0; i<10; i++){
        s[i].rollnum=(i+1);
        s[i].marks=(i*6+1)%10;
        s[i].name[0]='A'+i;
    }
    qsort(s, 10, sizeof(struct student), compareMarks);
    printf("------------------\n");
    for(int i=0; i<10; i++){
        printf("(%d). %d %d %c",i+1,  s[i].rollnum, s[i].marks, s[i].name);
        printf("\n");
    }

    qsort(s, 10, sizeof(struct student), compareName);
    printf("------------------\n");
    for(int i=0; i<10; i++){
        printf("(%d). %d   %d   %c",i+1,  s[i].rollnum, s[i].marks, s[i].name);
        printf("\n");
    }
}