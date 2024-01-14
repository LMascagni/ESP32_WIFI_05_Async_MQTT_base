#include <APPLICATION/application.h>
#include <HWCONFIG/hwConfig.h>

// Control on/off Plug 01 from payload
void driveOnOffPlug01(char *data)
{
    Serial.println(data);
    Serial.println(strncmp(data, "0", 1));
    Serial.println(strncmp(data, "1", 1));
    if (strncmp(data, "0", 1) == 0)
    {
        digitalWrite(pinPlug01, LOW);
        Serial.println("Plug 01 off");
    }
    else if (strncmp(data, "1", 1) == 0)
    {
        digitalWrite(pinPlug01, HIGH);
        Serial.println("Plug 01 on");
    }
}