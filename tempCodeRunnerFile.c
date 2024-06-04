void calc(struct student *s,int n){
    int total[100];
    for(int i=0;i<n;i++){
        total[i]=s[i].subject*s[i].marks;
    }
    float avg=0;
    for(int i=0;i<n;i++){
        avg=avg+total[i];
    }
    avg=avg/n;
    printf("%f",avg);
}