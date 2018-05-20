/* 
UNDER MIT LICENSE (for more detail see https://github.com/halogens/SProtocol/blob/master/LICENSE  )
created by ANIL CAN SAATCI 17.5.2018 hope it will help you achieve something well.


MIT LISANSI altinda paylasilmistir.Detayli bilgi icin yukaridaki linki ziyaret edebilirsiniz.
ANIL CAN SAATCI tarafından olusturulmustur. 17.05.2018 Umarim iyi bir sey basarmaniza yardim eder.



e-mail: vahsi.damacana@gmail.com
*/

#ifndef sptr_h
#define sptr_h
#include "Arduino.h"


class SProtocol
{
  public:
    SProtocol(int saat,int ben,int dost);
    bool event ();
    bool light(int x);
	int receive();
  private:
    int _saat;
	int _ben;
	int _dost;
	int b1;
	int b2;
	int b3;
	int b4;
	int b5;
	int b6;
	int b7;
	int b8;
	
};

#endif

