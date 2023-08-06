#include<stdio.h>
struct student{
    char name[25];
    int roll;
    float marks;
};

int main(){
    struct student s1,s2,s3;
    printf("Enter the roll nu , name ,marks of 1st stu : ");
    scanf("%d %s %f",&s1.roll,s1.name,&s1.marks);
    printf("Enter the roll nu , name ,marks of 2nd stu : ");
    scanf("%d %s %f",&s2.roll,s2.name,&s2.marks);
    printf("Enter the roll nu , name ,marks of 3rd stu : ");
    scanf("%d %s %f",&s3.roll,s3.name,&s3.marks);

    printf("The data for student's : \n");
    printf("%d %s %f \n",s1.roll,s1.name,s1.marks);
    printf("%d %s %f \n",s2.roll,s2.name,s2.marks);
    printf("%d %s %f \n",s3.roll,s3.name,s3.marks);
    return 0;
}