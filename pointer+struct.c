#include<Stdio.h>
typedef struct person{
    int weight;
    int age;
}person;
void change(person *x){
    x->age=100;
}
int main(){
    person s1;
    
    scanf("%d",&s1.age);
    scanf("%d",&s1.weight);
    change(&s1);
    printf("%d",s1.age);
    printf("%d",s1.weight);
}