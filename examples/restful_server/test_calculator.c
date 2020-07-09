#include "calculator.h"

/**
 * 输入运算表达式
 */
void inputString(char s[])
{
    int i=0;
    printf("请输入表达式:");
    scanf("%s", s);
    getchar();
    while(1)
    {
        if ((s[i] < '0' || s[i] > '9') &&
            (s[i] != '+' && s[i] != '-' && s[i] != '*' && s[i] != '/' && s[i] != '.' && s[i] != '(' && s[i] != ')'))
        {
            printf("请输入正确的表达式！");
            scanf("%s", s);
            i = 0;
        }
        else
        {
            i++;
        }
        if (s[i] == '\0')
            break;
    }
}

int main()
{
    char aExpression1[1024] = {0};
    char aExpression2[1024] = {0};

    LinkStackT *symbol = (LinkStackT *)malloc(sizeof(LinkStackT));
    LinkStackT *number = (LinkStackT *)malloc(sizeof(LinkStackT));
    initLStack(symbol);
    initLStack(number);

    inputString(aExpression1);
    checkString(aExpression1);
    convertString(aExpression1, aExpression2, symbol);
    double temp = computeString(number, aExpression2);
    printf("\n 结果为-->%.2lf\n", temp);

    destroyLStack(symbol);
    destroyLStack(number);
    free(symbol);
    free(number);

    system("pause");
    return 0;
}
