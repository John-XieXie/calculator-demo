#include <stdio.h>
#include <malloc.h>
#include <math.h>

typedef long long int64;

// 返回值结构体
typedef enum Status {
    ERROR       = 0,
    SUCCESS     = 1
} Status;

// 栈节点结构体
typedef  struct StackNodeS
{
    double      data;
    char        cData;
    char        align[7];
    struct StackNodeS *next;
} StackNodeT, *LinkStackTPtr;

// 链栈
typedef  struct LinkStackS{
    LinkStackTPtr   top;
    int64           count;
} LinkStackT;

Status initLStack(LinkStackT *s);//初始化栈
Status destroyLStack(LinkStackT *s);//销毁栈

Status isEmptyLStack(LinkStackT *s);//判断栈是否为空
double getTopLStackint(LinkStackT *s);//得到栈顶元素
char getTopLStackchar(LinkStackT *s);//得到栈顶元素

Status pushLStackdouble(LinkStackT *s, double data);//入栈
Status pushLStackchar(LinkStackT *s, char data);//入栈
Status popLStackdouble(LinkStackT *s, double *data);//出栈
Status popLStackchar(LinkStackT *s, char *data);//出栈

Status checkString(char s[]); //检查字符串的正确
Status convertString(char s1[], char s2[], LinkStackT *s); //将中缀表达式转化为后缀表达式
int judgePriority(char a, char b);// 判断符号优先级
double computeString(LinkStackT *s1, char s[]);// 计算结果

