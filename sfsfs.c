#include<stdio.h>
 int main(){
int n=0;
int arr[100]; 
int count=0; 
int max=0;
 int pos=0;
for(int i=0;;i++){
     scanf("%d",&arr[i]); n++;
if(arr[i]==0){ 
    break;
}
}
for(int i=0;i<n-1;i++){ if(arr[i]==arr[i+1]){
count++;
}
else{
if(max<count){ pos=i; max=count; count=0;
}
}
}
printf("%d %d",arr[pos],max);
}

