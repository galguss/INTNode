#ifndef INTNode_h
#define INTNode_h

#include "Arduino.h"

class INTNode{
    public:
    INTNode(int value, INTNode* next);
    int GetVal();
    void SetVal(int value);
    INTNode* GetNext();
    void SetNext(INTNode* next);
    bool hasNext();

    private:
    int _val;
    INTNode* _next;
};

#endif