/****************************************************************************

    test_led.c - ���� �������� ����������������� ������
                 ��� �������� ������ SDK-1.1

    (C) test_led.c, ������ �.�.  2007 �.

��� ��������� ���������; �� ������ �������� �������������� �� �/���
�������������� �� � ������������ � ������������� ������������
��������� GNU, �������������� ������ ���������� ��; ���� ������ 2,
���� (�� ������ ������) ����� ����� ������� ������.

��� ��������� ���������������� � �������, ��� ��� ����� ��������,
�� ��� �����-���� ��������; ���� ��� ��������������� ��������
������������ �������� ��� ����������� ��� ���������� ����.  ���
��������� ��������� �������� �������� ������������� ������������
�������� GNU.

�� ������ ���� �������� ����� ������������� ������������ ��������
GNU ������ � ���� ����������; ���� ���, �������� �� ������: Free
Software Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA
02111-1307 USA

----------------------------------------------------------------------------
������, �����-���������, ������� �������������� ������� ���������  
e-mail: kluchev@d1.ifmo.ru

****************************************************************************/
#include "aduc812.h"
#include "led.h"
#include "max.h"

// �������� �� �������� ���������� ��
void delay ( unsigned long ms )
{
volatile unsigned long i, j;

    for( j = 0; j < ms; j++ )
    {
        for( i = 0; i < 50; i++ );
    }

}
void first_animation(){
	int i = 0;
	unsigned char leds_reg = 0xC0;
	while(1){
		if(read_max(EXT_LO) != 0x33){
			return;
		}else{
			leds(leds_reg);
			if(i < 6){
				leds_reg >>= 1;
				i++;
			}else if(i < 13){
				leds_reg <<= 1;
				i++;
			}else if (i > 13){
				i = 0;
				leds_reg = 0xC0;
			}
			delay(300);
		}
	}
}
void second_animation(){
	int i = 0;
	unsigned char leds_reg = 0x01;
	while(1){
	if(read_max(EXT_LO) != 0xCC){
		return;
	}else{
		leds(leds_reg);
		if(i < 7){
			leds_reg >>= 1;
		}else if (i < 13){
			leds_reg <<= 1;
		}else if(i > 13){
			i = 0;
			leds_reg = 0x01;
		}
		delay(300);
	}
	}
}

void main( void ){
unsigned char dip_reg;
	while(1){
		dip_reg = read_max(EXT_LO);
		if(dip_reg == 0x33){
			first_animation();
		}else if(dip_reg == 0xCC){
			second_animation();
		}else{
			leds(dip_reg);
		}
	}
}    
