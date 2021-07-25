int Left;
int Right;
int time;
void setup()  
{    
    pinMode(5, OUTPUT);
    pinMode(6, OUTPUT);
    pinMode(7, OUTPUT);
    pinMode(8, OUTPUT);
    pinMode(A0, INPUT);
    pinMode(A2, INPUT);
    time=millis();
} 
void forward()
{
 digitalWrite(5, HIGH);
 digitalWrite(6, LOW);
 digitalWrite(7, LOW);
 digitalWrite(8, HIGH);
}
void backward()
{
 digitalWrite(6, HIGH);
 digitalWrite(5, LOW);
 digitalWrite(8, LOW);
 digitalWrite(7, HIGH);
    }
void left()
{
 digitalWrite(5, HIGH);
 digitalWrite(6, LOW);
 digitalWrite(7, HIGH);
 digitalWrite(8, HIGH);
}
void right()
{
 digitalWrite(5, HIGH);
 digitalWrite(6, HIGH);
 digitalWrite(7, LOW);
 digitalWrite(8, HIGH);
}
void clockwise()
{
 digitalWrite(5, HIGH);
 digitalWrite(6, LOW);
 digitalWrite(7, HIGH);
 digitalWrite(8, LOW);
}
void anticlockwise()
{
 digitalWrite(5, LOW);
 digitalWrite(6, HIGH);
 digitalWrite(7, LOW);
 digitalWrite(8, HIGH);
}
void stop1()
{
 digitalWrite(5, LOW);
     digitalWrite(6, LOW);
 digitalWrite(7, LOW);
 digitalWrite(8, LOW);
}
void loop()
{
 Left = digitalRead(A0);
 Right = digitalRead(A2);
 if(Left==0 && Right==0)
{
 forward();
}
else if(Left==1 && Right==0)
{
 right();
}
else if(Left==0 && Right==1)
{
 left();
}
else if(Left==1 && Right==1)
{
 forward();
}
if(time>=19500 && time<=2000)
{
 right();
 delay(200);
}
}
