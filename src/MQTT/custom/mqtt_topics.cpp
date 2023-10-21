#include <MQTT/custom/mqtt_topics.h>

// Dictionary of subscribed topics (ESP32 incoming topic)
Dictionary<String, String> subscribedTopics = Dictionary<String, String>();

// Dictionary of published topics (topic coming out of ESP32)
Dictionary<String, String> publishedTopics = Dictionary<String, String>();

// Compile the dictionary of subscribed topics (to be customized)
void compileSubTopics(Dictionary<String, String> &subTopics) {
  // Plug 01 control subscribed topic  
  subTopics.set("plug1OnOffTopic", thisClient "/plug1");
  // Plug 02 control subscribed topic
  subTopics.set("plug2OnOffTopic", thisClient "/plug2");
  // Plug 03 control subscribed topic
  subTopics.set("plug3OnOffTopic", thisClient "/plug3");
  // Plug 04 topic for printing messages
  subTopics.set("plug4OnOffTopic", thisClient "/plug4");
}

// Compile the dictionary of published topics (to be customized)
void compilePubTopics(Dictionary<String, String> &pubTopics) {
  // Message Publishing Topic
  pubTopics.set("outTopic", thisClient "/output");
}