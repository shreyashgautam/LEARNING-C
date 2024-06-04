int main(){
    int n ;
    scanf("%d",&n);
    int arr[n];
    for(int j=0;j<n;j=j+1){
        printf("%d",j);
        scanf("%d",&arr[j]);
    }
    int temp;
    for(int i = 0; i<n/2; i++){
        temp = arr[i];
        arr[i] = arr[n-i-1];
        arr[n-i-1] = temp;
    }
    for(int j = 0; j < n; j=j+1){
        printf("%d\t", arr[j]);
    }
    return 0;
}