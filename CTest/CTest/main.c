//
//  main.c
//  CTest
//
//  Created by nian on 18/2/23.
//  Copyright © 2018年 nian. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>
#include <math.h>

#define N 5 //宏定义

int main(int argc, const char * argv[]) {
//    double fact; //武器伤害
//    int strength; //玩家力量
//    double max = 256; //最大伤害
//    
//    printf("请输入力量：\n");
//    
//    //& 取地址的意思
//    scanf("%d",&strength);
//    
//    fact = 	max * (strength + 100) / 100;
//    printf("武器实际伤害是，%.2lf \n",fact);
//    
//    return 0;
    
    
//    int num = 2;
//    int result = num++;
//    printf("result %d \n",result);
//    return 0;
    
//    printf("5 > 6 %d \n",5 > 6);//0表示假，1表示真
//    printf("5 < 9 %d \n",5 < 9);
//    return 0;
    
//    printf("占的字节 %lu \n",sizeof(long long));
//    return 0;
    
//    switch (2)
//    {
//        case 0:
//            printf("0000 \n");
//            break;
//            
//        case 2:
//            printf("22222 \n");
//        case 3:
//            printf("3333 \n");
//        default:
//            printf("default \n");
//            break;
//    }
//    
//    return 0;
    
    
//    int i = 0;
//    while (i < 10) {
//        i++;
//        printf("打印几遍了 %d \n",i);
//    }
//    
//    return 0;
    
    
//    int i = 1;
//    int num ;
//    while (i<101) {
//        num += i;
//        i++;
//    }
//    printf("num is %d \n",num);
//    return 0;
    
    
//    int i = 0;
//    int password; //密码
//    
//       while (i < 3)
//    {
//        
//        printf("请输入密码！ \n");
//        scanf("%d",&password);
//        
//        if (123456 != password)
//        {
//            printf("密码输入错误，当前输入第 %d 次! \n",i+1);
//        }
//        
//        if (i == 2)
//        {
//            printf("密码输入3次错误，强制退出！\n");
//            
//        }
//        
//        i++;
//    }
//    
//    return 0;
    
//    //随机函数
//    //使用时间作为种子，产生不一样的随机数字
//    srand((unsigned)time(NULL));
////    printf("随机数字 %d \n",rand());
//    
//    int hp1 = 100,hp2 = 100;
//    int att1,att2;
//    
//    while (hp1 >= 0 && hp2 >= 0)//当2个玩家都活着的时候继续
//    {
//        //默认1p首先攻击
//        att1 = rand() % 11 + 5;
//        att2 = rand() % 11 + 5;
//        
//        //玩家 1 攻击，玩家 2 掉血
//        hp2 -= att1;
//        //玩家 2 攻击，玩家 1 掉血
//        hp1 -= att2;
//        
//        if (hp2 < 0)
//        {
//            printf("玩家 2 被 KO \n");
//            break;
//        }
//        
//        if (hp1 < 0)
//        {
//            printf("玩家 1 被 KO \n");
//            break;
//        }
//        
//        printf("****************************************** \n");
//        printf("玩家 1 攻击力为 %d，玩家 2 剩余血量 %d \n",att1,hp2);
//        printf("玩家 2 攻击力为 %d，玩家 1 剩余血量 %d \n",att2,hp1);
//        printf("****************************************** \n");
//    }
//    return 0;
    
    
    
//    //打印皇帝菜单
//    while (1)
//    {
//        
//        printf("性格测试：\n");
//        printf("如果您是一位君王，对于身旁的伴侣您希望？ \n");
//        printf("1. 只要有异味真爱的妻子 \n");
//        printf("2. 可以两位以上的爱人 \n");
//        printf("3. 拥有三千佳丽 \n");
//        
//        int choice;  //用户的选择
//        
//        do {
//            printf("请选择：");
//            scanf("%d",&choice);
//            
//            if (choice <= 0 || choice > 3) {
//                printf("只能输入 1-3 之间的数字！请重新输入：\n");
//            }
//        } while (choice <= 0 || choice > 3);//循环的条件
//        
//        switch (choice)
//        {
//            case 1:
//                printf("您选择了生命中唯一，然而我已看穿老一切 \n");
//                break;
//            case 2:
//                printf("言不由衷，非你所想 \n");
//                break;
//            case 3:
//                printf("赶紧醒醒吧兄弟！！！ \n");
//                break;
//            default:
//                break;
//        }
//    }
//    return 0;
    
    
    
//    //取出每位的数
//    int num = 671237834;
//    printf("个位： %d \n",num % 10);
//    printf("十位： %d \n",num /10 % 10);
//    printf("百位： %d \n",num /100 % 10);
//    printf("千位： %d \n",num /1000 % 10);
//    
//    while (num > 0)
//    {
//        printf("%d \n",num % 10);
//        num /= 10;
//    }
//    
//    return 0;
    
//    const int N = 10;
//
//    
//    for (int i=0; i < N; i++) {
//        printf("打印 %d ",i);
//        if (i % 2 == 0)
//        {
//            printf("\t");
//        }else{
//           printf("\n");
//        }
//       
//    }
//    
//    return 0;

    
//    char sex;
////    sex  = getchar();
////    fflush(stdin);
//    for (; ; ) {
//        printf("in sex: \n");
//        
//        sex  = getchar();
//        fflush(stdin);
//        printf("sex is %c \n",sex);
//    }
//    return 0;
    
    
//    int sum;
//    for (int i = 0; i<100; i+=2)
//    {
//        sum += i;
//    }
//    return 0;
    
    
    /*
     ###*###
     ##***##
     #*****#
     *******
     #*****#
     ##***##
     ###*###
     
     i     j
     0     0
     1     2
     2     4
     3     6
     
     
     */
    
    
//    int i,j;
//    for (i = 0; i < 4 ; i++)//控制行数
//    {
//        for (j = 0; j <= 2 - i; j++)
//        {
//            printf(" ");
//        }
//        
//        for (j = 0 ; j <= i * 2 ; j++)//控制每行数目(控制列数)
//        {
//            printf("%c",'*');
//        }
//        printf("\n");
//    }
//    
//    for (i = 0; i < 3; i++)
//    {
//        for (j = 0; j <= i; j++) {
//            printf(" ");
//        }
//        
//        for (j = 0; j < 5 - i * 2; j++) {
//            printf("*");
//        }
//        printf("\n");
//    }
//    return 0;
    
    
//    //动态录入
//    double score[N];
//    int i; //循环变量
//    for (i = 0 ; i < N; i++)
//    {
//        printf("请输入第%d位同学的成绩： \n",i+1);
//        scanf("%lf",&score[i]);
//    }
//    
//    for (i = 0; i < N; i++)
//    {
//        printf("第%d位同学的成绩是%.2lf \n",i+1,score[i]);
//    }
//    
//    return 0;
    

//    //冒泡排序
//    //基础原理：遍历和交换
//    //1.需要比较多轮（数组长度 － 1）
//    //2.每一轮比较的次数比上一轮 －1 次
//    int nums[] = {16,25,9,90,23};
//    int i;
//    int j;
//    int length = sizeof(nums) / sizeof(0);
//    int temp;//用于交换的临时变量
//    
//    for (i = 0; i < length-1; i++)//外层循环控制 轮数
//    {
//        for (j = 0; j < length - i - 1;j++)//内层循环控制 每轮的比较次数
//        {
//            if(nums[j] < nums[j+1])
//            {
//                temp = nums[j];
//                nums[j] = nums[j+1];
//                nums[j+1] = temp;
//            }
//        }
//    }
//    
//    printf("排序后：\n");
//    
//    for (i = 0; i < length; i++)
//    {
//        printf("%d \t",nums[i]);
//    }
//    
//    printf("\n");
//    
//    return 0;
    
    
    
//    /*
//     删除的逻辑
//     1. 查找要删除的下标
//     2. 从下标开始，后面一个覆盖前面一个数字
//     3. 数组的总长度 －1
//     */
//    
//    double powers[] = {42322,45771,40907,41234,40767};
//    int length = sizeof(powers) / sizeof(powers[0]);
//    double deletPower;
//    int deleteIndex = -1;
//    int i;
//    printf("请输入要删除的战力值：");
//    scanf("%lf",&deletPower);
//    
//    for (i = 0; i < length; i++)
//    {
//        if (deletPower == powers[i])
//        {
//            deleteIndex = i;
//            break;
//        }
//    }
//    
//    if (-1 == deleteIndex)
//    {
//        printf("没有找到值 \n");
//    }else
//    {
//        
//        for (i = deleteIndex; i < length - 1; i++)
//        {
//            powers[i] = powers[i+1];
//        }
//        
//        length--;
//        
//        printf("删除后的结果 \n");
//        
//        for (i = 0; i < length; i++)
//        {
//            printf("%.2lf \t",powers[i]);
//        }
//        printf("\n");
//        
//    }
//    
//    return 0;
    
    
//    int nums [4][3] = {
//        {2,3,4},
//        {0,9,6},
//        {8,6,5},
//        {18,16,15}
//    };
//    
//    printf("行数 \t");
//    printf("%lu \n",sizeof(nums) / sizeof(nums[0]));
//    
//    printf("列数 \t");
//    printf("%lu \n",sizeof(nums[0]) / sizeof(nums[0][0]));
//   
//    return 0;
    
    
//    int num = 9;
//    int * ptr_num = &num;
//    
//    printf("%x \n",(unsigned)ptr_num);//%x 表示16进制的占位符
//    printf("%p \n",ptr_num);//%p 表示指针变量的地址
//    printf("num的之前值为：%d \n",num);
//    *ptr_num = 109;
//    printf("num的之后值为：%d \n",num);
//    printf("*ptr_num对应的值为：%d \n",*ptr_num);
//    
//    printf("指针的地址 %p \n",&ptr_num);
//    
//    return 0;

    
//    
//    int num1 = 1024;
//    int num2 = 2048;
//    
//    int * ptr1;
//    int * ptr2;
//    ptr1 = &num1;
//    ptr2 = &num2;
//    
//    printf("num1的值是%d\t地址为%p \n",num1,ptr1);
//    printf("num2的值是%d\t地址为%p \n",num2,ptr2);
//    
////    num2 = num1;//*ptr2 = *ptr1;
//    ptr2 = ptr1;
//    
//    printf("num1的值是%d\t地址为%p \n",num1,ptr1);
//    printf("num2的值是%d\t地址为%p \n",num2,ptr2);
//    
//    *ptr2 = 3048;
//    printf("num1的值是%d\t地址为%p \n",num1,ptr1);
//    printf("num2的值是%d\t地址为%p \n",num2,ptr2);
//
//    return 0;
    
//    double score[] = {223.3,65,98,9.6,45.6};
//    double * ptr_score = score;
//    printf("数组的首地址：%p\t数组首元素的地址：%p \n",score,&score[0]);
//    int i;
//    for (i =0; i<5; i++) {
////        printf("%.2lf \n",ptr_score[i]);//这种方法不能体现学习指针
//        printf("%.2lf \n",*(ptr_score+i));//推荐这种方法
//        printf("地址：%p ,\t %p\n",ptr_score + i,score + i);
////        printf("%.2lf \n",*ptr_score++);//不推荐这种方法，因为ptr_score变化了
//    }
//    
//    return 0;
    
    
//    int i,j;
//    
//    double score [5][3] = {
//        {6.3,9.4,9},
//        {89,78,14},
//        {41,25,63},
//        {1,5,7},
//        {6,9,3}
//    };
//    
//    printf("地址：%p \n",score);
//    
//    for (i =0; i<5; i++)
//    {
//        for (j = 0; j<3; j++) {
//            printf("地址：：%p \t",&score[i][j]);
////            printf("数据：：%.2lf \n",score[i][j]);
//            printf("数据：：%.2lf \n",*(*(score +i)+j));
//        }
//       
//    }
//    
//    int * ptr_num = NULL;
//    printf("ptr_num 地址 %p \n",ptr_num);
//    
//    return 0;
    
    
//    //内置函数
////    isupper（);//是否为大写
//    printf("是否大写 %d \n",isupper('a'));
//    printf("是否小写 %d \n",islower('b'));
//    printf("是否为字母 %d \n",isalpha(97));
//    printf("是否为数字 %d \n",isdigit(50));
//    printf("转换大小写:%c \n",toupper('a'));
//    
//    /*
//     数字转换成中文大写
//     */
//    int money,count = 0;
//    int i = 0;
//    int moneys[6];//默认支持6位数字
//    char unit[10][4] = {"零","壹","貮","叁","肆","伍","陆","柒","捌","玖"};
//    printf("请输入金额:");
//    scanf("%d",&money);
//    while (money != 0)
//    {
//        moneys[i] = money % 10;
//        money /= 10;
//        i++;
//        count++;
//    }
//    printf("用户输入的数字一共的有%d位 \n",count);
//    printf("数组中的内容\n");
//    
//    for (i = 0; i < count; i++) {
//        printf("%d - %s \n",moneys[i],unit[moneys[i]]);
//    }
//    
//    //打印所有的 ascii 码对应的字符
//    for (i=0; i<127; i++) {
//        printf("%c",i);
//    }
//    printf("\n");
//    return 0;
    
//    printf("ceil %.2lf \n",ceil(-98.2));//进一法
//    printf("floor %.2lf \n",floor(-87.9));//去尾法
//    printf("平方根 %.2lf \n",sqrt(9));
//    printf("第一个数字的第二个数字次幂 %.2lf \n",pow(5,2));
//    printf("绝对值 %d \n",abs(-32));
//    return 0;

    
//    //随机数
//    srand((unsigned)time(NULL));
//    int num = rand();
//    printf("%d \n",num);
//
//    exit(0);//0-正常退出应用程序
//    return 0;
    
//    printf("这里是普通文字，非常普通！ \n");
//    system("color 4E");//终端命令其中 4 为背景色，E为文字颜色（前景色）
//    system("pause");//Windows系统
//    system("cls");//Windows系统
//    
//    return 0;
    
    
    
    return 0;
}
