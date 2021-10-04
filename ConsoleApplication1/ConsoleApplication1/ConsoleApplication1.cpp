重点
//要想打出
//%d--打印整形
//%c--打印字符
//%f--打印浮点（小数）
//%p--以地址的形式打印
//%x--打印16进制数字
1.
#include <stdio.h>
int main()
{
    printf("你宋哥正在学习代码\n");
    return 0;
}



2.
#include <stdio.h>
int main()
{
    char a = 'A';//char--字符类型  int---整形类型 float--单精度浮点型  double--双精度
    printf("%c\n", a);//%c---打印字符形式的数据比如abcdABCD
    return 0;
}

3.
#include <stdio.h>
int main()
{
    int age = 18;
    printf("%d\n", age);//%d---打印整形十进制数据
    return 0;
}


4.
#include <stdio.h>
int main()
{
    float a, b, c;
    a = 3.24;
    b = 5.26;
    c = a + b;
    printf("经过许久的计算答案为：%.1f\n", c);//%.1f---小数点后保留一位 %.2f--小数点后两位
    return 0;
}

5.#include<stdio.h>
int main()
{
    int r;
    float s, l;
    printf("在这里打上你的半径");
    scanf("%d", &r);//scanf后面加变量的话，变量前面要加&
    s = 3.14 * r * r;
    l = 2 * 3.14 * r;
    printf("圆的面积为=%.4f 圆的周长为=%.4f\n", s, l);
    return 0;
}

6.
#include <stdio.h>
int a = 10;//全局变量--定义在代码块（{}）之外的变量
int main()
{
    int a = 100;//局部变量--定义在代码块之内的变量
    //局部变量和全局变量的名字建议不要相同--容易误会产生bug
    //当局部变量和全局变量的名字相同时，局部变量优先
    printf("%d", a);
    return 0;
}

7.#include <stdio.h>
int main()
{
    int num1, num2;
    scanf("%d%d", &num1, &num2);//取地址符号&
    printf("牛逼的是%d 666的是%d", num1, num2);
    return 0;
}

8.
#include <stdio.h>
int main()
{
    int num1, num2;
    num1 = num2 = 4;
    int sum;
    sum = num1 + num2;
    printf("%d\n", sum);
    return 0;
}

9.
#include <stdio.h>
int main()
{
    printf("* * * *\n * * *\n  * *\n   *");
    return 0;
}

10.
#include <stdio.h>
int main()
{
    int a, b;
    scanf("%d%d\n", &a, &b);
    printf("%d %d\n", a, b);
    return 0;
}

11.
#include <stdio.h>
int main()
{
    int a, b, c;
    scanf("%d%d", &a, &b);
    c = a + b;
    printf("%d+%d=%d\n", a, b, c);
    c = a - b;
    printf("%d-%d=%d\n", a, b, c);
    c = a * b;
    printf("%d*%d=%d\n", a, b, c);
    c = a / b;
    printf("%d/%d=%d\n", a, b, c);
    c = a % b;
    printf("%d%%%d=%d\n", a, b, c);
}

12.
#include <stdio.h>
#include <math.h>//sprt为求根号，需要用到这个头文件
int main()
{
    int a, b, c;
    float p, s;
    scanf("%d%d%d", &a, &b, &c);
    p = (a + b + c) / 2;
    s = p * (p - a) * (p - b) * (p - c);
    s = sqrt(s);//注意看这里
    printf("%.2f", s);
    return 0;
}
13.
#include <stdio.h>
int main()
{
    int a, b;
    scanf("%d%d", &a, &b);
    printf("%d+%d=%d\n%d-%d=%d\n%d*%d=%d\n%d/%d=%d", a, b, a + b, a, b, a - b, a, b, a * b, a, b, a / b);
    return 0;
}

