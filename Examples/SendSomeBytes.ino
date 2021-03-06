
#include <SProtocol.h>
/* 
UNDER MIT LICENSE (for more detail see https://github.com/halogens/SProtocol/blob/master/LICENSE  )
created by ANIL CAN SAATCI 17.5.2018 hope it will help you achieve something well.


MIT LISANSI altinda paylasilmistir.Detayli bilgi icin yukaridaki linki ziyaret edebilirsiniz.
ANIL CAN SAATCI tarafından olusturulmustur. 17.05.2018 Umarim iyi bir sey basarmaniza yardim eder.

https://github.com/halogens
e-mail: vahsi.damacana@gmail.com
*/

/*This library has 4 functions
 * 1- configure of which pins you have connceted  ----   SProtocol SProtocol(2,4,3);
 * 2- send message  ----  SProtocol.light(example);
 * 3-recieve a message    ----   SProtocol.receive()
 * 4- chech if is there any message waiting from other device   ---- SProtocol.event()
 * 
 * 
 * You need to connect three digital pins beetwen devices.
 * 
 * in this exapmle 
 * ARDUINO 1        connected to     ARDUINO 2
 * Digital pin 2                     Digital pin 2 
 * Digital pin 3                     Digital pin 3  
 * Digital pin 4                     Digital pin 4 
 * 
 * if you are going to use different GPIO do this :
 * x for clock 1 
 * y for data
 * z for clock 2
 * for first device
 *     SProtocol SProtocol (x,y,z)
 *  for second device 
 *  SProtocol SProtocol (x,z,y)
 * 
 */
SProtocol SProtocol(2,4,3);
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
  // SProtocol.event() returns true if there is a message waiting from other device
while(SProtocol.event()){
//SProtocol.receive() return an int [0  -  255]  . this is a bit recieved from other device 
  
Serial.println(SProtocol.receive());
  
}
// SProtocol.light(x) x is a integer 0 to 255. this function will send the data 
SProtocol.light(253);

}
