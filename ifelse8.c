#include<stdio.h>
int main(){
    int math,sci,phy,total,avg;
    printf("enter the marks");
    scanf("%d%d%d",&math,&sci,&phy);
    total=math+sci+phy;
    printf("%d",total);
    avg=total/3;
    printf("%d",avg);
    if(avg>=90)
    {
        printf("grade a");
    }
    else if(avg>=80 && avg<=90)
    {
        printf("grade b");
    }
    else if(avg>=70 && avg<=80)
    {
        printf("grade c");
    }
    else if (avg>=60 && avg<=70)
    {
        printf("grade d");
    }
    else{
        printf("Fail");
    }
    
}