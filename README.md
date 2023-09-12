# INTNode Arduino Library

## Description

The **INTNode** library provides a simple implementation of a singly linked list node for storing integer values in Arduino sketches. This library is designed to make it easy to work with linked lists in Arduino projects.

## Installation

1. **Download the Library**:
   - You can download the library from [GitHub Repository](https://github.com/galguss/INTNode.git).

2. **Install the Library**:
   - Open the Arduino IDE.
   - Go to `Sketch -> Include Library -> Add .ZIP Library...`
   - Select the downloaded `.zip` library file.
   - The library should now be installed and ready for use.

## Usage

### Including the Library

```cpp
// Creating an INTNode
#include <INTNode.h>
```

### Setting the top of the list
```cpp
INTNode* node = new INTNode(42, NULL);
```

### Getting and Setting Values
```cpp
int value = node->GetVal();
node->SetVal(99);
```

### Getting and Setting the Next Node
```cpp
INTNode* nextNode = node->GetNext();
node->SetNext(anotherNode);
```

### Checking for the Next Node
```cpp
bool hasNext = node->hasNext();
```

### Example
```cpp
#include <INTNode.h>

void setup() {
  Serial.begin(9600);
  
  // Create an INTNode
  INTNode* node = new INTNode(42, NULL);
  
  // Get and print the value
  int value = node->GetVal();
  Serial.println(value);
  
  // Check for the next node
  if (node->hasNext()) {
    // Get the next node
    INTNode* nextNode = node->GetNext();
    
    // Do something with the next node
  }
}

void loop() {
  // Your main code here
}
```
Contributing
If you'd like to contribute to this library, please follow these steps:

Fork the repository.
Create a new branch for your feature or bug fix.
Make your changes and test them thoroughly.
Submit a pull request with a clear description of your changes.
License
This library is released under the MIT License.

Author
GalGuss
GitHub: https://github.com/galguss
