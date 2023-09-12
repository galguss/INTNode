#include "INTNode.h"

INTNode::INTNode(int value, INTNode* next){
    this->_val = value;
    this->_next = next;
}
int INTNode::GetVal(){ return this->_val; }
void INTNode::SetVal(int value){ this->_val = value; }
INTNode* INTNode::GetNext(){ return this->_next; }
void INTNode::SetNext(INTNode* next){ this->_next = next; }
bool INTNode::hasNext(){ return (this->_next != NULL); }