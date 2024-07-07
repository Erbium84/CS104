#include <stdio.h>
#include <stdlib.h>
#define max_size 1000
int comp (const void * elem1, const void * elem2) {
    int f = *((int*)elem1);
    int s = *((int*)elem2);
    if (f > s) return  1;
    if (f < s) return -1;
    return 0;
}
void insert(int a[], int x){
    int i=0;
    while(a[i]!=INT_MAX){
        i++;
    }
    a[i]=x;
    qsort(a, sizeof(a)/sizeof(*a), sizeof(*a), comp);
}
void delete(int a[], int x){
    int i=0;
    while(a[i]!=x){
        i++;
    }
    a[i]=INT_MAX;
     qsort(a, sizeof(a)/sizeof(*a), sizeof(*a), comp);
}
int search(int a[], int x){
    int i=0;
    while(i<max_size){
        if(a[i]==x){
            return i;
        }
        i++;
    }
    return -1;
}
void update(int a[], int x, int y){
    int i=0;
    while(a[i]!=x){
        i++;
    }
    a[i]=y;
}
void display(int a[]){
    int i=0;
    while(a[i]!=INT_MAX){
        printf("%d ", a[i]);
        i++;
    }
}
int main(){
    int a[max_size];
    for(int i=0; i<max_size; i++){
        a[i]=INT_MAX;
    }
    printf("1. Insert x.\n2. Detete x\n3. Search x\n4. Update x with new value y,\n5. display list.\n6.Exit the program.\n");
    int x;
    scanf("%d", &x);
    while(x!=6){
        if(x==1){
            int y;
            scanf("%d", &y);
            insert(a, y);
        }
        if(x==2){
            int y;
            scanf("%d", &y);
            delete(a, y);
        }
        if(x==3){
            int y;
            scanf("%d", &y);
            search(a, y);
        }
        if(x==4){
            int y,z;
            scanf("%d %d", &y, &z);
            update(a, y, z);
        }
        if(x==5){
            display(a);
        }
        if(x==6){
            break;
        }
        scanf("%d", &x);
    }
}