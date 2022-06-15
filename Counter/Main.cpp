#include "Counter.h"


int main()
{
	Counter one;
	one.ShowCounter();

	Counter two(10000);
	two.ShowCounter();
	two.IncreaseCurrentByOne();

	Counter three(99999.9, 0, 99999, 0.1);
	three.ShowCounter();
	three.IncreaseCurrentByCounterIncrement();

	Counter four(0, 99999);
	four.ShowCounter();
	four.CounterReset();

	Counter five(10000);
	five.ShowCounter();
	five.SettingMaxValue();
	five.SettingMinValue();
	



}
