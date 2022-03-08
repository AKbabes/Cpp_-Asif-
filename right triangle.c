#include <stdio.h>
int main(){
    int i, j, r;
    printf("Enter number of rows : ");
    scanf("%d", &r);

    for(i=1; i<=r; i++){
        for(j=i; j<r; j++){
            printf(" ");
        }
        for(j=1; j<=i; j++){
            if(i==r || j==1 || j==i){
                printf("*");
            }
            else{
                printf(" ");
            }
        }

    printf("\n");
    }

return 0;
}
