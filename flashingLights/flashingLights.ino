int led13	=	13;
int led12	=	12;
int led11	=	11;
int led10	=	10;
int led9	=	9;
int led8	=	8;
int led7	=	7;
int led6	=	6;
int led5	=	5;
int led4	=	4;
int led3	=	3;
int val		=	0;
int potLed	=	2;


	void setup (){
		pinMode(led13, OUTPUT);
		pinMode(led12, OUTPUT);
		pinMode(led11, OUTPUT);
		pinMode(led10, OUTPUT);
		pinMode(led9, OUTPUT);
		pinMode(led8, OUTPUT);
		pinMode(led7, OUTPUT);
		pinMode(led6, OUTPUT);
		pinMode(led5, OUTPUT);
		pinMode(led4, OUTPUT);
		pinMode(led3, OUTPUT);


	}

	void loop(){
		val	=	analogRead(potLed);
		digitalWrite(led13, HIGH);
		digitalWrite(led12, HIGH);
		digitalWrite(led11, HIGH);
		digitalWrite(led10, HIGH);
		digitalWrite(led9, HIGH);
		digitalWrite(led8, HIGH);
		digitalWrite(led7, HIGH);
		digitalWrite(led6, HIGH);
		digitalWrite(led5, HIGH);
		digitalWrite(led4, HIGH);
		digitalWrite(led3, HIGH);
		delay(val);
		digitalWrite(led13, LOW);
		digitalWrite(led12, LOW);
		digitalWrite(led11, LOW);
		digitalWrite(led10, LOW);
		digitalWrite(led9, LOW);
		digitalWrite(led8, LOW);
		digitalWrite(led7, LOW);
		digitalWrite(led6, LOW);
		digitalWrite(led5, LOW);
		digitalWrite(led4, LOW);
		digitalWrite(led3, LOW);
		delay(val);


	}
