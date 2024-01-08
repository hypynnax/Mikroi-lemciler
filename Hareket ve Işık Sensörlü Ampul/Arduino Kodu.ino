int ampulPin = 9;
int pirPin = 10;
int hareket;
int isik;



void setup(){
	pinMode(pirPin, INPUT);
  	pinMode(ampulPin, OUTPUT);
}


void loop(){
  	hareket = digitalRead(pirPin);
  	isik = analogRead(A0);

  	if (hareket == HIGH && isik <= 300) {
	    digitalWrite(ampulPin, HIGH);
  	}else {
	    digitalWrite(ampulPin, LOW);
  	}
}