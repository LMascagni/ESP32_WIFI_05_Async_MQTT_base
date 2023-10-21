#include <APPLICATION/application.h>
#include <HWCONFIG/hwConfig.h>

// Control on/off Plug 03 from payload
void driveOnOffPlug03(char *data)
{
    if (strncmp(data, "0", 1) == 0)
    {
        digitalWrite(pinPlug03, LOW);
        Serial.println("Plug 03 off");
    }
    else if (strncmp(data, "1", 1) == 0)
    {
        digitalWrite(pinPlug03, HIGH);
        Serial.println("Plug 03 on");
    }
}