#include <stdio.h>
#include <windows.h>
#define MAXSIZE 20

int main()
{
    char name[MAXSIZE];

    printf("请输入你的姓名：");
    scanf("%s", &name);

    printf("%s\n", name);

    system("pause");
    return 0;
}

            