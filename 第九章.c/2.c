#include<stdio.h>
void chline(char ch,int i,int j)
{
    for(int n=0;n<i;n++)
    {
        for(int m=0;m<j;m++)
        {
            printf("%c",ch);
        }
        printf("\n");
    }
}
int main()
{
    char ch;
    int i,j;
    scanf(" %c",&ch);
    scanf("%d %d",&i,&j);
    chline(ch,i,j);
    return 0;
}