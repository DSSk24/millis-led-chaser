int ed2 = 2;
int ed3 = 4;
int ed4 = 5;
unsigned long previousMillis = 0; 
const long interval  = 200;
const long interval2 = 400;
const long interval3 = 600;
const long interval4 = 601;
void setup() {
 
pinMode (ed2,  OUTPUT);
pinMode (ed3,  OUTPUT);
pinMode (ed4,  OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
unsigned long currentMillis = millis();

 if (currentMillis - previousMillis > interval && currentMillis - previousMillis < interval2){
digitalWrite (ed2,HIGH);digitalWrite (ed3,LOW);digitalWrite (ed4,LOW);}

if (currentMillis - previousMillis > interval2 && currentMillis - previousMillis < interval3){
digitalWrite (ed2,LOW);digitalWrite (ed3, HIGH);digitalWrite (ed4,LOW);}


 if (currentMillis - previousMillis > interval3){
digitalWrite (ed2,LOW);digitalWrite (ed3,LOW);digitalWrite (ed4,HIGH);}
  if (currentMillis - previousMillis > interval4){previousMillis = currentMillis;
  }
}
