# include "array.h"

int function1(Array a){
	a.set(1,a.get(1)+10);
	return a.get(1);
};
int main (){
	Array a(100);
	int count = a.getSize();
	for (int i = 0; i < count; ++i)
	{
		a.set(i,i+5);
		printf("pozice%d hodnota%d\n",i,a.get(i));
	}
	Array b(a);
	count = b.getSize();
	for (int i = 0; i < count; ++i)
	{
		printf("poziceb%d hodnota%d\n",i,b.get(i));
	}
    Array c(20);
    b=c=c;
    count = b.getSize();
	for (int i = 0; i < count; ++i)
	{
		printf("poziceb%d hodnota%d\n",i,b.get(i));
	}
	int z = function1(a);
	printf("jetoz%d\n",z);
	 z = function1(b);
	printf("jetoz%d\n",z);
	 z = function1(c);
	printf("jetoz%d\n",z);
    return 0;
}