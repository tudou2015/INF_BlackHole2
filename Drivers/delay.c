#include "delay.h"
	 
/*
 * ��������Delay_Us
 * ����  ��΢�����ʱ����
 * ����  ��time����ʱʱ�䣬��λ��us
 * ���  ����
 */  	 
void Delay_Us(u16 us)
{    
   u16 i=0;  
   while(us--)
   {
      i=10;  
      while(i--) ;    
   }
}

/*
 * ��������Delay_Ms
 * ����  ��������ʱ����
 * ����  ��time����ʱʱ�䣬��λ��ms
 * ���  ����
 */  
void Delay_Ms(u16 ms)
{    
   u16 i=0;  
   while(ms--)
   {
      i=12000;
      while(i--) ;    
   }
}


































