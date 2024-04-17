
#define analogPin A0
int digitalPin= D0;
int alor = 0; void setup() {
  
   pinMode(analogPin, OUTPUT);
   pinMode(digitalPin, OUTPUT);
   pinMode(LED_BUILTIN, OUTPUT);
   digitalWrite(digitalPin, HIGH);
   Serial.begin(115200);// put your setup code here, to run once:

}

void loop() {
    // put your main code here, to run repeatedly:
  alor =  analogRead(analogPin);
  Serial.print("Hodnota načítana zo senzoru: ");
  Serial.println(alor);
   if (alor < 500) {
    Serial.println("Prekročena nastavená hranica, senzor je mokrý!");
    digitalWrite(digitalPin, LOW);
    Serial.println(digitalPin);
    digitalWrite(LED_BUILTIN, HIGH);

    }
   else{}
   if (alor >= 500){
      Serial.println("Prekročena nastavená hranica, senzor je suchý!");
      digitalWrite(digitalPin, HIGH);
      Serial.println(digitalPin);

       digitalWrite(LED_BUILTIN, LOW); 
 
    }
   else{}// put
    delay(1000);
}
