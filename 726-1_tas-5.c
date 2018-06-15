#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int key;
    int value;
    struct node *l;
    struct node *r;
} node;

typedef struct root
{
    node *top;
}root;

root *InicT(node *t)
{
    root *p = malloc(sizeof(root));
    p -> top = t;
    return p;
}

node *InicNode(int a, int b)
{
    node *p = malloc(sizeof(node));
    p -> key = a;
    p -> value = b;
    p -> l = NULL;
    p -> r = NULL;
    return p;
}

void Add(int a, int b, root *t)
{
    int pKey = t -> top -> key;
    node *p = t -> top;

    node *sch = malloc(sizeof(node));
    sch -> key = a;
    sch -> value = b;
    sch -> l = NULL;
    sch -> r = NULL;

    for (;;)
    {
        if (pKey > a)
        {
            if (p -> l == NULL)
            {
                p -> l = sch;
                break;
            }
            p = p -> l;
            pKey = p -> key;
            continue;
        }

        if (pKey < a)
        {
            if (p -> r == NULL)
            {
                p -> r = sch;
                break;
            }
            p = p -> r;
            pKey = p -> key;
        }
    }
}

void SearchNode(int a, root *t)
{
    int level = 0;
    int pKey = t -> top -> key;
    node *p = t -> top;

    for (;;)
    {
        if (pKey == a)
        {
            printf("%d ", level);
            printf("%d\n", p -> value);
            break;
        }

        if (pKey > a)
        {
            p = p -> l;
            if (p == NULL) {printf("%d\n", -1); break;}
            pKey = p -> key;
            level++;
            continue;
        }

        if (pKey < a)
        {
            p = p -> r;
            if (p == NULL) {printf("%d\n", -1); break;}
            pKey = p -> key;
            level++;
            continue;
        }
    }
}


int main()
{
    int num, a, b, c, i = 1;
    root *start = NULL;

    scanf("%d", &num);

    for (i; i <= num; i++)
    {
        scanf("%d %d", &a, &b);
        if (i == 1) start = InicT(InicNode(a,b));
        else
        {
            Add(a, b, start);
        }
    }

    scanf("%d %d %d", &a, &b, &c);

    SearchNode(a, start);
    SearchNode(b, start);
    SearchNode(c, start);

    return 0;
}

