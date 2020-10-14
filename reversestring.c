#include <stdio.h>

#include <string.h>

int main()

{

    char in_str[1000];

    int len,i;

    printf("Say Something: ");

    scanf("%s", in_str);

    len = strlen(in_str);

    for(i=len-1;i>=0;i--)

    {

        printf("%c", in_str[i]);

    }

    return 0;

}
