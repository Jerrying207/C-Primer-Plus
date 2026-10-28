#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    int num;
    char **word;//指向指针的指针
    char t[100];//临时数组
    printf("How many words do you wish to enter?");
    scanf("%d",&num);
    word=(char**)malloc(num*sizeof(char*));//给二级指针分配内存
    if(word==NULL){
        printf("内存分配失败\n");
        return 1;
    }
    printf("Enter %d words.\n",num);
    for(int i=0;i<num;i++)
    {
        scanf("%s",t);
        int len=strlen(t);
        word[i]=(char*)malloc((len+1)*sizeof(char));
        if(word[i]==NULL){
            printf("内存分配失败。\n");
            return 1;
        }
        strcpy(word[i],t);//从临时拷贝进word[]；
    }
    printf("Here are your words:\n");
    for(int i=0;i<num;i++)
    {
        printf("%s\n",word[i]);
    }
    for(int i=0;i<num;i++)
    {
        free(word[i]);//单独释放每个单词的值
    }
    free(word);//释放数组指针本身
    return 0;
}
//深拷贝
//给每个单词单独找一块内存（分配堆内存），然后把临时数组里的字复制过去，这样每个word[i]都有自己的地质，互不干扰，t即使被覆盖了也不影响他们
//double free
//先释放给每个单词的内存，再释放指针数组本身。如果是浅拷贝（仅仅复制指针的值）的话，会崩溃，非法释放