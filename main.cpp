# include "array.h"
int main (){
	Array a(100);
    for (int i = 0; i < a.getSize(); ++i)
    {
    	a.set(i,1);
    	printf("%d%d\n",i,a.get(i));
    }
    return 0;
}