14.
#include <stdio.h>
int main()
{
    const int a;//const----常属性，将变量a变为常变量
    printf("%d\n", a);//a是变量，但又有常属性，所以我们说n是常变量
    return 0;
}
15.
#include <stdio.h>
int main()
#define PI 3.1415//定义宏常量PI
{
    double r;
    scanf("%lf", &r);//用%lf指定输入的字符为双精度字符
    printf("面积%f\n周长%f", PI * r * r, 2 * PI * r);
    return 0;
}
16.
#include <stdio.h>
int main()
{

    char a;
    a = getchar();//从键盘输入一个字符
    a = a + 32;//将大写字母变成小写字母
    putchar(a);
    putchar('\n');//此处必须是单引号，否则将会不运行\n
    return 0;
}
17.
#include <stdio.h>
int main()
{
    char arr1[] = "abc";//数组
    printf("%s\n", arr1);//%s输出字符串
    return 0;
}


19.
#include <stdio.h>
int main()
{

    char name[40];//name是一个40个字符的数组
    scanf("%s", name);//此处不用加&    
    printf("%s", name);
    return 0;
}
20.
#include <stdio.h>
int main()
{

    char a;
    scanf("%c", &a);
    a = a + 32;
    printf("%c\n", a);
    return 0;
}
21.
#include <stdio.h>
int main()
{

    int a, b;
    scanf("%d%*c%d", &a, &b);//%*c:读入一个字符，但忽视它，以实现让用户用任意字符来隔开两个数字，可以是空格，也可以是其他字符
    printf("a=%d,b=%d", a, b);
    return 0;
}
22.
#include <stdio.h>
int main()
{

    int a, b;
    scanf("%2d%*2d%2d", &a, &b);//%*2d意味忽视两个整型
    printf("a=%d,b=%d", a, b);
    return 0;
}
23.
#include<stdio.h>
int main()
{
    int a;
    char b;
    float c;
    printf("Please input an integer:");
    scanf("%d", &a);
    printf("integer: %d\n", a);
    printf("Please input a character:");
    //getchar();//修改方法1,通过这个输入函数来将回车键给避免掉
    scanf("%c", &b);
    //scanf(" %c",&b);解决方法2，在%c前面加一个空格
    printf("character: %c\n", b);
    printf("Please input a float number:");
    scanf("%f", &c);
    printf("float: %f\n", c);
    return 0;
}//此代码十分经典，%c的常见错误之一，当我敲下回车的时候，被当作一个字符了

24.
#include<stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    printf("x=%d,x=%o,x=%x", a, a, a);//%o输出八进制，%x输出十六进制
    return 0;
}
25.
#include<stdio.h>
int main()
{
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    printf("中国式写法为：%d/%d/%d\n", a, b, c);
    printf("英国式写法为：%d/%d/%d\n", c, b, a);
    printf("美国式写法为：%d/%d/%d\n", b, c, a);
    return 0;
}
26.#include<stdio.h>
int main()
{
    char a;
    a = getchar();
    printf("%c", a);
    return 0;
}
27.
#include<stdio.h>
int main()
{
    char a;
    scanf("%c", &a);
    printf("%d", a);
    return 0;
}
28.
输入2.12 88 c 4.7 浮点 整型 字符 浮点
结果c 88 2.12 4.70字符 整型 浮点 浮点
#include<stdio.h>
int main()
{
    int a;
    float b, c;
    char d;
    scanf("%f%d %c%f", &b, &a, &d, &c);//注意这里%d和%c之间有个空格，十分重要
    printf("%c %d %.2f %.2f", d, a, b, c);
    return 0;
}

