#include <8051.h> 
void main()
 { 
unsigned char i,j;  
unsigned char massiv [11]= 
{ 
0xB0,
0xF8,
0x90,
0xF9,
0x82,
0xA4,
0x80,
0x99,
0x92,
0xFF
}; 
P1=massiv [10];  
for(i=0;i<10;i++) 
{ 
P2=massiv[i];  
for(j=0;j<100;j++) 
continue; 
} 
P2=massiv[10]; 
while(1);
 } 
