#include <8051.h>
#include<string.h>
void main()
{
unsigned int i, k=0;
unsigned char *stp="Hello!";
unsigned char *str2="raed QQ";

P0 = 0x38;
P2 = 0x1;
P2 = 0x0;
P0 = 0x80;
P2 = 0x1;
P2 = 0x0;

/*for(i=0;i<8;i++){
P0=' ';
P2=0x3;
P2=0x2;
}

for(i=0;i<8;i++)
{ 
P0 = stp[i];
P2 = 0x3;
P2 = 0x2;
}*/


while (1){
P0 = 0xC0;
P2 = 0x1;
P2 = 0x0;


for(k=0;k<16;k++){
P0=str2[i-k-1];
P2=0x3;
P2=0x2;
}

if(16==i++)i=0;{
P0=0x01;
P2=0x01;
P2=0x0;
}
}
}
