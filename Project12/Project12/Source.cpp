#include "Kolo.h"







int main()
{
	Priamokytnuk a(2, 2);
	int ploshchaPriam = a.GetPloshchaPriam();
	int perymetrPriam = a.PerymetrPriam();
	a.OutPutInfo2();

	Kolo b(2);
	a.FullInfoKolo();







	return 0;
}