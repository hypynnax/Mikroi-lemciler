int kirmiziSolPin= 5;
int maviSolPin= 6;
int yesilSolPin= 7;
int kirmiziSagPin= 9;
int maviSagPin= 10;
int yesilSagPin= 11;
int delay_time= 500;

void setup(){
	pinMode(kirmiziSolPin,OUTPUT);
	pinMode(yesilSolPin,OUTPUT);
	pinMode(maviSolPin,OUTPUT);
 	pinMode(kirmiziSagPin,OUTPUT);
	pinMode(yesilSagPin,OUTPUT);
	pinMode(maviSagPin,OUTPUT);
}

void loop(){
	renkAyarla(255, 0, 0, 1); //kirmizi
	renkAyarla(0, 0, 255, 0); //mavi
	delay(delay_time);
  	renkAyarla(255, 0, 0, 0); //kirmizi
	renkAyarla(0, 0, 255, 1); //mavi
	delay(delay_time);
}

void renkAyarla(int kirmizi,int yesil, int mavi, int yon){
  if (yon == 1) {
	digitalWrite(kirmiziSolPin, kirmizi);
	digitalWrite(yesilSolPin, yesil);
	digitalWrite(maviSolPin, mavi);
  }else {
    digitalWrite(kirmiziSagPin, kirmizi);
	digitalWrite(yesilSagPin, yesil);
	digitalWrite(maviSagPin, mavi);
  }
}