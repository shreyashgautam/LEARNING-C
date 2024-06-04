#include<stdio.h>
int main(){
    int n,i,j,k;
    printf("Enter number of rows/columns");
    scanf("%d",&n);
    
    printf("Enter the elements:\n");
    int arr[n][n];//n*n total elements

    //input
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
    }

    //transpose
     for(i=0;i<n;i++){
        for(j=0;j<=i;j++){
           //swap arr[i][j] and arr[j][i]
           int temp=arr[i][j];
           arr[i][j]=arr[j][i];
           arr[j][i]=temp;
        }
     }

     //rotate
     for(int i=0;i<n;i++){
        int j=0;
        int k=n-1;

        while(j<k){
            int temp=arr[i][j];
            arr[i][j]=arr[i][k];
            arr[i][k]=temp;
            j++;
            k--;
        }
        
     }
     printf("\n");

     //output
     for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;

}
