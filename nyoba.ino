int blue = 0;
void setup()
{
    pinMode(blue, OUTPUT);
}

void loop()
{
    digitalWrite(blue, HIGH);
    delay(200);
    digitalWrite(blue, LOW);
    delay(200);
}