#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);

    int cnt[125]={0};

    for(int i=0;i<n;i++)
    {
        char ch;
        scanf(" %c", &ch);
        cnt[(int)ch]++;
    }

    for(int i=97;i<=122;i++)
    {
        for(int j=0;j<cnt[i];j++)
        {
            printf("%c",(char)i);
        }
    }

    printf("\n");

    return 0;
}