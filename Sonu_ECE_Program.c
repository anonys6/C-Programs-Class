int lightvall, lightval0;    // variables to store values of LDR
int lightpin0 = A0;     //  pin for LDR

int lightpinl = A2;     // pin for LDR

int posl = 90;          // initial position of servo
#include <Servo.h>      // importing servo library (header file)

Servo nel;      // creating servo object

void setup()        // setup function
{
    // put your setup code here, to run once:
    Serial.begin(9600);     // initializing serial monitor
    nel.attach(ll);     // attaching servo to pin 9
}

void loop()     // loop function
{

    lightval0 = analogRead(lightpin0);      // reading value from LDR
    Serial.println("Values of LDRO ");      // printing values of LDR
    Serial.println(lightval0);              // printing values of LDR

    lightvall = analogRead(lightpinl);      // reading value from LDR
    Serial.println("Values of LDRl ");      // printing values of LDR
    Serial.println(lightvall);              // printing values of LDR

    if (lightval0 > lightvall)
    {
        posl = ++posl;                      // incrementing servo position
        nel.write(posl);                    // writing servo position
        delay(20);                          // delay of 20ms
    }
}


int lightvall, lightval0;    // variables to store values of LDR
int lightpin0 = A0;     // pin for LDR
int lightpinl = A2;     // pin for LDR
int posl = 90;          // initial position of servo

#include <Servo.h>      // import servo library (header file)

Servo nel;      // create servo object

void setup()        // setup function
{
    // put your setup code here, to run once:
    Serial.begin(9600);     // initialize serial monitor
    nel.attach(posl);     // attach servo to pin 'posl'
}

void loop()     // loop function
{

    lightval0 = analogRead(lightpin0);      // read value from LDR
    Serial.println("Values of LDR0: ");      // print values of LDR0
    Serial.println(lightval0);              // print values of LDR0

    lightvall = analogRead(lightpinl);      // read value from LDR
    Serial.println("Values of LDRL: ");      // print values of LDRL
    Serial.println(lightvall);              // print values of LDRL

    if (lightval0 > lightvall)
    {
        posl++;                      // increment servo position
        nel.write(posl);             // write servo position
        delay(20);                   // delay of 20ms
    }
}
