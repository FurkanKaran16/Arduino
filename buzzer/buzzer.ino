const int buzzerPin=11;
#define do_ 561
#define re 194
#define mi 529
#define fa 149
#define sol 492
#define la 140
#define si 393
#define DOO 223
#define buzzerPin 11
int nota[] = {do_,re,mi,fa,sol,la,si,DOO};
void setup() {
  pinMode(buzzerPin,OUTPUT);

}

void loop() {
  for(int i=0;i<0;i++)
  {tone (buzzerPin,nota[i]);
  delay(500);
  };
  
}
