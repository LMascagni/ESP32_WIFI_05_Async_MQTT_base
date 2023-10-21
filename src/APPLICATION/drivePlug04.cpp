#include <APPLICATION/application.h>
#include <HWCONFIG/hwConfig.h>

// Control on/off Plug 04 from payload
void driveOnOffPlug04(char *data)
{
    if (strncmp(data, "0", 1) == 0)
    {
        digitalWrite(pinPlug04, LOW);
        Serial.println("Plug 04 off");
    }
    else if (strncmp(data, "1", 1) == 0)
    {
        digitalWrite(pinPlug04, HIGH);
        Serial.println("Plug 04 on");
    }
}