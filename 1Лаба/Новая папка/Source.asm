.686
.model flat,stdcall 
 
.stack 100h 
 
.data 
 X dw 17
 Y dw 5
 Z dw 44
 M dw ?

.code 
ExitProcess PROTO STDCALL : DWORD
Start: 
  mov         ax, [Z]  
  sub         ax, [X]  
  sub         ax, [Y]  
  cdq
  sub         ax,dx  
  sar         ax,1  
  mov         cx, [X]  
  and         cx, [Y]  
  add         ax,cx  
  mov         [M],ax  
exit: 
Invoke ExitProcess, M
End Start 