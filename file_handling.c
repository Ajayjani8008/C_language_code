#include <stdio.h>
#include <conio.h>
/*int main()
{
    FILE *fp;
    int n = 0;
    printf("Enter size of string::");
    scanf("%d", &n);
    char str[n];
    fp = fopen("D:\\AJAYJANI\\1st.txt", "a");
    if (fp == NULL)
    {
        printf("could not creat file");
    }
    printf("Enter a string:");
    fflush(stdin);
    gets(str);
    fputs(str, fp);
    fclose(fp);
    return 0;
}*/
/*int main()
{
    FILE *fp;
    char text[3000];
    fp =fopen("D:\\AJAYJANI\\1st.txt","r");
    puts(fgets(text,1000,fp));
    fclose(fp);
    return 0;

}*/
/*int main()
{
    FILE *fp;
    int rollno[3];
    char name[5][10];
    double marks[5];
    int i;
    printf("Enter student detail:\n");
    for (i = 0; i < 5; i++)
    {
        scanf("%d %s %lf", &rollno[i], &name[i], &marks[i]);
    }
    fp = fopen("D:\\AJAYJANI\\2nd.txt", "w");

    if (fp == NULL)
    {
        printf("file is not creat");
    }
    for (i = 0; i < 5; i++)
    {
        fprintf(fp, "%d \t %s\t %lf\n", rollno[i], name[i], marks[i]);
    }
    fclose(fp);
    return 0;
}*/
/*int main()
{
    FILE *fp;
    int rollno;
    char name[5], buff[1000];
    double marks;
    fp = fopen("D:\\AJAYJANI\\2nd.txt", "r");
    while (fscanf(fp, "%s", buff) != EOF)
    {
        printf("%s\t", buff);
    }
    fclose(fp);
    return 0;
}*/
/*int main()
{
    FILE *fp;
    int length;
    fp=fopen("D:\\AJAYJANI\\2nd.txt","r");
    fseek(fp,10,SEEK_SET);
    length=ftell(fp);
    fclose(fp);
    printf("Size of file %d bytes",length);
    return 0;

}
*/
/*int main()
{

    FILE *fp;
    fp = fopen("d:\\AJAYJANI\\3rd.txt", "w");
    fputs("this is world famuos IANT COmputer classes", fp);
    fseek(fp, 8, SEEK_SET);
    fputs("helloe go morning>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>", fp);
    fclose(fp);
    return 0;
}*/