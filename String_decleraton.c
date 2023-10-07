#include<stdio.h>
#include<string.h>
int main(){
    // this is a decleratoin of string
    char ajay[]="ajay jani";
    char subject[]={'a','j','a','y',' ','j','a','n','i'};
    // now we print string value or data we given above
    printf("%s.....\n",ajay);
    printf("%s.....\n",subject);
    for (int i = 0; ajay[i]!='\0'; i++)
    {
        printf("%c",ajay[i]);
        
    }
    printf("\n");
    for (char *ptr = ajay; *ptr != '\0'; ptr++)
    {
        printf("%c",*ptr);
    }
    printf("\n");
    printf("%s\n",ajay);



    char firstname[20];
    char sirname[20];
    char lastname[20];
    printf("Enter  first name:\n");
    scanf("%s",firstname);
    printf("Enter  sirname:\n");
    scanf("%s",sirname);
    printf("Enter last name:\n");
    scanf("%s",lastname);
    printf("the name is:\n %s %s %s",sirname,firstname,lastname);

    
    return 0;
    
}