#include <stdio.h>

#include<string.h>

int main() {int i,j,k=-1,l; char a[30];

scanf("%[^\n]s",a);//enter a string

l=strlen(a);

for(i=0;i<2*l;i++){

    (i<l?k++:k--);

    for(j=0;j<=k;j++)

    printf("%c ",a[j]);

    for(j=0;j<2*(l-k-1)-1;j++)

    printf("  ");

    for(j=k;j>=0;j--){if(j==l-1)j--;

    printf("%c ",a[j]);}

    printf("\n");

}

    return 0;

}