29.
#include <stdio.h>
int main()
{

    float s, v, m, c;
    float a, b;
    scanf("%f%f%f%f", &s, &v, &m, &c);
    a = s / v;
    b = s / m * c;
    printf("%.1f %.1f", a, b);
    return 0;
}
30.
#include <stdio.h>
int main()
{

    float s, v;
    float a, t;
    scanf("%f%f", &v, &s);
    v = v / 3.6;//要是定义v为整型，此处不对
    t = (2 * s) / v;
    a = v / t;
    printf("%.2f\n", a);
    return 0;
}
31.
#include<stdio.h>
#include<math.h>
int main()
{
    float capital, rate, n, deposit;
    rate = 0.0225;
    scanf("%f%f", &capital, &n);
    deposit = pow(1 + rate, n);
    deposit = deposit * capital;
    printf("%f\n", deposit);
    return 0;
}
32.
#include<stdio.h>
int main()
{
    int n, y, r;
    long x;
    n = 2011;
    y = 1;
    r = 1;
    scanf("%ld", &x);
    n = n + x / 31104000;
    y = x % 31104000 / 2592000 + y;
    r = x % 2592000 / 86400 + r;
    printf("%d %d %d", n, y, r);
    return 0;
}
33.#include<stdio.h>
int main()
{
    int a, b, c, d, e, f, g, h;
    scanf("%d%d%d", &a, &b, &c);

    if (a % c > 0)
        d = a / c + 1;
    else
        d = a / c;

    if (b % c > 0)
        e = b / c + 1;
    else
        e = b / c;
    f = d * e;
    printf("%d", f);
    return 0;
}
34.
#include<stdio.h>
int main()
{
    int a, b, c, d, f;
    scanf("%d%d%d", &a, &b, &c);
    d = (10 * a + 5 * b + c) / 10;
    f = (10 * a + 5 * b + c) % 10 * 10;
    printf("Dollars=%d\nChange=%d", d, f);
    return 0;
}
35.
#include<stdio.h>
int main()
{
    int n, y, r;
    long x;
    n = 2011;
    y = 1;
    r = 1;
    scanf("%ld", &x);
    n = n + x / 31104000;
    y = x % 31104000 / 2592000 + y;
    r = x % 2592000 / 86400 + r;
    printf("%d %d %d", n, y, r);
    return 0;
}
36.
#include <stdio.h>
int main()
{

    int a, b;
    int c, d, e, g;
    scanf("%d:%d %d:%d %d", &a, &b, &c, &d, &e);
    g = (c - a) * 60 + (d - b) + 20 * e;
    printf("%d", g);
    return 0;
}
37.
#include<stdio.h>
int main()
{
    int a, b, c, d, e, f, g, h;
    scanf("%d%d", &a, &b);
    c = a / 100;
    d = a % 100;
    e = b / 100;
    f = b % 100;
    g = e - c;
    h = f - d;
    if (g >= 10 && h >= 10)
    {
        printf("%d:%d", g, h);
    }
    else if (g >= 10 && (h < 10 && h >= 0))
    {
        printf("%d:0%d", g, f);
    }
    else if (g >= 10 && h < 0)
    {
        if (h + 60 >= 10)
        {
            printf("%d:%d", g - 1, h + 60);
        }
        else
        {
            printf("%d:0%d", g - 1, h + 60);
        }
    }
    else if (g < 10 && h >= 10)
    {
        printf("0%d:%d", g, h);
    }
    else if (g < 10 && (h < 10 && h >= 0))
    {
        printf("0%d:0%d", g, h);
    }
    else
    {
        if (h + 60 >= 10)
        {
            printf("0%d:%d", g - 1, h + 60);
        }
        else
        {
            printf("0%d:0%d", g - 1, h + 60);
        }
    }
    return 0;
}
38.
#include<stdio.h>
int main()
{
    int a, b, c, d, e, f, g, h;
    scanf("%d%d", &a, &b);
    c = a / 100;
    d = a % 100;
    e = b / 100;
    f = b % 100;
    g = e - c;
    h = f - d;
    if (h >= 0)
    {
        printf("%02d:%02d", g, h);
    }
    else
    {
        printf("%02d:%02d", g - 1, h + 60);
    }
    return 0;
}
39.
#include<stdio.h>
int main()
{

    int a;
    printf("please input a number:");
    scanf("%d", &a);
    switch (a)//此处不应该有分号
    {
    case 1:printf("Monday\n");
        break;
    case 2:printf("tuesday\n");
        break;
    case 3:printf("wednesday\n");
        break;
    case 4:printf("thursday\n");
        break;
    case 5:printf("friday\n");
        break;
    case 6:printf("saturday\n");
        break;
    case 7:printf("sunday\n");
        break;
    default:printf("error\n");
    }
    return 0;
}
