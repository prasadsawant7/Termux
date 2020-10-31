#include <stdio.h>

int string_length(char s[])

{

   int i=0;

   while(s[i]!='\0')

      i++;

      

return i;   

}

int binary2decimal(char n[])

{

   int i,decimal,mul=0;

   for(decimal=0,i=string_length(n)-1;i>=0;--i,++mul)

      decimal+=(n[i]-48)*(1<<mul);

   return decimal;

}

void printHexDigit(int d)

{

        if(d<10) printf("%d",d);

   else if(d==10) printf("A");

   else if(d==11) printf("B");

   else if(d==12) printf("C");

   else if(d==13) printf("D");

   else if(d==14) printf("E");

   else if(d==15) printf("F");

}

int main()

{

   char n[] = "10101";

   char temp[5];

   int i,j,d;

   

   printf("Hexa equivalent of %s is : ", n);

   

   for(i=j=0;i<string_length(n)%4;++i,++j)

      temp[j]=n[i];

      temp[j]='\0';

      

   d=binary2decimal(temp);

   if(d!=0) printHexDigit(d);

   

   while(n[i]!='\0')

   {

      for(j=0;j<4;++i,++j)

         temp[j]=n[i];

         temp[j]='\0';

         

      d=binary2decimal(temp);

      printHexDigit(d);

   }

return 0;

}
