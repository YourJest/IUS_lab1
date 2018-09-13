/****************************************************************************

    test_led.c - тест драйвера последовательного канала
                 для учебного стенда SDK-1.1

    (C) test_led.c, Ключев А.О.  2007 г.

Это свободная программа; вы можете повторно распространять ее и/или
модифицировать ее в соответствии с Универсальной Общественной
Лицензией GNU, опубликованной Фондом Свободного ПО; либо версии 2,
либо (по вашему выбору) любой более поздней версии.

Эта программа распространяется в надежде, что она будет полезной,
но БЕЗ КАКИХ-ЛИБО ГАРАНТИЙ; даже без подразумеваемых гарантий
КОММЕРЧЕСКОЙ ЦЕННОСТИ или ПРИГОДНОСТИ ДЛЯ КОНКРЕТНОЙ ЦЕЛИ.  Для
получения подробных сведений смотрите Универсальную Общественную
Лицензию GNU.

Вы должны были получить копию Универсальной Общественной Лицензии
GNU вместе с этой программой; если нет, напишите по адресу: Free
Software Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA
02111-1307 USA

----------------------------------------------------------------------------
Россия, Санкт-Петербург, кафедра вычислительной техники СПбГУИТМО  
e-mail: kluchev@d1.ifmo.ru

****************************************************************************/
#include "aduc812.h"
#include "led.h"
#include "max.h"

// Задержка на заданное количество мс
void delay ( unsigned long ms )
{
volatile unsigned long i, j;

    for( j = 0; j < ms; j++ )
    {
        for( i = 0; i < 50; i++ );
    }

}
void first_animation(){
	int i;
	unsigned char leds_reg = 0x03;
	for(i = 0; i <= 10; i++){
		if(read_max(EXT_LO) != 0x33){
			return;
		}else{
			leds(leds_reg); delay(300);
			if(i < 7){
				leds_reg <<= 1;
			}else{
				leds_reg >>= 1;
			}
		}
	}
}
void second_animation(){
	int i;
	unsigned char leds_reg = 0x80;
	for(i = 0; i <= 10; i++){
	if(read_max(EXT_LO) != 0xCC){
		return;
	}else{
		leds(leds_reg); delay(300);
		if(i < 8){
			leds_reg >>= 1;
		}else{
			leds_reg <<= 1;
		}
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
