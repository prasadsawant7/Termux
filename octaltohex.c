#include <stdio.h>  

#include<string.h>  

int main()  

{  

  int octaltobinary[]={0,1,10,11,100,101,110,111};  

  char hexadecimal[10];  

   char hex[10];  

  long int binary=0;  

  int octal;  

  int rem=0;  

  int position=1;  

  int len=0;  

   int k=0;  

  printf("Enter a octal number");  

  scanf("%d",&octal);  

// Converting octal number into a binary number.    

while(octal!=0)  

  {  

      rem=octal%10;  

      binary=octaltobinary[rem]*position+binary;  

      octal=octal/10;  

      position=position*1000;  

  }  

  printf("The binary number is : %ld",binary);  

    

  // Converting binary number into a hexadecimal number.  

  while(binary > 0)  

    {  

        rem = binary % 10000;  

        switch(rem)  

        {  

            case 0:  

                strcat(hexadecimal, "0");  

                break;  

            case 1:  

                strcat(hexadecimal, "1");  

                break;  

            case 10:  

                strcat(hexadecimal, "2");  

                break;  

            case 11:  

                strcat(hexadecimal, "3");  

                break;  

            case 100:  

                strcat(hexadecimal, "4");  

                break;  

            case 101:  

                strcat(hexadecimal, "5");  

                break;  

            case 110:  

                strcat(hexadecimal, "6");  

                break;  

            case 111:  

                strcat(hexadecimal, "7");  

                break;  

            case 1000:  

                strcat(hexadecimal, "8");  

                break;  

            case 1001:  

                strcat(hexadecimal, "9");  

                break;  

            case 1010:  

                strcat(hexadecimal, "A");  

                break;  

            case 1011:  

                strcat(hexadecimal, "B");  

                break;  

            case 1100:  

                strcat(hexadecimal, "C");  

                break;  

            case 1101:  

                strcat(hexadecimal, "D");  

                break;  

            case 1110:  

                strcat(hexadecimal, "E");  

                break;  

            case 1111:  

                strcat(hexadecimal, "F");  

            break;  

        }  

len=len+1;  

        binary /= 10000;  

    }  

  for(int i=len-1;i>=0;i--)  

{  

    hex[k]=hexadecimal[i];  

    k++;  

}  

hex[len]='\0';  

printf("\nThe hexadecimal number is :");  

for(int i=0; hex[i]!='\0';i++)  

{  

    printf("%c",hex[i]);  

}  

  

    return 0;  

} 
