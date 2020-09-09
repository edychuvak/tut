# include "array.h"

Array::Array(size_t size){
  mySize = size;
  myData = new int [mySize];
};
Array::~Array(){
	delete [] myData;
};
void Array::set(int i,int val){
	if(i<0 || i>(mySize-1)){
		return;
	}
	myData[i]=val;
};
int Array::get(int i){
	if(i<0||i>(mySize-1)){
		return -1;
	}
	return myData[i];
};	
size_t Array::getSize(){
	return mySize;

};