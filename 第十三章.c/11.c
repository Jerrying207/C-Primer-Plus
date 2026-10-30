#include <stdio.h>
#include <stdlib.h>
#include <string.h> 
#define MAX_LINE 256 
int main(int argc, char *argv[])
{
    FILE *fp;
    char line[MAX_LINE];
    if (argc != 3) {
        exit(EXIT_FAILURE);
    }
    if ((fp = fopen(argv[2], "r")) == NULL) 
    {
        fprintf(stderr, "无法打开文件 %s\n", argv[2]);
        exit(EXIT_FAILURE);
    }

    while (fgets(line, MAX_LINE, fp) != NULL)
    {
        if (strstr(line, argv[1]) != NULL)
        {
            fputs(line, stdout);
        }
    }
    fclose(fp);
    return 0;
}
//gcc find_11.c -o find_str
//echo -e "apple is red\nbanana is yellow\norange is orange\nI like apple pie." > test.txt
//./find_str apple test.txt