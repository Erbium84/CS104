#include <stdio.h>
#include <stdlib.h>
#define max_size 1000
int curr=0;
void insert(int arr[], int x){
    if(curr==max_size-1){
        return;
    }
    arr[curr]=x;
    curr++;
}
void delete(int arr[], int x){
    if(curr==0){
        return;
    }
    arr[curr]=0;
    curr--;
}
int search(int arr[], int x){
    int found=-1;
    for(int i=0; i<curr; i++){
        if(arr[i]==x){
            found=i;
            break;
        }
    }
    return found;
}
void update(int arr[], int x, int y){
    for(int i=0; i<curr; i++){
        if(arr[i]==x){
            arr[i]=y;
            break;
        }
    }
}
void display(int arr[]){
    for(int i=0; i<curr; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int main(){
    int arr[max_size];
    printf("1. Insert x.\n2. Detete x\n3. Search x\n4. Update x with new value y,\n5. display list.\n 6.Exit the program.\n");
    int x;
    scanf("%d", &x);
    while(x!=6){
        if(x==1){
            int y;
            scanf("%d", &y);
            insert(arr, y);
        }
        if(x==2){
            int y;
            scanf("%d", &y);
            delete(arr, y);
        }
        if(x==3){
            int y;
            scanf("%d", &y);
            search(arr, y);
        }
        if(x==4){
            int y,z;
            scanf("%d %d", &y, &z);
            update(arr, y, z);
        }
        if(x==5){
            display(arr);
        }
        if(x==6){
            break;
        }
        scanf("%d", &x);
    }
}