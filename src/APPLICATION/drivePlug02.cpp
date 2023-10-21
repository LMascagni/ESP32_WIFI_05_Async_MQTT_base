#include <APPLICATION/application.h>
#include <HWCONFIG/hwConfig.h>

// Control on/off Plug 02 from payload
void driveOnOffPlug02(char *data)
{
    if (strncmp(data, "0", 1) == 0)
    {
        digitalWrite(pinPlug02, LOW);
        Serial.println("Plug 02 off");
    }
    else if (strncmp(data, "1", 1) == 0)
    {
        digitalWrite(pinPlug02, HIGH);
        Serial.println("Plug 02 on");
    }
}