#include<stdio.h>
struct std {
    char name[20];
    int roll;
    float sub1;
    float sub2;
    float sub3;
};
float total_mrks(struct std s){
    return s.sub1+s.sub2+s.sub3;
}

int main(){
    struct std s[3];
    int i;
    for(i=0;i<3;i++){
        printf("Enter name: ");
        scanf("%s",s[i].name);
        printf("Enter roll: ");
        scanf("%d",&s[i].roll);
        printf("Enter marks of 3 subjects: ");
        scanf("%d %d %d",&s[i].sub1,&s[i].sub2,&s[i].sub3);
    }
    for(i=0;i<3;i++){
        printf("Name: %s\n",s[i].name);
        printf("Roll: %d\n",s[i].roll);
        printf("Marks of 3 subjects: %d %d %d\n",s[i].sub1,s[i].sub2,s[i].sub3);
    }
    for(i=0;i<3;i++){
        printf("Total marks of %s: %.2f\n",s[i].name,total_mrks(s[i]));
    }
    return 0;
}