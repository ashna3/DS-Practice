#include <stdio.h>

int main() {
    // Write C code here
    int key,found=0;
    int a[5]={1,2,3,4,5};
    printf("Array ele:\n");
    for(int i=0;i<5;i++){
        printf("%d\n",a[i]);
    }
    
    printf("Enter element to be searched: ");
    scanf("%d",&key);
    
    for(int i=0;i<5;i++){
        if(key==a[i]){
            printf("ele found at pos %d",(i+1));
            found=1;
            break;
        }
    }
    if(found==0)
        printf("ele %d not found in array",key);

    return 0;
}