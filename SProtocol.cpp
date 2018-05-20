/* 
UNDER MIT LICENSE (for more detail see https://github.com/halogens/SProtocol/blob/master/LICENSE  )
created by ANIL CAN SAATCI 17.5.2018 hope it will help you achieve something well.


MIT LISANSI altinda paylasilmistir.Detayli bilgi icin yukaridaki linki ziyaret edebilirsiniz.
ANIL CAN SAATCI tarafından olusturulmustur. 17.05.2018 Umarim iyi bir sey basarmaniza yardim eder.



e-mail: vahsi.damacana@gmail.com
*/

#include "Arduino.h"
#include "SProtocol.h"

SProtocol::SProtocol(int saat, int ben, int dost)
{
  _saat=saat;
  _ben=ben;
  _dost=dost;
}

bool SProtocol::light(int x)
{
pinMode(_ben,OUTPUT);
pinMode(_dost,INPUT);
pinMode(_saat,OUTPUT);
digitalWrite(_ben,LOW);
digitalWrite(_saat,LOW);

digitalWrite(_saat,HIGH);
digitalWrite(_ben,bitRead(x,7));
while(!digitalRead(_dost)){

}
digitalWrite(_ben,bitRead(x,6));
digitalWrite(_saat,LOW);
while(digitalRead(_dost)){
}
digitalWrite(_ben,bitRead(x,5));
digitalWrite(_saat,HIGH);
while(!digitalRead(_dost)){

}
digitalWrite(_ben,bitRead(x,4));
digitalWrite(_saat,LOW);
while(digitalRead(_dost)){
}
digitalWrite(_ben,bitRead(x,3));
digitalWrite(_saat,HIGH);
while(!digitalRead(_dost)){

}
digitalWrite(_ben,bitRead(x,2));
digitalWrite(_saat,LOW);
while(digitalRead(_dost)){
}
digitalWrite(_ben,bitRead(x,1));
digitalWrite(_saat,HIGH);
while(!digitalRead(_dost)){

}
digitalWrite(_ben,bitRead(x,0));
digitalWrite(_saat,LOW);
while(digitalRead(_dost)){
}
return true;
}


bool SProtocol::event()
{
pinMode(_saat,INPUT);
return digitalRead(_saat);
}

int SProtocol::receive(){
	  pinMode(_ben,OUTPUT);
pinMode(_dost,INPUT);
pinMode(_saat,INPUT);
digitalWrite(_ben,LOW);
while(!digitalRead(_saat)){}
 b1=digitalRead(_dost);
digitalWrite(_ben,HIGH);
while(digitalRead(_saat)){}
 b2=digitalRead(_dost);
digitalWrite(_ben,LOW);

while(!digitalRead(_saat)){}
 b3=digitalRead(_dost);
digitalWrite(_ben,HIGH);
while(digitalRead(_saat)){}
 b4=digitalRead(_dost);
digitalWrite(_ben,LOW);


while(!digitalRead(_saat)){}
 b5=digitalRead(_dost);
digitalWrite(_ben,HIGH);
while(digitalRead(_saat)){}
b6=digitalRead(_dost);
digitalWrite(_ben,LOW);


while(!digitalRead(_saat)){}
b7=digitalRead(_dost);
digitalWrite(_ben,HIGH);
while(digitalRead(_saat)){}
b8=digitalRead(_dost);
digitalWrite(_ben,LOW);

return (b1*128)+(b2*64)+(b3*32)+(b4*16)+(b5*8)+(b6*4)+(b7*2)+b8;



	
	
	
	
}