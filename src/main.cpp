/*
 *
 */
#include <Arduino.h>
#include <IRremote.h>
//
#define  UNKNOWN    -1
#define  CH1        0xFFA25D
#define  CH         0xFF629D
#define  CH2        0xFFE21D
#define  PREV       0xFF22DD
#define  NEXT       0xFF02FD
#define  PLAYPAUSE  0xFFC23D
#define  VOL1       0xFFE01F
#define  VOL2       0xFFA857
#define  EQ         0xFF906F
#define  BUTON0     0xFF6897
#define  BUTON100   0xFF9867
#define  BUTON200   0xFFB04F
#define  BUTON1     0xFF30CF
#define  BUTON2     0xFF18E7
#define  BUTON3     0xFF7A85
#define  BUTON4     0xFF10EF
#define  BUTON5     0xFF38C7
#define  BUTON6     0xFF5AA5
#define  BUTON7     0xFF42BD
#define  BUTON8     0xFF4AB5
#define  BUTON9     0xFF52AD

//
const int RECV_PIN = 12;
IRrecv irrecv(RECV_PIN);
decode_results results;

//
void setup() 
{
  Serial.begin(9600);

  Serial.println("Enabling IRin");
  irrecv.enableIRIn();
  Serial.println("Enabled IRin");
}
//
void loop() 
{
    if (irrecv.decode(&results)) {
        const char* str = "";
        switch(results.value){
            case UNKNOWN:   str = "";           break;
            case CH1:       str = "CH-";        break;
            case CH:        str = "CH";         break;
            case CH2:       str = "CH+";        break;
            case PREV:      str = "PREV";       break;
            case NEXT:      str = "NEXT";       break;
            case PLAYPAUSE: str = "PLAY/PAUSE"; break;
            case VOL1:      str = "VOL-";       break;
            case VOL2:      str = "VOL+";       break;
            case EQ:        str = "EQ";         break;
            case BUTON0:    str = "BUTON0";     break;
            case BUTON100:  str = "BUTON100+";  break;
            case BUTON200:  str = "BUTON200+";  break;
            case BUTON1:    str = "BUTON1";     break;
            case BUTON2:    str = "BUTON2";     break;
            case BUTON3:    str = "BUTON3";     break;
            case BUTON4:    str = "BUTON4";     break;
            case BUTON5:    str = "BUTON5";     break;
            case BUTON6:    str = "BUTON6";     break;
            case BUTON7:    str = "BUTON7";     break;
            case BUTON8:    str = "BUTON8";     break;
            case BUTON9:    str = "BUTON9";     break;
            default:
                Serial.println(results.value, HEX);
                break;
        }
        Serial.println(str);

        irrecv.resume();
    }
    delay(100);
}
