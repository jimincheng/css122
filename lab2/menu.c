#include<stdio.h>
#include<string.h>

void help()
{
    printf("This is a menu.There are some institution.You can input 'help','version','upper','lower','add','sub','mult'\n");
}

void version()
{
    printf("V-1.0\n");
}

void upper()
{
    printf("请输入一个字符\n");
    char str;
    scanf("%c",&str);
    if('a'<=str<='z')
        printf("The upper of %c is %c\n",str,str-32);
    else printf("输入错误！\n");
}

void lower()
{
    printf("请输入一个字符\n");
    char str;
    scanf("%c",&str);
    if('A'<=str<='Z')
        printf("The lower of %c is %c\n",str,str+32);
    else printf("输入错误\n！");
}


void add()
{
    printf("请输入两个数字\n");
    float a,b;
    scanf("%f %f",&a,&b);
    printf("The sum of %.3f and %.3f is %.3f\n",a,b,a+b);
}

void sub()
{
    printf("请输入两个数字\n");
    float a,b;
    scanf("%f %f",&a,&b);
    printf("The sub of %.3f and %.3f is %.3f\n",a,b,a-b);
}

void mult()
{
    printf("请输入两个数字\n");
    float a,b;
    scanf("%f %f",&a,&b);
    printf("The mul of %.3f and %.3f is %.3f\n",a,b,a*b);
}

int main()
{
    while(1)
    {
        printf("----------menu----------\n");
        char str[8];
        printf("请输入指令：");
        gets(str);
        if(strcmp(str,"help")==0)
            help();
        else if(strcmp(str,"version")==0)
            version();
        else if(strcmp(str,"upper")==0)
            upper();
        else if(strcmp(str,"lower")==0)
            lower();
        else if(strcmp(str,"add")==0)
            add();
        else if(strcmp(str,"sub")==0)
            sub();
        else if(strcmp(str,"mult")==0)
            mult();
        else if(strcmp(str,"quit")==0)
            break;
    }
    printf("感谢使用！");
}
