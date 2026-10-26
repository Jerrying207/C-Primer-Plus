 #include<stdio.h>
 #include<ctype.h>
 int main()
 {
    int ch;
    int word=0;
    int letter=0;
    int mark=0;
    while((ch=getchar())!=EOF)
    {
        if(isalpha(ch))
        {
            letter++;
            mark=1;//在单词里
        }
        else{
            if(mark==1)//如果在单词里遇到非字母，说明单词结束了
            {
                word++;
                mark=0;//重置单词
            }
        }
    }
    if(mark==1)//最后以单词结尾，读不到标志结束的非字母字符，但我们要自己记得给单词数+1
    {
        word++;
    }
    printf("总字母数%d\n",letter);
    printf("总单词数:%d\n",word);
    printf("平均每个单词的字母数%lf",letter*1.0/word);
    return 0;
 }