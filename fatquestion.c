#include<stdio.h>
int main(){
    char arr[100];
    fgets(arr,100,stdin); // this is shreyash
    char ans[100][100];
    int val[100];
    int j=0;
    int k=0;
    int count =0; 
    for(int i=0;arr[i]!='\0';i++){
        if(arr[i]==' '){
            val[k]=count;
            j=0;
            k++;
            count=0;
        }
        else{
            ans[k][j]=arr[i];  
            j++;
            count++;
        }
    }
    val[k]=count;
    for(int i=0;i<k;i++){
        printf("%s--%d\n",ans[i],val[i]);    //[this,is,shreyash] //[4,2,8]
    }

}