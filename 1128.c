#include <stdio.h>
#include <string.h>

int main(void)
{
    int i;
    int is_upper, is_lower, is_digit;
    char password[30];

    while(1)
    {
        printf("��ȣ�� �����Ͻÿ�:");
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
            printf("������ ��ȣ�Դϴ�.\n");
            break;
        }
        else("����, �ҹ���, �빮�ڸ� ��� ��ȣ�� �ٽ� ���弼��.\n");
    }
    
    return 0;
}