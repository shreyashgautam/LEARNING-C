#include<stdio.h>
void printnumber(int arr[],int n);
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    printnumber(arr,n);
    return 0;
}
void printnumber(int arr[],int n){
    int i;
    for( i = 0;i<n;i=i+1){
        printf("%d",i);
        scanf("%d",&arr[i]);

    }
    for(i=0;i<n;i=i+1){
        printf("%d-%d\n",i,arr[i]);

    }
    
    

}