#include <stdio.h>
//Shell Sort is an imporved form of the insertion sort
//In insertion sort, you can only compare with the next element, but in this sorting comparisions with gaps is
//being done
void shellSort(int a[], int n){
    int gap=n/2; int i,temp;


    //after each traversal gap is halved
    for(gap; gap>0; gap/=2){

        //traversing through all partitions with the current gap
        for(int i=gap; i<n; i++){
            temp=a[i];
            int j;
            //traverising though a specific partion and perfoming appt swaps
            for(j=i; j>=gap&&a[j-gap]>temp; j-=gap){
                a[j]=a[j-gap];
                
            }
            a[j]=temp;
        }
    }
}
int main(){
    int n=6;
    int a[6]={91, 23, 10, 9, 11, 16};
    shellSort(a, n);
    for(int i=0; i<n; i++){
        printf("%d", a[i]);
    }
}