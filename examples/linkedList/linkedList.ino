#include <INTNode.h>

INTNode* Head = new INTNode(10, new INTNode(5,new INTNode(4,new INTNode(8,NULL))));

void setup() {
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  INTNode* pos = Head;
  Serial.println("Start List");
  while (pos != NULL) {
    // Your loop code here
    int num = pos->GetVal();
    Serial.print("value = ");
    Serial.println(num);
    pos = pos->GetNext();
  }
  delay(500);
}
