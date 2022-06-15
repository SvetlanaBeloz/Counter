#include <iostream>

class Counter
{
	double current;
	double maximum;
	double minimum;
	double counterIncrement;

public:
	Counter();
	Counter(double c);
	Counter(double max, double min);
	Counter(double c, double max, double min, double i);

	void SetCurrent(double c);
	void SetMaximum(double max);
	void SetMinimum(double min);
	void SetCounterIncrement(double i);
	double GetCurrent() const;
	double GetMaximum() const;
	double GetMinimum() const;
	double GetCounterIncrement() const;

	void IncreaseCurrentByOne();
	void IncreaseCurrentByCounterIncrement();
	void CounterReset();
	void SettingMinValue();
	void SettingMaxValue();
	void ShowCounter();
};

