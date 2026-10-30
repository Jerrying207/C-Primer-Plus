#include <stdio.h>
#include <stdlib.h>
#define BUFFER_SIZE 4096 
int main(int argc, char *argv[])
{
    FILE *source_fp, *target_fp;
    char buffer[BUFFER_SIZE];
    size_t bytes_read;
    if (argc != 3) 
    {
        exit(EXIT_FAILURE);
    }
    if ((source_fp = fopen(argv[1], "rb")) == NULL) 
    {
        fprintf(stderr, "无法打开源文件 %s\n", argv[1]);
        exit(EXIT_FAILURE);
    }
    if ((target_fp = fopen(argv[2], "wb")) == NULL) 
    {
        fprintf(stderr, "无法创建/打开目标文件 %s\n", argv[2]);
        fclose(source_fp); //关闭已经打开的源文件
        exit(EXIT_FAILURE);
    }
    while ((bytes_read = fread(buffer, 1, BUFFER_SIZE, source_fp)) > 0)
    {
        // 将读取到的字节写入目标文件
        if (fwrite(buffer, 1, bytes_read, target_fp) != bytes_read) 
        {
            fprintf(stderr,"写入文件错误\n");
            fclose(source_fp);
            fclose(target_fp);
            exit(EXIT_FAILURE);
        }
    }
    if (ferror(source_fp)) 
    {
        fprintf(stderr,"读取文件错误\n");
    } 
    else
    {
        printf("文件拷贝成功: %s -> %s\n", argv[1], argv[2]);
    }
    if (fclose(source_fp) != 0 || fclose(target_fp) != 0) 
    {
        fprintf(stderr, "关闭文件时发生错误\n");
    }
    return 0;
}
//gcc 2.c -o mycopy
//echo "这是测试内容" > source.txt
//./mycopy source.txt target.txt