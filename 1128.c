#include <stdio.h>
#include <string.h>

int main(void)
{
    int i;
    int is_upper, is_lower, is_digit;
    char password[30];

    while(1)
    {
        printf("암호를 생성하시오:");
        gets(password);

        is_upper=is_lower=is_digit=0;
        for(i=0; i<strlen(password); i++)
        {
            if(password[i]>='0' && password[i]<='9')
                is_digit = 1;
            else if(password[i]>='A' && password[i]<='Z')
                is_upper = 1;
            else if(password[i]>='a' && password[i]<='z')
                is_lower = 1;
        }

        if(is_lower*is_upper*is_digit != 0)
        {
            printf("적정한 암호입니다.\n");
            break;
        }
        else("숫자, 소문자, 대문자를 섞어서 암호를 다시 만드세요.\n");
    }
    
    return 0;
}