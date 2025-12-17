#include "stm32f10x.h"                  // Device header
#include "Delay.h"
#include "OLED.h"
#include "Motor.h"
#include "Key.h"

uint8_t KeyNum;		//定义用于接收按键键码的变量
int8_t Speed;		//定义速度变量

int main(void)
{
	/*模块初始化*/
	// OLED_Init();
	Motor_Init();		//直流电机初始化
	Key_Init();			//按键初始化
	
	/*显示静态字符串*/
	// OLED_ShowString(1, 1, "Speed:");		//1行1列显示字符串Speed:
	
	while (1)
	{
		
	}
}
