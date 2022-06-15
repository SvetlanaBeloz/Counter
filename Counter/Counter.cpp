#include "Counter.h"

Counter::Counter() : Counter(1000, 0, 99999.9, 0.1) {};
Counter::Counter(double c) : Counter(c, 0, 99999.9, 0.1) {};
Counter::Counter(double max, double min) : Counter(1000, max, min, 0.1) {};
Counter::Counter(double c, double max, double min, double i)
{
	SetCurrent(c);
	SetMaximum(max);
	SetMinimum(min);
	SetCounterIncrement(i);
}

void Counter::SetCurrent(double c)
{
	if (c < 0 || c > 99999.9) {
		std::cout << "Incorrect value of counter\n";
		current = 0;
	}
	else
		current = c;
}

void Counter::SetMaximum(double max)
{
	maximum = 99999.9;
}

void Counter::SetMinimum(double min)
{
	minimum = 0;
}

void Counter::SetCounterIncrement(double i)
{
	if (i > 0 && i < 1)
		counterIncrement = i;
	else 
	counterIncrement = 0.1;
}

double Counter::GetCurrent() const
{
	return current;
}

double Counter::GetMaximum() const
{
	return maximum;
}

double Counter::GetMinimum() const
{
	return minimum;
}

double Counter::GetCounterIncrement() const
{
	return counterIncrement;
}

void Counter::IncreaseCurrentByOne()
{
	if (current == 99999)
		current = 0;
	else 
		current += 1;
	std::cout << "After increasing value of counter by one the current value is " << current << std::endl;
	std::cout << std::endl;
}

void Counter::IncreaseCurrentByCounterIncrement()
{
	if (current == 99999.9)
		current = 0;
	else 
		current += counterIncrement;
	std::cout << "After increasing value of counter by counter increment the current value is " << current << std::endl;
	std::cout << std::endl;
}

void Counter::CounterReset()
{
	current = 0;
	std::cout << "After counter reset the current value od counter is " << current << std::endl;
	std::cout << std::endl;
}

void Counter::SettingMinValue()
{
	current = 0;
	std::cout << "After setting minimum value the current value of counter is " << current << std::endl;
	std::cout << std::endl;
}

void Counter::SettingMaxValue()
{
	current = 99999.9;
	std::cout << "After setting maximum value the current value of counter is " << current << std::endl;
	std::cout << std::endl;
}

void Counter::ShowCounter()
{
	std::cout << "Current value of counter is " << GetCurrent() << std::endl;
	std::cout << "Maximum value of counter is " << GetMaximum() << std::endl;
	std::cout << "Minimum value of counter is " << GetMinimum() << std::endl;
	std::cout << "Counter increment value is " << GetCounterIncrement() << std::endl;
	std::cout << std::endl;
}


