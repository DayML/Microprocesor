.686
.model flat,stdcall 
 
.stack 100h 
 
.data 
 X dw ?
 Y dw ?
 Z dw ?
 M dw ?

.code 
ExitProcess PROTO STDCALL : DWORD
Start: 
  mov         eax,  [Z]  
  sub         eax,  [X]  
  sub         eax,  [Y]  
  cdq  
  sub         eax,edx  
  sar         eax,1  
  mov         ecx, [X]  
  and         ecx, [Y]  
  add         eax,ecx  
  mov         [M],eax  
exit: 
Invoke ExitProcess,M 
End Start 