#include <MQTT/mqtt_functions.h>
#include <MQTT/custom/custom.h>
#include <MQTT/custom/mqtt_topics.h>
#include <HWCONFIG/hwConfig.h>
#include <APPLICATION/application.h>

// What to do when a message is received
// It is invoked by mqtt_onMqttMessage()
void parseMessage(char *topic, char *payload, AsyncMqttClientMessageProperties properties, size_t len, size_t index, size_t total)
{
    // Payload cleanup
    // extracts only the first len characters from the payload
    char data[len + 1];
    strncpy(data, payload, len);

    // print some information about the received message
    printRcvMsg(topic, payload, properties, len, index, total);

    // to be customized

    // Plug 01 control
    // a message has arrived from plug1OnOffTopic
    if (strcmp(topic, subscribedTopics.get("plug1OnOffTopic").c_str()) == 0)
    {
        // Control on/off Plug 01 from payload
        driveOnOffPlug01(data);
    }

    // Plug 02 control
    // a message has arrived from plug2OnOffTopic
    else if (strcmp(topic, subscribedTopics.get("plug2OnOffTopic").c_str()) == 0) 
    {
        // Control on/off Plug 02 from payload
        driveOnOffPlug02(data);
    }

    // Plug 03 control
    // a message has arrived from plug3OnOffTopic
    else if (strcmp(topic, subscribedTopics.get("plug3OnOffTopic").c_str()) == 0) 
    {
        // Control on/off Plug 03 from payload
        driveOnOffPlug03(data);
    }    

    // Plug 04 control
    // a message has arrived from plug4OnOffTopic
    else if (strcmp(topic, subscribedTopics.get("plug4OnOffTopic").c_str()) == 0) 
    {
        // Control on/off Plug 04 from payload
        driveOnOffPlug04(data);
    }    
}