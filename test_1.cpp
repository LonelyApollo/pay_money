//#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
    const double RATE = 8.25;   //定义【基本时薪】
    const int STANDARD = 40;    //定义【标准时间（至少工作40h）】
    double pay = 0.8;           //定义【应付工资】
    int hours;                  //定义【实际工作时间】

    printf("请输入工作的小时数:\n");
    scanf("%d", &hours);        //输入实际工作时间给“hours”
    printf("\n");
    if (hours > STANDARD)       //如果实际工作时间大于标准时间（40h），则执行语句1，否则执行语句2
        pay = STANDARD * RATE + (hours - STANDARD) * (RATE * 1.5); //应付工资=基本时薪+加班费
    else
        pay = RATE * hours;     //无加班费，直接输出基本薪酬
    
    printf("应付工资:%f", pay);  //打印
    
    return 0;
}