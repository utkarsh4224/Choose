#include <stdio.h>
int table(),Greaternum(),sum(),diffrence();
void age();
int a,b,Sum,i,Choice,age_type,month;
int main()
{
    printf("1.Sum of two number.\n2.Greater number b/w 2 number.\n3.Diffrence of two number.\n4.Know your age.\n5.Table of a number.\n");
    printf("Choose from 1-5 :");
    scanf("%d",&Choice);
    if(Choice<2){
        sum();
    }
    else if(Choice<3){
        Greaternum();
    }
    else if(Choice<4){
        diffrence();
    }
    else if(Choice<5){
        int present_date;
        printf("present_date : ");
        scanf("%d",&present_date);
        int present_month;
        printf("present_month : ");
        scanf("%d",&present_month);
        int present_year;
        printf("present_year : ");
        scanf("%d",&present_year);
        int birth_date;
        printf("birth_date : ");
        scanf("%d",&birth_date);
        int birth_month;
        printf("birth_month : ");
        scanf("%d",&birth_month);
        int birth_year;
        printf("birth_year : ");
        scanf("%d",&birth_year);
        age(present_date, present_month, present_year, birth_date, birth_month, birth_year);
    }
    else if(Choice<6){
        table();
    }
    else{
        printf("try again later");
    }
    
    return 0;
}
int table()
{
    printf("Enter the number for table : ");
    scanf("%d",&a);
    for (i=1;i<=10; ++i){
        printf("%d X %d = %d \n",a,i,a*i);
    }
}
int sum()
{
    printf("Enter first number : ");
    scanf("%d",&a);
    printf("Enter second number : ");
    scanf("%d",&b);
    Sum=a+b;
    printf("The sum is : %d",Sum);
}
int Greaternum()
{
    printf("Enter first number : ");
    scanf("%d",&a);
    printf("Enter second number : ");
    scanf("%d",&b);
    if (a>b){
        printf("Greater number is : %d",a);
    }
    else{
        printf("Greater number is : %d",b);
    }
}
int diffrence()
{
    printf("Enter first number : ");
    scanf("%d",&a);
    printf("Enter second number : ");
    scanf("%d",&b);
    if(a>b){
        printf("The Diffrence of second number by first is : %d",a-b);
    }
    else{
        printf("The Diffrence of first number by second is : %d",b-a);
    }
}
void age(int present_date, int present_month, int present_year, int birth_date, int birth_month, int birth_year)
{
    int month[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    if (birth_date > present_date){
        present_date = present_date + month[birth_month - 1];
        present_month = present_month - 1;
    }
    if (birth_month > present_month) {
        present_year = present_year - 1;
        present_month = present_month + 12;
    }
    int final_date = present_date - birth_date;
    int final_month = present_month - birth_month;
    int final_year = present_year-birth_year;
    printf("Present Age Years: %d Months: %d Days: %d", final_year, final_month, final_date);
}



